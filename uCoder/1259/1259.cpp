#include<cstdio>

int main(){
    int n;

    while(true){
        scanf(" %d", &n);
        if (n==-1) break;

        n==31 ? printf("31") : printf("%d",31%n);
        printf("\n");
    }

    return 0;
}
