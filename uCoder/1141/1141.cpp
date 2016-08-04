#include<cstdio>

int main(){
    int a, b;

    scanf(" %d %d", &a, &b);

    printf("%s\n", (a + b) / 2 >= 7 ? (a + b) / 2 == 10 ? "APROVADO COM DISTINCAO" : "APROVADO" : "REPROVADO"); 

    return 0;
}
