#include<iostream>
using namespace std;
void print_array(int*, int);
void swap(int &, int &);
/* Program to reverse the array */
void reverse_array(int *arr, int n) {
    for(int i=0, j=n-1; i<j; i++, j--) {
        swap(arr[i], arr[j]);
    }
}
int main() {
    int inputArray[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(inputArray) / sizeof(int);
    print_array(inputArray, n);
    reverse_array(inputArray, n);
    print_array(inputArray, n);
    return 0;
}
/* Utility functions */
void swap(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
void print_array(int* arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}