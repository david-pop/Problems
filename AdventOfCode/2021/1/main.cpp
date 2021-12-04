#include <iostream>

using namespace std;

int main(){
    int curr, prev, numIncreased;

    numIncreased = 0;
    cin >> prev;

    while(cin >> curr){
        if(curr > prev){
            numIncreased++;
        }
        prev = curr;
    }

    cout << numIncreased;

    return 0;
}