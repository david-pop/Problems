#include <iostream>
#include <string>

using namespace std;

int main(){
    string command;
    int parameter;

    int x = 0;
    int y = 0;
    int aim = 0;

    while(cin >> command){
        cin >> parameter;

        if(command == "forward"){
            x += parameter;
            y += aim * parameter;
        }else if(command == "up"){
            aim -= parameter;
        }else if(command == "down"){
            aim += parameter;
        }
    }

    cout << x * y << endl;

    return 0;
}