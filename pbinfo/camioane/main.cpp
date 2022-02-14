#include <cstdio>

int main(){

    int t1, t2, n, m, z;

    scanf("%d %d %d %d %d", &t1, &t2, &n, &m, &z);

    printf("%d\n", z * (t1 * n + t2 * m));

    return 0;
}