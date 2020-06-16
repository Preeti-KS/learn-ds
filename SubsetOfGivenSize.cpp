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

void findSubsetsOfGivenSize(int arr[], int n, int r, int index, int subSet[], int i) {

    if (r == index) {
       string subSetString = arrayToString(subSet, r);
       printf("%s\n", subSetString.c_str());
       return;
    }

    if (i >= n){
        return;
    }

    subSet[index] = arr[i]; 
    findSubsetsOfGivenSize(arr, n, r, index + 1, subSet, i + 1); 
  
    findSubsetsOfGivenSize(arr, n, r, index, subSet, i + 1); 
}

void printSubsetOfGivenSize(int arr[], int n, int r) {
    int subSet[r];

    findSubsetsOfGivenSize(arr, n, r, 0, subSet, 0);
}


int main () {
    int arr[] = {1, 2, 3};
    int r = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    printSubsetOfGivenSize(arr, n, r);
    return 0;
}