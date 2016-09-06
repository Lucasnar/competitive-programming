#include<cstdio>

int main(){
    int n;
    
    scanf(" %d", &n);

    for(int i = 1; i<=n; ++i){
        if (i*i > n)
            break;
        printf("%d", i*i);
        if ((i+1)*(i+1) <= n)
            printf(" ");
    }

    printf("\n");

    return 0;
}
