#include <iostream>

using namespace std;

int main(){
    int c, n, k;
    cin >> c >> n >> k;

    if ( c==1 ) {
        cout << (n - 1) * 2 + 1;
    } else {
        cout << (n - k) * 2 + 1;
    }

    return 0;
}
