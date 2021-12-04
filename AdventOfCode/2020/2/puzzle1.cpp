#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){

    int minNum, maxNum, numValid = 0, letterCount;
    char letter;

    char password[100];

    while(scanf("%d-%d %c: %s", &minNum, &maxNum, &letter, password) > 0){
        letterCount = count(password, password + strlen(password), letter);
        if(minNum <= letterCount && letterCount <= maxNum){
            ++numValid;
        }
    }
    cout << numValid << endl;

    return 0;
}
