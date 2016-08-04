#include<cstdio>
#include<math.h>

int main(){
    int n, count=0;

    while(true){
        scanf(" %d", &n);
        if (n == 0) break;
        long int total = pow(2, n) - 1;
        printf("Teste %d\n%ld\n\n", ++count, total);
    }

    return 0;
}
