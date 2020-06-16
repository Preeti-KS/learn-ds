#include <iostream>
#include <string>

using namespace std;


string arrayToString(int arr[], int start, int end) {
    string output = "[";

    for(int i=start; i<end; i++) {
        output.append(to_string(arr[i]));
        if (i != end-1) {
            output.append(", ");
        }
    }
    output.append("]");

    return output;
}


int productFromArray(int arr[], int start, int end) {
    int product = 1;
    for(int i=start; i<end; i++) {
        product = product * arr[i];
    }  

    return product;
}

void findAndPrintSubarrays(int arr[], int n) {
    int finalProduct = 1;
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            cout << arrayToString(arr, i, j+1) << endl;
            finalProduct *= productFromArray(arr, i, j+1);
        }
    }
    cout << "Product of all subarrays: " << finalProduct << endl;
}

int main() {
    int arr[] = {10, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    findAndPrintSubarrays(arr, n);
    return 0;
}