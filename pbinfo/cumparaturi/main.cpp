#include <cstdio>

int main(){

    int b, s;

    scanf("%d %d", &b, &s);

    printf("%d %d\n",  s / b, b - (s % b));

    return 0;
}