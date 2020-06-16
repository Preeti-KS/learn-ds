#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


string arrayToString(int subSet[], int n) {
    string output = "[";

    for(int i=0; i<n; i++) {
        output.append(to_string(subSet[i]));
        if (i != n-1) {
            output.append(", ");
        }
    }
    output.append("]");

    return output;
}

void printSubsets(int arr[], int n, int subSet[], int index, int i) {

    if (n == i) {
       string subSetString = arrayToString(subSet, index);
       printf("%s\n", subSetString.c_str());
       return;
    }

    if (i >= n){
        return;
    }  

    subSet[index] = arr[i];
    printSubsets(arr, n, subSet, index + 1, i + 1);

    printSubsets(arr, n, subSet, index, i + 1); 

}

void findAndPrintSubsets(int arr[], int n) {
    int subSet[n];

    printSubsets(arr, n, subSet, 0, 0);
}


int main () {
    int arr[] = {10, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    //for (int i=0; i<n; i++){
    findAndPrintSubsets(arr, n);
    //}
    return 0;
}