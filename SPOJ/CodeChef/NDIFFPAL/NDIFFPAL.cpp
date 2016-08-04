#include<cstdio>

int main(){
    int t;

    scanf(" %d", &t);

    while(t--){
        int n;

        scanf(" %d", &n);

        for (int i = 0; i<n; ++i){
            if (!(i % 3)) printf("l");
            else if (i % 3 == 1) printf("r");
            else if (i % 3 == 2) printf("h");
        }
        printf("\n");
    }

    return 0;
}
