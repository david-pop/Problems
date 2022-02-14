#include <cstdio>

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int sab = (b*(b+1) - a*(a-1)) / 2;
    int sbc = (c*(c+1) - b*(b-1)) / 2;
    int sac = (c*(c+1) - a*(a-1)) / 2;
    

    printf("%d %d %d\n", sab, sbc, sac);

    return 0;
}