#include <iostream>
#include <string>

using namespace std;

int main(){

    string w;
    int i = 0;

    while(true){
        getline(cin, w);
        i++;

        if(!w.compare("#")){
            break;
        }else{
            cout << "Case " << i << ": ";

            if(!w.compare("HELLO")){
                cout << "ENGLISH" << endl;
            }else if(!w.compare("HOLA")){
                cout << "SPANISH" << endl;
            }else if(!w.compare("HALLO")){
                cout << "GERMAN" << endl;
            }else if(!w.compare("BONJOUR")){
                cout << "FRENCH" << endl;
            }else if(!w.compare("CIAO")){
                cout << "ITALIAN" << endl;
            }else if(!w.compare("ZDRAVSTVUJTE")){
                cout << "RUSSIAN" << endl;
            }else{
                cout << "UNKNOWN" << endl;
            }
        }
    }

    return 0;
}
