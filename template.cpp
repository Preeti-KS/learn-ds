#include <iostream>
using namespace std;

template <typename I, typename O>
O sum(I a, I b){
    cout << a << endl;
    cout << b << endl;
    return a + b;
}


//Driver
int main() {

    cout << sum<int, int>(9, 8) << endl;
    cout << sum<char, int>(49.7, 52.8) << endl;

    return 0;
}