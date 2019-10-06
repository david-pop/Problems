#include <iostream>

using namespace std;

int main(){
    double h, u, d, f;
    double c;
    int day;

    while((cin >> h >> u >> d >> f) && (h != 0)){
        f /= 100.0;
        f *= u;

        day = 1;
        c = 0;

        while(h > 0){
            c += u;

            if(c > h){
                cout << "success on day " << day << endl;
                break;
            }

            c -= d;

            u -= f;
            if(u < 0){
                u = 0;
            }


            if(c < 0){
                cout << "failure on day " << day << endl;
                break;
            }
            day++;

        }
    }

    return 0;
}
