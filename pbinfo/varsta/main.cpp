#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, d, x;
    cin >> a >> b >> c >> d;

    if(c/d == 1){
        x = 0;
    }else{
        x = (int)((b * c / d - a) / (1 - c / d) * 100) / 100.0;
    }

    cout << fixed << setprecision(2);
    cout << x;

    return 0;
}
