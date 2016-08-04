#include<cstdio>

int main(){
    int n, t, v;
    int vt = 0;

    scanf(" %d", &n);

    for (int i = 0; i<n; ++i){
        scanf(" %d %d", &t, &v);
        vt += t*v;
    }
    printf("%d\n", vt);


    return 0;
}
