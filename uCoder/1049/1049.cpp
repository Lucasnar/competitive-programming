#include<cstdio>

int main(){
    int n;

    scanf(" %d", &n);

    int primeiro[n+1];
    int segundo[n+1];

    for (int i =0 ;i<n; ++i)
        scanf(" %d", &primeiro[i]);

    int c = 0 ,flag = 0, n2 = n;
    while(1){
        if (++c == n2) break;
        if(c & 1){
            for(int i = 0; i<n-1; ++i)
                flag = 1, segundo[i] = primeiro[i] == primeiro[i+1] ? 1 : -1;
            //printf("segundo: ");
            //for(int i = 0; i<n-1; ++i)
                //printf("%d ", segundo[i]);
        }
        
        else{
            for(int i = 0; i<n-1; ++i)
                flag = 0, primeiro[i] = segundo[i] == segundo[i+1] ? 1 : -1;
            //printf("primeiro: ");
            //for(int i = 0; i<n-1; ++i)
                //printf("%d ", primeiro[i]);
        }
        //printf("\n");
        --n;
    }
    c = flag ? segundo[0] : primeiro[0] ;
    printf( c == 1 ? "preta\n" : "branca\n");

    return 0;
}
