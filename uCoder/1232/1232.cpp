#include<cstdio>

int main(){
    char t; 
    scanf(" %c", &t); 

    switch(t){
        case 'M':
            printf("Bom Dia!");
            break;
        case 'V':
            printf("Boa Tarde!");
            break;
        case 'N':
            printf("Boa Noite!");
            break;
        default:
            printf("Valor Invalido!");
            break;
    }
    printf("\n");


    return 0;
}
