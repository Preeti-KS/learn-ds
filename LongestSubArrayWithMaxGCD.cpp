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

int gcd(int a, int b)
{
    if (a == 0)
        return b;

    return gcd(b > a ? b % a : a % b, b > a ? a : b);
}

int findGCD(int arr[], int start, int end)
{
    int result = arr[start];
    for (int i = start; i < end; i++)
    {
        result = gcd(arr[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int solve(int arr[], int n) {
    int finallength = 0;
    int finalgcd = 0;

    //Loop through all the element in array
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {

            int gcd = findGCD(arr, i, j+1);
            int length = (j+1)-i;

            if(gcd > finalgcd && length > finallength) {
                cout << arrayToString(arr, i, j+1) << endl;
                finalgcd = gcd;
                finallength = length;
            }
        }
    }
    cout << "finalgcd: " << finalgcd << endl;
    cout << "finallength: " << finallength << endl;
    return finallength;

}

int main() {

    int arr[] = {18, 27, 1, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = solve(arr, size);
    cout << "Subarray with max gcd of length is " << ans << endl;
    return 0;
}