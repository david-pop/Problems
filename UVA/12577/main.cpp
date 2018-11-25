#include <iostream>
#include <string>

using namespace std;

int main(){

    string line;
    int i = 0;

    while(true){
        cin >> line;
        i++;

        if(!line.compare("Hajj")){
            cout << "Case " << i << ": " << "Hajj-e-Akbar" << endl;
        }else if(!line.compare("Umrah")){
            cout << "Case " << i << ": " << "Hajj-e-Asghar" << endl;
        }else if(!line.compare("*")){
            break;
        }
    }

    return 0;
}
