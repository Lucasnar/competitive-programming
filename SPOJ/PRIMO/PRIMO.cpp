#include<cstdio>

int main(){
    int flag=0;
    signed long int n;

    scanf(" %li", &n);

    if (n<0) n = -n;

    if (n == 0 || n == 1) printf("nao\n");
    else
        for (int i = 2, n2 = n/2; i < n2; ++i)
            if(n % i == 0) {
                printf("nao\n");
                flag = 1;
                break;
            }
    
    if (!flag) printf("sim\n");

    return 0;
}
