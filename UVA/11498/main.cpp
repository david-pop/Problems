#include <iostream>

using namespace std;

int main(){
    int k;
    int orgX, orgY;
    int x, y;

    while(true){
        cin >> k;
        if(k == 0){
            break;
        }

        cin >> orgX >> orgY;

        while(k--){
            cin >> x >> y;

            if(x == orgX || y == orgY){
                cout << "divisa" << endl;
            }else if(x > orgX && y > orgY){
                cout << "NE" << endl;
            }else if(x > orgX && y < orgY){
                cout << "SE" << endl;
            }else if(x < orgX && y < orgY){
                cout << "SO" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
