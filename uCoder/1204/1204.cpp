#include<cstdio>

int main(){
    int w, n, p,punch, c=0;

    scanf(" %d %d %d", &w, &n, &p);

    for(int i =0; i<p; ++i){
        scanf(" %d", &punch);
        if (punch>=w && punch<=n)
            c++;
    }

    printf("%d\n", c);


    return 0;
}
