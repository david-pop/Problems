#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    int t{};
    string s{};
    int r{};

    vector<string> links(10);
    vector<int> rel(10);

    int m{};

    cin >> t;
    for(int i = 1; i <= t; ++i){
        m = 0;

        for(int j = 0; j < 10; ++j){
            cin >> s >> r;
            m = max(m, r);

            rel[j] = r;
            links[j] = s;
        }

        cout << "Case #" << i << ":" << endl;
        for(int j = 0; j < 10; ++j){
            if(rel[j] == m){
                cout << links[j] << endl;
            }
        }
    }

    return 0;
}
