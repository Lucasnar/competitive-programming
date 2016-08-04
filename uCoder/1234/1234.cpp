#include<cstdio>

int main(){
    int a;

    scanf(" %d", &a);

    printf("%c\n", a % 4 == 0 ? 'S' : 'N');

    return 0;
}
