#include<cstdio>

int main(){
    int n, p, x, y, c=0;

    scanf(" %d %d", &n, &p);

    while(n--){
        scanf(" %d %d", &x, &y);
        if(x+y>=p)
            c++;
    }

    printf("%d\n", c);

    return 0;
}
