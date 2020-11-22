#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

inline int love(string s){
    int result = 0;

    for ( char ch : s ){
        ch = ( ch + 1 - 65 ) % 32;
        if ( 1 <= ch && ch <= 26 ){
            result += ch;
        }
    }

    return result;
}

inline int love(int i){
    int result = 0;

    while ( i > 0 ) {
        result += i % 10;
        i /= 10;
    }

    return result;
}

int main(){

    string name1, name2;
    int res1, res2;
    double ratio;
    
    while( getline(cin, name1), getline(cin, name2) ){
        res1 = love(name1);
        res2 = love(name2);

        while(res1 >= 10) {
            res1 = love(res1);
        }

        while(res2 >= 10){
            res2 = love(res2);
        }

        if(res1 > res2){
            swap(res1, res2);
        }

        ratio = ((double)res1 / res2) * 100;

        cout << fixed << setprecision(2) << ratio << " %" << endl;
    }

    return 0;
}
