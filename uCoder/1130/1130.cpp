#include<cstdio>

int main(){
    int f, r;

    scanf(" %d", &f);

    r = 5 * (f -32) / 9;

    printf("%d\n", r>=0 ? r: r-1);

    return 0;
}
