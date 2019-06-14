#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t{}, n{};
    int juice{}, mile{};
    int time{};

    cin >> t;
    for(int i = 1; i <= t; ++i){
        cin >> n;
        mile = 0;
        juice = 0;

        for(int j = 0; j < n; ++j){
            cin >> time;
            mile += (time / 30 + 1) * 10;
            juice += (time / 60 + 1) * 15;
        }

        cout << "Case " << i << ": ";

        if(mile <= juice){
            cout << "Mile ";
        }

        if(juice <= mile){
            cout << "Juice ";
        }

        cout << min(juice, mile) << endl;
    }

    return 0;
}
