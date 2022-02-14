#include <cstdio>

int main(){

    int a, b, c;
    int n, m, p;

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &n, &m, &p);

    printf("%d\n", a*n + b*m + c*p);

    return 0;
}