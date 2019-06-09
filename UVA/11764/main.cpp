#include <iostream>

using namespace std;

int main(){

    int t{}, n{};

    int lows{}, highs{};

    int curr_height{}, prev_height;

    bool first{};

    cin >> t;

    for(int i = 1; i <= t; ++i){
        cin >> n;
        first = true;
        lows = 0;
        highs = 0;

        for(int j = 0; j < n; ++j){
            cin >> curr_height;

            if(first){
                first = false;
                prev_height = curr_height;
            }else{
                if(curr_height < prev_height){
                    ++lows;
                } else if(curr_height > prev_height){
                    ++highs;
                }
                prev_height = curr_height;
            }
        }

        cout << "Case " << i << ": " << highs << " " << lows << endl;
    }

    return 0;
}
