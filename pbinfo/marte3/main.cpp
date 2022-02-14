#include <cstdio>

int main(){

    int x, y, n;

    scanf("%d %d %d", &x, &y, &n);

    int ani = (n / y) / x;
    int zile = (n / y) % x;
    int ore = n % y;
    

    printf("%d\n%d\n%d\n", ani, zile, ore);

    return 0;
}