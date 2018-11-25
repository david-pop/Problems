#include <iostream>

using namespace std;

int main(){
    int i = 0;
    int n;

    while(true){
        i++;
        cin >> n;
        if(n == 0){
            break;
        }

        int zeros = 0;
        int pos = 0;
        int temp;

        while(n--){
            cin >> temp;
            if(temp == 0){
                zeros++;
            }else{
                pos++;
            }
        }

        cout << "Case " << i << ": " << (pos - zeros) << endl;
    }

    return 0;
}
