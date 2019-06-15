#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    int t{}, n{}, ind{};
    int x{};

    string cmd{};

    vector<int> prev(100);

    cin >> t;
    while(t--){
        x = 0;
        cin >> n;
        for(int i = 0; i < n; ++i){
            cin >> cmd;

            if(cmd == "LEFT"){
                --x;
                prev[i] = -1;
            }else if(cmd == "RIGHT"){
                ++x;
                prev[i] = 1;
            }else if(cmd == "SAME"){
                cin >> cmd;
                cin >> ind;
                x += prev[ind-1];
                prev[i] = prev[ind-1];
            }
        }

        cout << x << endl;
    }

    return 0;
}
