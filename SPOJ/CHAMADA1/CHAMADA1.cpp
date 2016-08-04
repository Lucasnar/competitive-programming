#include<cstdio>
#include<string.h>


int main(){
    int n, k;
    char names[110][25];
    char temp[25];
    
    scanf(" %d %d", &n, &k);
    for (int i = 1; i<=n; ++i) scanf(" %s", names[i]);

    //for (int i = 1; i<=n; ++i) printf(" %s\n", names[i]);
    //printf("\n");

    for (int i = 1; i<=n; ++i)
        for (int j = 1; j<=n; ++j)
            if (strcmp(names[i], names[j]) < 0){
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }

    //for (int i = 1; i<=n; ++i) printf(" %s\n", names[i]);
    //printf("\n");

    printf("%s\n", names[k]);

    return 0;
}
