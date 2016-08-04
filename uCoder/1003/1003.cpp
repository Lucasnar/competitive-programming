#include<cstdio>

const int maxn = 2000;
char terra[maxn][maxn];

void printM(int l, int c){
    printf("\nMATRIZ\n");
    for (int i=1; i<=l; ++i){
        for (int j=1; j<=c; ++j)
            printf("%c ", terra[i][j]);
        printf("\n");
    }
}

int verificar(char c, int i, int j){
    if (terra[i-1][j] == c || terra[i][j-1] == c || terra[i+1][j] == c || terra[i][j+1] == c) return 1;
    return 0;
}

int main(){
    int l, c;

    while(true){
        scanf(" %d %d", &c, &l);

        if (c==0) break;

        int flag = 0;
        char pessoa;

        memset(terra, '0', sizeof(terra));

        //for (int i = 0; i<l+2; ++i)
            //for (int j= 0; j<c+2; ++j)
                //terra[i][j] = '0';

        for (int i =1; i<=l; ++i)
            for (int j =1 ; j<=c; ++j){
                scanf(" %c", &pessoa);
                terra[i][j] = pessoa != '0' ? pessoa : '0';
            }

        printM(l, c);

        for (int i =1; i<=l; ++i)
            for (int j =1 ; j<=c; ++j){
                if (terra[i][j] == 'A'){
                    if(verificar('B', i, j) || verificar('D', i, j)) {
                        flag = 1;
                        printf("Aqui deu errado 1\ni: %d, j: %d\n", i, j);
                    }
                }
                else if (terra[i][j] == 'B')
                    if(verificar('C', i, j) == 1) {
                        printf("Aqui deu errado 2\n");
                        flag = 1;
                    }
            }
        if (!flag) printf("V\n");
        else printf("F\n");
    }

    return 0;
}
