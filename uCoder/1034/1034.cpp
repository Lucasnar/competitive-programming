#include<cstdio>

int main(){
    int n, atual=0,  maior=-1;
    char tab[100][100];

    scanf(" %d", &n);

    for (int i = 0; i<n; ++i)
        for (int j = 0; j<n; ++j)
            scanf(" %c", &tab[i][j]);

    for (int i = 0; i<n; ++i)
        if (!(i%2))
            for (int j = 0; j<n; ++j){
                if (tab[i][j] == 'o')
                    ++atual;
                else if (tab[i][j] == 'A'){
                    if (atual > maior)
                        maior = atual;
                    atual = 0;
                    //printf("maior: %d\n", maior);
                }
            }
        else
            for (int j = n; j--;){
                if (tab[i][j] == 'o')
                    ++atual;
                else if (tab[i][j] == 'A'){
                    if (atual > maior)
                        maior = atual;
                    atual = 0;
                }
            }

    if (atual > maior)
        maior = atual;
    printf("%d\n", maior);

    return 0;
}
