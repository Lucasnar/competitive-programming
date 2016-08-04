#include<cstdio>

int main(){
    float v1, v2, d1, d2;

    while(scanf(" %f %f %f %f", &v1, &v2, &d1, &d2) != EOF){
        if(((d1 + d2) / v1)<=d2 / v2) printf("x(");
        else printf(":)");
        printf("\n");
    }

    return 0;
}
