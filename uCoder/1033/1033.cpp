#include<cstdio>
#include<string.h>

int main(){
    char palavra[1100];
    int flag = 0;

    while(scanf(" %s%*c", palavra) == 1){
        if (flag) printf(" ");
        flag = 1;
        for (int i = 0; palavra[i]; ++i)
            if (i % 2 != 0) printf("%c", palavra[i]);
        memset(&palavra, 0, sizeof(palavra));
    }

    printf("\n");


    return 0;
}
