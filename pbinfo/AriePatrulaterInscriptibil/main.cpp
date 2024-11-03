#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    long double a, b, c, d, s;
    cin >> a >> b >> c >> d;
    s = (a + b + c + d) / 2;
    cout << fixed << setprecision(3);
    cout << ((long long)(sqrt((s-a)*(s-b)*(s-c)*(s-d)) * 1000)) / 1000.0;
    return 0;
}
