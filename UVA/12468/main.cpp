#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int a{}, b{};

    int len1{}, len2{};

    while(cin >> a >> b && !(a == -1 && b == -1)){
        len1 = a - b;
        len1 = (len1 < 0) ? len1 + 100 : len1;

        len2 = b - a;
        len2 = (len2 < 0) ? len2 + 100 : len2;

        cout << min(len1, len2) << endl;
    }

    return 0;
}
