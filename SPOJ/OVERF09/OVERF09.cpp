#include<cstdio>

int main(){
    int n, n1, n2, total;
    char c;

    scanf(" %d %d %c %d", &n, &n1,&c, &n2);

    if (c == '+') total = n1 + n2;
    else total = n1 * n2;


    if (total <= n) printf("OK\n");
    else printf("OVERFLOW\n");

    return 0;
}
