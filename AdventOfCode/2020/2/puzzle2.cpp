#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){

    int minInd, maxInd, numValid = 0, letterCount;
    char letter;

    char password[100];

    while(scanf("%d-%d %c: %s", &minInd, &maxInd, &letter, password) > 0){
        if((password[minInd - 1] == letter && password[maxInd - 1] != letter) || (password[minInd - 1] != letter && password[maxInd - 1] == letter)){
            numValid++;
        }
    }
    cout << numValid << endl;

    return 0;
}
