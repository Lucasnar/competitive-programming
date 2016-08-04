#include<cstdio>
#include<string.h>

int main(){
    char linhas[70][70];
    char nomes_variaveis[70][70];
    char valor_variaveis[70][70];
    char variavel_atual[70];
    int l, v;

    while(true){
        scanf(" %d%*c %d%*c", &l, &v);
        if (l == 0) break;

        for (int i = 0; i<l; ++i)
            memset(&linhas[i], 0, sizeof(linhas));

        for (int i = 0; i<v; ++i){
            memset(&nomes_variaveis[i], 0, sizeof(nomes_variaveis));
            memset(&valor_variaveis[i], 0, sizeof(valor_variaveis));
        }

        for (int i =0; i<l; ++i){
            gets(linhas[i]);
            //printf("%s\n",linhas[i]); //printf("%d\n", i);
        }

        for (int i = 0; i<v; ++i){
            scanf("%s%*c", nomes_variaveis[i]);
            gets(valor_variaveis[i]);
            //printf("%s\n", valor_variaveis[i]);
        }


        for (int i = 0; i<l; ++i){
            memset(&variavel_atual, 0, sizeof(variavel_atual));
            for (int j = 0; linhas[i][j]; ++j){
                if (linhas[i][j] != '{')
                    printf("%c", linhas[i][j]);

                else{
                    j += 2;

                    for(int k = 0; linhas[i][j] != '}'; ++j, ++k) 
                        variavel_atual[k] = linhas[i][j];

                    variavel_atual[j] = '\0';
                    //printf("%s", variavel_atual);

                    for(int k = 0;k<v ; ++k){
                        //printf("nomes variaveis: %s, ", nomes_variaveis[k]);
                        //printf("valor variaveis: %s,  ", valor_variaveis[k]);
                        //printf("variavel atual: %s", variavel_atual);
                        //printf("\n");
                        if (!strcmp(nomes_variaveis[k], variavel_atual)) {
                                printf("%s", valor_variaveis[k]);
                                break;
                        } 
                    }
                    j++;
                }
            }
            printf("\n");
        }
    }

    return 0;
}
