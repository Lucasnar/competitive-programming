#include<cstdio>

int main(){
    int l, r, d;

    scanf(" %d %d %d", &l, &r, &d);
    
    r > 50 && l < r && r > d ? printf("S\n") : printf("N\n");

    return 0;
}
