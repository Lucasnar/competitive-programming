#include<cstdio>

int main(){
    int n, valor=0;
    scanf("%d", &n);

    for (int i=n; i>0; --i){
        if (i > 100) valor += 5;
        else if(i > 30) valor += 2;
        else if(i > 10) valor += 1;
        else break;
    }
    printf("%d\n", valor+7);


    return 0;
}
