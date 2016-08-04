#include<cstdio>

int main(){
    int n, c, t, p;

    while(true){

        scanf(" %d", &n);
        if (!n) break;

        //printf("n %d\n", n);

        c=0, t=0;
        while(n--){
            scanf(" %d", &p);
            t += c + p;
            c++;
        }

        printf("%d\n", t);
    }

    return 0;
}
