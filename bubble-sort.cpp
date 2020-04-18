#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    if(&a != &b){
        int temp = a;
        a = b;
        b = temp;
    }
}

void print_array(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble_sort(int *arr, int n){
    int swaps = 0;

    for(int i=0; i<n-1; i++){
        swaps = 0;
        for(int j=0; j<n-i-1; j++){
            if(arr[j+1] < arr[j]){
                swap(arr[j], arr[j+1]);
                swaps = swaps + 1;
            }
        }
        if(swaps == 0){
            break;
        }
    }
}

int main(){

    int input_array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(input_array)/sizeof(int); 

    cout << "Array before sorting: \n";
    print_array(input_array, size);

    bubble_sort(input_array, size);
    cout << "Array after sorting: \n";
    print_array(input_array, size);

    return 0;
}