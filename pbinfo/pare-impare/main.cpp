#include <iostream>

using namespace std;

int main(){
    int a, b, c, p;
    cin >> a >> b >> c;

    p = 0;
    p += (a % 2 == 0) ? 1 : 0;
    p += (b % 2 == 0) ? 1 : 0;
    p += (c % 2 == 0) ? 1 : 0;
    
    if(p >= 2){
        cout << "pare";
    }else {
        cout << "impare";
    }

    return 0;
}
