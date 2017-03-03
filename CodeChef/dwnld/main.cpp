#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int test_cases;
    cin >> test_cases;

    for(int i = 0; i < test_cases; i++){
        int n, k;
        cin >> n >> k;

        int cost = 0;

        for(int ii = 0; ii < n; ii++){
            int ti, di;
            cin >> ti >> di;

            if(k >= ti){
                k -= ti;
                ti = 0;
            }else{
                ti -= k;
                k = 0;
            }

            cost += ti * di;
        }

        cout << cost << endl;
    }

    return 0;
}
