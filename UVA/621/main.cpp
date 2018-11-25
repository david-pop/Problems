#include <iostream>

using namespace std;

int main(){
    int t;
    string s;

    cin >> t;

    while(t--){
        cin >> s;

        if(!s.compare("1") || !s.compare("4") || !s.compare("78")){
            cout << "+" << endl;
        }else if(!s.substr(s.length() - 2, 2).compare("35")){
            cout << "-" << endl;
        }else if(s[0] == '9' && s[s.length()-1] == '4'){
            cout << "*" << endl;
        }else{
            cout << "?" << endl;
        }
    }

    return 0;
}
