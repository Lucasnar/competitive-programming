#include<cstdio>

int fatorial(int n){
    if (n == 1) return 1;
    return n * fatorial(n-1);
}

float calcula_nesimo_euler_usando_taylor(int n){
    if (n == 0) return 1.0;
    return (1.0 / fatorial(n)) + (calcula_nesimo_euler_usando_taylor(n-1));

}
int main(){
    int n;

    while(true){
        scanf(" %d", &n); if (n == -1) break;
        printf("%.6f\n", calcula_nesimo_euler_usando_taylor(n));
    }

    return 0;
}
