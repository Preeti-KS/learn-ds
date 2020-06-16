#include <iostream>
using namespace std;

void swap(int &arrElement1, int &arrElement2) {
    int temp = arrElement1;
    arrElement1 = arrElement2;
    arrElement2 = temp;
}

void moveZerosToEndOfArray(int *array, int size) {
    int j = 0;
    
    for (int i=0; i<size; i++) {
        if (array[i] != 0 && array[j] == 0)
        {
            swap(array[i], array[j]);
        }
        if (array[j] != 0)
            j+=1;
    }
    
}

void printArray(int *array, int size) {
    for (int i=0; i<size; i++){
        std::cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {0, 0, 0, 0, 0, 0, 4, 0, 0, 0};
    int size = sizeof(array) / sizeof(array[0]);
    moveZerosToEndOfArray(array, size);
    printArray(array, size);
    
    return 0;
}