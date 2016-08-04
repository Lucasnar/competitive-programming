#include<cstdio>

int main(){
    int mb, mbps;

    scanf(" %d %d", &mb, &mbps);

    printf("%d\n", mb * 8 / mbps);

    return 0;
}
