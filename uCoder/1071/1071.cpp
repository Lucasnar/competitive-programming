#include<cstdio>

int fmdc(int num1, int num2){
    int aux=-1;
    while(aux!=0){
        aux = num1 % num2;
        num1 = num2;
        num2 = aux;
    }
    return num1;
}
int main(){
    int a, b, c, d, num1, num2, mdc;

    scanf(" %d %d %d %d", &a, &b, &c, &d);

    num2 = b * d;
    num1 = (num2 / b * a) + (num2/d*c);

    //printf("%d %d\n", num1, num2);

    mdc = fmdc(num1, num2);
    
    printf("%d %d\n", num1/mdc, num2/mdc);

    return 0;
}
