#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int test_cases;
    cin >> test_cases;

    for(int i = 0; i < test_cases; i++){
        int months;
        cin >> months;

        int debt = 0;
        int fees = 0;

        for(int ii = 0; ii < months; ii++){
            int payment;
            cin >> payment;

            if(payment == 0){
                debt += 1000;
                fees += 100;
            }else if(debt > 0){
                fees += 100;
            }
        }

        cout << debt + fees << endl;
    }

    return 0;
}
