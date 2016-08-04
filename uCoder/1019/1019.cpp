#include<cstdio>

const int maxn = 10;
int mtx[maxn][maxn];
int flag;

void pintar_matriz(){
    for (int i = 1; i<=5; ++i){
        for (int j = 1; j<=5; ++j){
            if (mtx[i][j] == 0){
                int pintar = 0;
                if (mtx[i-1][j] == 1) ++pintar;
                if (mtx[i][j+1] == 1) ++pintar;
                if (mtx[i+1][j] == 1) ++pintar;
                if (mtx[i][j-1] == 1) ++pintar;
                if (pintar > 1) mtx[i][j] = 1, flag=1;
            }
        }
    }
}


int main(){
    int n;
    char n_char;

    while(true){

        flag = 1;

        for (int i = 0; i<=6; ++i)
            for (int j = 0; j<=6; ++j)
                mtx[i][j] = 0;

        for (int i = 1; i<=5; ++i){
            for (int j = 1; j<=5; ++j){
                if (scanf(" %c", &n_char) == EOF) return 0;
                n = n_char - '0';
                mtx[i][j] = n;
            }
        }

        while (flag){
            flag = 0;
            pintar_matriz();
        }

        for (int i = 1; i<=5; ++i){
            for (int j = 1; j<=5; ++j)
                printf("%d", mtx[i][j]);
            printf("\n");
        }
    }

    return 0;
}
