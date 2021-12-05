#include <iostream>
#include <string>

using namespace std;

int main(){
    string command;
    int parameter;

    int x = 0;
    int y = 0;

    while(cin >> command){
        cin >> parameter;

        if(command == "forward"){
            x += parameter;
        }else if(command == "up"){
            y -= parameter;
        }else if(command == "down"){
            y += parameter;
        }
    }

    cout << x * y << endl;

    return 0;
}