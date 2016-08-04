#include<cstdio>

int main(){
    int n, m;
    scanf("%d%d",&n,&m);
    printf("%d\n", (n%m > m%n ? n%m : m%n));
    return 0;
}
