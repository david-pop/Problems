#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double a, b, c, A, B, C;

    cin >> a >> b >> c;

    if(a+b<=c || a+c<=b || b+c<=a){
        cout << "Imposibil";
        return 0;
    }

    A = acos((b*b + c*c - a*a)/(2*b*c)) * 180.0 / M_PI;
    B = acos((a*a + c*c - b*b)/(2*a*c)) * 180.0 / M_PI;
    C = acos((b*b + a*a - c*c)/(2*b*a)) * 180.0 / M_PI;

    A = ((int)(A*100)) / 100.0;
    B = ((int)(B*100)) / 100.0;
    C = ((int)(C*100)) / 100.0;

    cout << fixed << setprecision(2);
    cout << B << " " << C << " " << A;

    return 0;
}

