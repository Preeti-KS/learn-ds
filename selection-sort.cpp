#include<iostream>
using namespace std;

void swap(int &a, int &b){
    if(&a != &b){
        int temp = a;
        a = b;
        b = temp;
    }
}

int find_min_index(int *arr, int start_index, int n){
    int min_index = start_index;

    for(int i=start_index+1; i<n; i++){
        if(arr[min_index] > arr[i]){
            min_index = i;
        }
    }
    return min_index;
}

void selection_sort(int *arr, int n){

    for(int i=0; i<n-1; i++){
        int min_index = find_min_index(arr, i, n);
        swap(arr[i], arr[min_index]);
    }
    
}

void print_array(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int input_array[] = {64, 25, 12, 22, 11, 0 , 5, -1, -2};
    int size = sizeof(input_array) / sizeof(int);

    cout << "Array befor sorting: \n";
    print_array(input_array, size);
    selection_sort(input_array, size);
    cout << "Array after sorting: \n";
    print_array(input_array, size);


}