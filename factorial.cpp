
#include <iostream>

using namespace std;

int factorial(int n) {

    return n > 0 ? n * factorial(n-1) : 1;
    
}


int main() {
    int n;

    cin >> n;
    cout << "Factorial of number " << n << " is " << factorial(n) << endl;
}