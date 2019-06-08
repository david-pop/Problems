#include <iostream>
#include <vector>

using namespace std;

int main(){

    int b{}, n{};
    vector<int> reserves;
    vector<int> debts;

    int debtor{}, creditor{}, debt{};

    bool possible{};


    while(cin >> b >> n && !(b == 0 && n == 0)){
        possible = true;
        reserves = vector<int>(20, 0);
        debts = vector<int>(20, 0);

        for(int i = 0; i < b; ++i){
            cin >> reserves[i];
        }

        for(int i = 0; i < n; ++i){
            cin >> debtor >> creditor >> debt;

            debts[debtor - 1] += debt;
            reserves[creditor - 1] += debt;
        }

        for(int i = 0; i < b; ++i){
            if(debts[i] > reserves[i]){
                possible = false;
                break;
            }
        }

        if(possible){
            cout << 'S' << endl;
        }else{
            cout << 'N' << endl;
        }
    }

    return 0;
}
