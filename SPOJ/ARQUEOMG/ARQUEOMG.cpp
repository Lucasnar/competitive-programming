#include<cstdio>

int main(){
    int n, x, y;

    scanf(" %d", &n);

    for (int i=0; i<n; ++i){
        scanf(" %d %d", &x, &y);
        if (x<0 && y< 0) printf("%d\n", -x +y);
        else if( x<0 && y>0) printf("%d\n", y -(x+1));
        else printf("%d\n", y-x);
    }

    return 0;
}
