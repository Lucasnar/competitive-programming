#include<cstdio>

int main(){
    int a, n, total=0, f;

    scanf(" %d %d", &a, &n);
    for (int i = 0 ; i< n; ++i){
        scanf(" %d", &f);
        if (a * f >= 40000000) total += 1;
    }
    printf("%d\n", total);



    return 0;
}
