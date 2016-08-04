#include<cstdio>

int main(){
    int n, m,dif, c=0, d=0;

    scanf(" %d %d", &n, &m);

    dif= m-n;

    while(d<m)
        d += dif, ++c;

    printf("%d\n", c);

    return 0;
}
