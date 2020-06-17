#include<iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3};
    int* p = arr;
    int i=1;

    cout << &arr[i] << endl;
    cout << arr+i+1 << endl;
    cout << *(&arr[i]) << endl;
    cout << *(arr+i) << endl;

    
    for(int j=0; j<3; j++){
        cout << *(arr+j) << " ";
    }
    cout << endl;
    while(p < arr + 3) {
        cout << "value at " << p << " is " << p[2] << endl;
        p++;
    }
    // cout << endl;

    return 0;
}