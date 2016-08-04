#include<cstdio>

const int maxn = 100100;
char x[maxn], y[maxn], z[maxn];

int main(){
    int t;

    scanf(" %d", &t);

    while(t--){
        scanf(" %s%*c %s%*c", x, y);

        for(int i = 0; x[i]; ++i){
            if (x[i] == 'B' && y[i] == 'B')
                printf("W");
            else
                printf("B");

        }
        printf("\n");
    }

    return 0;
}
