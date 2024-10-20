#include <iostream>

using namespace std;

int main(){
    int l, c;
    cin >> l >> c;

    cout << ((l*(l-1)/2) + c - 1) % 9 + 1;
    return 0;
}
