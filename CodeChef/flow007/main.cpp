#include <iostream>

using namespace std;

inline int removeZeros(int num){
    while(num % 10 == 0){
        num /= 10;
    }

    return num;
}

inline int reverse(int num){
    num = removeZeros(num);

    int reversedNum = 0;

    while(num != 0){
        reversedNum = (num % 10) + reversedNum * 10;
        num /= 10;
    }

    return reversedNum;
}

int main(){
    int t, n;

    cin >> t;
    
    for(int i = 0;  i < t; ++i){
        cin >> n;
        cout << reverse(n) << endl;
    }

    return 0;
}