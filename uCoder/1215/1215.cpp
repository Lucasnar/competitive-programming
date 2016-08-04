#include<cstdio>

int main(){
    int n, c=0, a;

    scanf(" %d", &n);

    for(int i = 5;i--;){
        scanf(" %d", &a);
        if (a == n)
            c++;
    }

    printf("%d\n", c);

    return 0;
}
