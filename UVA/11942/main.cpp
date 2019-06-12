#include <iostream>

using namespace std;

int main(){

    int n{};
    bool increasing{}, decreasing{};

    int prev{}, curr{};

    cin >> n;

    cout << "Lumberjacks:" << endl;

    for(int i = 0; i < n; ++i){
        increasing = true;
        decreasing = true;

        for(int j = 0; j < 10; ++j){
            cin >> curr;

            if(j != 0){
                increasing = increasing && (curr > prev);
                decreasing = decreasing && (curr < prev);
            }

            prev = curr;
        }

        if(increasing || decreasing){
            cout << "Ordered" << endl;
        }else{
            cout << "Unordered" << endl;
        }
    }

    return 0;
}
