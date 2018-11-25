#include <iostream>

using namespace std;

int main(){

    int t;
    int n1, n2, n3;
    int temp;

    cin >> t;

    for(int i = 1; i <= t; i++){
        cin >> n1 >> n2 >> n3;

        if(n1 > n2){
            temp = n1;
            n1 = n2;
            n2 = temp;
        }

        if(n2 > n3){
            temp = n2;
            n2 = n3;
            n3 = temp;
        }

        if(n1 > n2){
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        cout << "Case " << i << ": " << n2 << endl;
    }

    return 0;
}
