#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    int test_cases;
    cin >> test_cases;

    for(int i = 1; i <= test_cases; i++){
        int n;
        cin >> n;

        vector<int> numbers;

        for(int ii = 0; ii < n; ii++){
            int number;
            cin >> number;
            numbers.push_back(number);
        }

        cout << "Case " << i << ":" << endl;

        for(int ii = 0; ii < n; ii++){
            cout << (numbers[ii] & 0x0000FFFF);

            if(ii != n - 1){
                cout << " ";
            }
        }

        cout << endl;

        for(int ii = 0; ii < n; ii++){
            cout << ((numbers[ii] >> 16) & 0x0000FFFF);

            if(ii != n - 1){
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
