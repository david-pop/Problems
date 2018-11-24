#include <iostream>

using namespace std;

int main(){
    char c;
    bool on = true;

    while(cin.get(c)){
        if(c == '\"'){
            if(on){
                on = false;
                cout << "``";
            }else{
                on = true;
                cout << "''";
            }
        }else{
            cout << c;
        }
    }
}
