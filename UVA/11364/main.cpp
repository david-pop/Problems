#include <iostream>

using namespace std;

int main(){
    int tc;
    int sc;

    int min;
    int max;

    int temp;

    cin >> tc;

    while(tc--){
        cin >> sc;

        min = 100;
        max = -1;

        while(sc--){
            cin >> temp;

            if(temp > max){
                max = temp;
            }

            if(temp < min){
                min = temp;
            }
        }
        cout << (max - min) * 2 << endl;
    }
}
