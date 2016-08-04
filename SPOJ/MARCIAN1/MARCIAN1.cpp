#include<cstdio>
#include<math.h>

int main(){

    int l, a, p, r;
    scanf(" %d %d %d %d", &l, &a, &p, &r);

    if (pow(l, 2) + pow(a, 2) + pow(p, 2) <= 4 * pow(r, 2)){
        printf("S\n");
    }
    else printf("N\n");
    
    return 0;
}
