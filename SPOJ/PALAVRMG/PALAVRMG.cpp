#include<cstdio>
#include<ctype.h>

int main(){
    int p;

    scanf("%d", &p);

    for(int i = 0; i<p; ++i){
        char palavra[60];
        int flag=0;

        scanf(" %s", palavra);

        for (int j = 1; palavra[j]; ++j) if (tolower(palavra[j]) <= tolower(palavra[j-1])) flag =1;

        if (flag) printf("%s: N\n", palavra);
        else printf("%s: O\n", palavra);
    }

    return 0;
}
