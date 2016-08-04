#include<cstdio>

int main(){
    int c, n, p, q, espaco, faturamento;
    char com;
    int estac[1000];

    while(scanf(" %d %d", &c, &n) == 2){

        for(int i = 0; i<c; ++i)
            estac[i] = 0;
        faturamento=0;

        for(int i = 0; i<n; ++i){
            scanf(" %c", &com);

            if(com == 'C'){
                scanf(" %d %d", &p, &q);
                //printf(" %d %d\n", p, q);

                espaco = 0;
                for(int i = 0; i<c; ++i){
                    if (estac[i])
                        espaco = 0;
                    else
                        ++espaco;

                    //for(int j = 0; j<c; ++j)
                        //printf("%d ", estac[j]);
                    //printf("\n");
                    if (espaco == q){
                        faturamento += 10;
                        for(int j = i-(q-1); j<=i; ++j)
                            estac[j] = p;

                        break;
                    }
                }
            } 
            else{
                scanf(" %d", &p);
                for(int i  = 0; i<c; ++i)
                    if(estac[i] == p)
                        estac[i] = 0;
            }
        }
        printf("%d\n", faturamento);
    }
    return 0;
}
