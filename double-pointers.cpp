#include <iostream>
typedef int ll;
using namespace std;

int main() {

    ll arr[2][4][5] = {2, 3, 4};
    ll *p = (ll*) arr;
    cout << p[3] << endl;
    cout << p << endl;
    cout << arr << endl;
    cout << p+1 << endl;
    cout << arr+1 << endl;

    return 0;
}