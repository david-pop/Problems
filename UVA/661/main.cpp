#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, c;
    int test_case = 1;
    vector<int> consumption = vector<int>(20, 0);
    int device;
    int total;
    int max;
    bool fuse_blown;

    while((cin >> n >> m >> c) && !(n == 0 && m == 0 && c == 0)){
        total = 0;
        max = 0;
        fuse_blown = false;

        for(int i = 0; i < n; i++){
            cin >> consumption[i];
        }

        for(int i = 0; i < m; i++){
            cin >> device;
            device--;

            total += consumption[device];
            consumption[device] = -consumption[device];

            if(total > c){
                fuse_blown = true;
            }

            if(total > max){
                max = total;
            }
        }

        cout << "Sequence " << test_case << endl;

        if(fuse_blown){
            cout << "Fuse was blown." << endl;
        }else{
            cout << "Fuse was not blown." << endl;
            cout << "Maximal power consumption was " << max << " amperes." << endl;
        }
        cout << endl;

        test_case++;
    }

    return 0;
}
