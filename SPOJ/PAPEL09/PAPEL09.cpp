#include<cstdio>

int main(){
    int c, p, f;

    scanf(" %d %d %d", &c, &p, &f);

    if(f * c <= p) printf("S\n");
    else printf("N\n");

    return 0;
}
