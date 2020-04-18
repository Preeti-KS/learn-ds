#include <iostream>
using namespace std;

void print_array(int* arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
} 

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

void reverse_array(int *input_arr, int size) {

    for(int i=0; i<size/2; i++){ 
        swap(input_arr[i], input_arr[size-i-1]);
    }
}

int main() {

    int input_arr[] = { 2, 4, 5, 6, 7, 1};
    int size = sizeof(input_arr) / sizeof(int);

    cout << "Array before reversal: \n"; 
    print_array(input_arr, size);
    reverse_array(input_arr, size);
    cout << "Array after reversal: \n";
    print_array(input_arr, size);

    
}





