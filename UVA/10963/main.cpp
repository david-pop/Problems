#include <iostream>

using namespace std;

int main(){
    int tests{};
    int cols{};

    int diff{};

    int top{};
    int bottom{};

    bool possible{};

    cin >> tests;

    while(tests--){
        diff = -1;
        possible = true;

        cin >> cols;

        while(cols--){
            cin >> top >> bottom;

            if(diff == -1){
                diff = top - bottom;
            }else{
                if(diff != top - bottom){
                    possible = false;
                }
            }
        }

        if(possible){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }

        if(tests){
            cout << endl;
        }
    }
}
