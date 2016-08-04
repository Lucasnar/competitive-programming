#include<cstdio>

int main(){
    int n1, n2;

    scanf(" %d %d", &n1, &n2);

    printf("%d\n", n1 <= n2 ? n2 : n1);

    return 0;
}
