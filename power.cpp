
#include <iostream>

using namespace std;

int power(int n, int p) {

    return p > 0 ? n * power(n, p-1) : 1;
    
}


int main() {
    int n;
    int p;
    cin >> n;
    cin >> p;
    cout << "Power of number " << n << " is " << power(n, p) << endl;
}