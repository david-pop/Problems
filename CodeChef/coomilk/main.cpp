#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    int test_cases;
    cin >> test_cases;

    for(int i = 0; i < test_cases; i++){
        int minutes;
        cin >> minutes;

        string last_action;
        cin >> last_action;

        bool failed = false;

        for(int ii = 1; ii < minutes; ii++){
            string current_action;
            cin >> current_action;

            if(last_action.compare("cookie") == 0
            && current_action.compare("cookie") == 0){
                failed = true;
            }

            if(!failed){
                last_action = current_action;
            }
        }

        if(last_action.compare("cookie") == 0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
