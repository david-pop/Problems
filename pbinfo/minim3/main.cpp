#include <iostream>
#include <climits>

using namespace std;

int main(){
    int a, b, c, min;
    cin >> a >> b >> c;
    min = INT_MAX;

    if(a < min){
        min = a;
    }

    if(b < min){
        min = b;
    }

    if(c < min){
        min = c;
    }

    cout << min;

    return 0;
}
