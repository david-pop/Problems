#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int test_cases;
    cin >> test_cases;

    for(int i = 0; i < test_cases; i++){
        int n;
        cin >> n;

        int temp = 5;
        int zeros = 0;

        while(temp <= n){
            zeros += n / temp;
            temp *= 5;
        }

        cout << zeros << endl;

    }

    return 0;
}
