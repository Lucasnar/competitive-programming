#include<cstdio>

int main(){
    int n, c, s, e, total = 0, flag = 0;

    scanf(" %d %d", &n, &c);

    for (int i = 0; i < n; ++i){
        scanf(" %d %d", &s, &e);
        total -= s;
        total += e;
        if (total > c){
            flag = 1;
            printf("S\n");
            break;
        }
    }
    if (!flag) printf("N\n");

    return 0;
}
