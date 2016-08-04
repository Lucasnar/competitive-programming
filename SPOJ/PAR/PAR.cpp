#include<cstdio>

int main(){
    int n, count = 0, p1, p2;
    char pessoa1[15];
    char pessoa2[15];

    while(true){
        scanf(" %d %s %s", &n, pessoa1, pessoa2);
        if (n == 0) break;
        ++count;
        printf("Teste %d\n", count);
        for (int i = 0; i<n; ++i){
            scanf(" %d %d", &p1, &p2);
            if ((p1 + p2) % 2 == 0) printf("%s\n", pessoa1);
            else printf("%s\n", pessoa2);
        }
        printf("\n");
    }

    return 0;
}
