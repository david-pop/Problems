#include <iostream>

using namespace std;

int main(){

    int t;
    int n;
    cin >> t;

    while(t--){
        cin >> n;
        n = (((n * 567 / 9 + 7492) * 235  / 47 - 498) / 10) % 10;
        n *= (n < 0) ? -1: 1;
        cout << n << endl;
    }

    return 0;
}
