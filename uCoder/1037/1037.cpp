#include<cstdio>

int main(){
    char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
    char alfabeto_inverso[30];
    char frase [11000];

    gets(alfabeto_inverso);
    gets(frase);

    for (int i = 0; frase[i]; ++i)
        for (int j =0; ;++j)
            if (frase[i] == alfabeto_inverso[j]){
                printf("%c", alfabeto[j]);
                break;
            }

    printf("\n");

    return 0;
}
