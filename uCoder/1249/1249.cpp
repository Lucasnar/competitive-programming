#include<cstdio>

int main(){
    int n1, n2, i=0;

    while(true){
        scanf(" %d %d", &n1, &n2);
        if (!n1) break;

        printf("Instancia %d\n", ++i);

        if (n1==n2)
            printf("empate");
        else if ((n1 == 1 && n2 == 2) || (n1 == 2 && n2 == 3) || (n1 == 3 && n2 == 1))
            printf("segundo");
        else
            printf("primeiro");

        printf("\n\n");
    }

    return 0;
}
