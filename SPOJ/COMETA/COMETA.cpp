#include<cstdio>

int main(){
    int a, p = 1986;

    scanf("%d", &a);

    while (true){
        if (a < p) {printf("%d\n", p); break;}
        p += 76; 
    }
    return 0;
}
