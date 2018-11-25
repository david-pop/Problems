#include <iostream>

int main(){
    int org, p1, p2, p3;

    while(scanf("%i %i %i %i", &org, &p1, &p2, &p3)){
        if(org == 0 && p1 == 0 && p2 == 0 && p3 == 0){
            break;
        }

        int deg = 0;
        deg += 720 + ((org - p1 + 40) % 40) * 9;
        org = p1;

        deg += 360 + ((p2 - org + 40) % 40) * 9;
        org = p2;

        deg += ((org - p3 + 40) % 40) * 9;

        printf("%i\n", deg);
    }

    return 0;
}
