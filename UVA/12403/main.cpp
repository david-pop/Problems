#include <iostream>
#include <string>

using namespace std;

int main(){

    string command;
    int sum;
    int donation;
    int t;

    cin >> t;

    while(t--){
        cin >> command;

        if(!command.compare("donate")){
            cin >> donation;
            sum += donation;
        }else{
            cout << sum << endl;
        }
    }


    return 0;
}
