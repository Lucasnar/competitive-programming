#include<cstdio>

int main(){
    int v, t, v_atual;

    scanf(" %d %d", &v, &t);

    while(t--){
        scanf(" %d", &v_atual);
        v += v_atual;
        if (v > 100) v= 100;
        else if (v < 0) v= 0;
    }

    printf("%d\n", v);

    return 0;
}
