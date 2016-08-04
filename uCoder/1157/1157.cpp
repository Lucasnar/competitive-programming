#include<cstdio>

int main(){
    int n, p1=0, p2=0, c=0, n2, dif1, dif2, n_count1,n_count2;
    int cobrancas1[101];
    int cobrancas2[101];
    char k;

    scanf(" %d", &n);

    for(int i = 0; i<n; ++i){
        scanf(" %c", &k);
        k == 'x' ? cobrancas1[i] = 0 : cobrancas1[i] = 1;
    }

    for(int i = 0; i<n; ++i){
        scanf(" %c", &k);
        k == 'x' ? cobrancas2[i] = 0 : cobrancas2[i] = 1;
    }

    //printf("cobrancas1: ");
    //for(int i = 0; i<n; ++i)
        //printf("%d ", cobrancas1[i]);
    //printf("\n");
//
    //printf("cobrancas2: ");
    //for(int i = 0; i<n; ++i)
        //printf("%d ", cobrancas2[i]);
    //printf("\n");

    n2 = n*2;
    n_count1 = n;
    n_count2 = n;
    for(int i = 0; i<n; ++i){
        ++c;
        if (cobrancas1[i])
            ++p1;
        
        --n_count1;
        dif1 = p1 - p2;
        dif2 = p2 - p1;
        if (!(dif1< 0) && dif1 > n_count2) 
            break;
        if (dif2 > n_count1)
            break;

        ++c;
        if (cobrancas2[i])
            ++p2;
        
        --n_count2;
        dif1 = p2 - p1;
        dif2 = p1 - p2;
        if ( !(dif1 < 0) && dif1 > n_count1)
            break;
        if (dif2 > n_count2)
            break;
           
        //printf("Rodada %d\nPlacar: %d x %d\n", n-n_count2, p1, p2);
    }

    if (c == n2)
        if (p1 == p2)
            printf("Empate\n");
        else
            printf("%d\n", c);
    else
        printf("%d\n", c);

    return 0;
}
