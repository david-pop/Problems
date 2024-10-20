#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    cout << n;

    if( n%2 == 0 ) {
        cout << " este par";
    } else {
        cout << " este impar";
    }
    return 0;
}
