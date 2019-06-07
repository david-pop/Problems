#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(){

    int n{}, b{}, h{}, w{};

    bool found{};

    int min_sum{}, temp_sum{};

    int price{}, avail{};

    while(cin >> n >> b >> h >> w){
        found = false;
        min_sum = INT_MAX;

        for(int i = 0; i < h; ++i){
            cin >> price;
            for(int j = 0; j < w; ++j){
                cin >> avail;
                if(n <= avail){
                    temp_sum = n * price;
                    if(temp_sum <= b){
                        min_sum = min(min_sum, temp_sum);
                        found = true;
                    }
                }
            }
        }

        if(found){
            cout << min_sum << endl;
        }else{
            cout << "stay home" << endl;
        }
    }

    return 0;
}
