#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

char frase[56][128];
char frase_atual[56][128];
char palavra_atual[128];
int n, q, flag1, flag2, chave, pos;


void print_frase(int n){
    if (n ==1)
        for(int i = 0; frase[i][0]; ++i){
            printf("frase[%d] = ", i);
            for(int j =0; frase[i][j]; ++j)
                printf("%c", frase[i][j]);
            printf("\n");
        }
    else
        for(int i = 0; frase_atual[i][0]; ++i){
            printf("frase[%d] = ", i);
            for(int j =0; frase_atual[i][j]; ++j)
                printf("%c", frase_atual[i][j]);
            printf("\n");
        }
}

void split(int n){

    if (n == 1){
        for(int i = 0, j=0, k=0; palavra_atual[i]; ++i)
            if (palavra_atual[i] == ' '){
                frase[j][k] = '\0';
                ++j;
                k=0;
            }
            else{
                frase[j][k] = palavra_atual[i], ++k;
            }
    }
    else
        for(int i = 0, j=0, k=0; palavra_atual[i]; ++i)
            if (palavra_atual[i] == ' '){
                frase_atual[j][k] = '\0';
                ++j;
                k=0;
            }
            else
                frase_atual[j][k] = palavra_atual[i], ++k;
 
}

void zerar(){
    for(int i = 0; i<56; ++i){
        frase[i][0] = '\0';
        frase_atual[i][0] = '\0';
        palavra_atual[i] = '\0';
        palavra_atual[i+56] = '\0';
    }

    flag1 = 0;
}

int main(){

    while(1){

        zerar();

        if (!gets(palavra_atual)) break;
        scanf(" %d%*c", &q);

        split(1);

        printf("%s\n", palavra_atual);
        //print_frase(1);

        for(int i =0; i<q; ++i){
            gets(palavra_atual);
            //printf("%s\n", palavra_atual);
            pos = 0;
            flag2 = 0;

            split(241);
            //print_frase(12);
            chave = frase_atual[0][0] - frase[0][0];
            printf("chave %d\n", chave);
        }

        printf( flag1 ? "S\n" : "N\n");
    }

    return 0;
}
