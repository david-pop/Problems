#include <cstdio>

using namespace std;

int main(){

    int n, r;
    int sumDigits, numberApplicable;
    long long inputNumber;

    scanf("%d%d", &n, &r);
    numberApplicable = 0;

    while(n > 0){

        scanf("%lld", &inputNumber);
        sumDigits = 0;

        while(inputNumber > 0){
            sumDigits += inputNumber % 10;
            inputNumber /= 10; 
        }

        if(sumDigits % 9 == r){
            ++numberApplicable;
        }

        --n;
    }

    printf("%d\n", numberApplicable);

    return 0;
}