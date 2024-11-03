#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double r, A, V;
    cin >> r;

    A = ((long long)(4 * M_PI * r * r * 100)) / 100.0;
    V = ((long long)(4 * M_PI * r * r * r * 100 / 3)) / 100.0;

    cout << fixed << setprecision(2);
    cout << A << " " << V;
    
    return 0;
}
