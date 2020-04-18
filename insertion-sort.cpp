#include<iostream>
using namespace std;

void insertion_sort(int*, int);
void swap(int&, int&);
void print_array(int*, int);

int swaps = 0;

int main(){
    int input_array[] = {1, 2, 3, 4, 5, 6, 10, 12};
    // int input_array[] = {12, 10, 6, 5, 4, 3, 2, 1};
    int size = sizeof(input_array) / sizeof(int);
    insertion_sort(input_array, size);
    print_array(input_array, size);

    cout << "number of swaps: " << swaps << endl;

    return 0;
}

void swap(int &a, int &b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    swaps++;
}

void insertion_sort(int *arr, int n){

    for(int i=1; i<n; i++){
        for (int j=i; j>0; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
        }
    }

}

void print_array(int* arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}