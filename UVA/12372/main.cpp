#include <iostream>

using namespace std;

int main(){
    int t;
    int n1, n2, n3;

    cin >> t;

    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";

        cin >> n1 >> n2 >> n3;

        if(n1 > 20 || n2 > 20 || n3 > 20){
            cout << "bad" << endl;
        }else{
            cout << "good" << endl;
        }
    }

    return 0;
}
