#include<cstdio>

int main(){
    int t;
    int u1, u2;
    int paridade;
    char n1[124], n2[124];

    scanf(" %d", &t);

    while(t--){
        scanf(" %s %s", n1, n2);
        //printf("%s %s", n1, n2);
        //printf("\n");
        

        for(int i = 0;;++i)
            if(!n1[i+1]) {u1 = i; break;}

        for(int i = 0;;++i)
            if(!n2[i+1]) {u2 = i; break;}

        //printf ("%d", '1');
        paridade = 0;
        if(n1[u1] % 2) ++paridade;
        if(n2[u2] % 2) ++paridade;

        if (paridade==1)
            printf("Impar");
        else 
            printf("Par");
        printf("\n");

    }

    return 0;
}
