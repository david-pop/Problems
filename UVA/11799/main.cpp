#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t{}, n{};

    int max_speed{}, speed{};

    cin >> t;

    for(int i = 1; i <= t; ++i){
        cin >> n;
        max_speed = 0;

        for(int j = 0; j < n; ++j){
            cin >> speed;
            max_speed = max(max_speed, speed);
        }

        cout << "Case " << i << ": " << max_speed << endl;
    }

    return 0;
}
