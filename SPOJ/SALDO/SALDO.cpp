#include<cstdio>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<iostream>
#include<map>
#include<queue>
#include<cstdlib>
#include<cstring>
#include<string>
#include<set>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 10010; // 10 ^ 5

typedef long long int huge;

int arr[maxn];

int main(){
    int n, aux, c=0, max_end, max_temp, st_pos, ed_pos, a, b;

    while(1){
        scanf(" %d", &n);
        if (!n) break;

        printf("Teste %d\n", ++c);

        for(int i = 0; i<n; ++i){
            scanf(" %d %d", &arr[i], &aux);
            arr[i] -= aux;
        }

        //for(int i = 0; i<n; ++i)
            //printf("%d ", arr[i]);
        //printf("\n");


        /*
         * Algoritmo de Kadane - Maior soma em sublista contígua.
         * "max_end" possui a soma máxima no final.
         * "st_pos" e "ed_pos" representam a posição inicial e
         * final da maior soma atual, respectivamente.
         * "a" e "b"  representam o maior intervalo entre posição 
         * inicial e final dentre todas as maiores soma (uma vez
         * que a maior soma pode se repetir).
        */

        max_end = max_temp = 0;
        st_pos = ed_pos = a = b = 1;

        for(int i = 1; i<=n; ++i){
            max_temp = max_temp + arr[i-1];

            if(arr[i-1] > max_temp){
                max_temp = arr[i-1];
                st_pos = i;
            }

            if(max_temp >= max_end){
                ed_pos = i;
                if(max_temp > max_end || ed_pos - st_pos >= b - a)
                    a = st_pos, b = ed_pos;
                max_end = max_temp;
            }

            //printf("max_temp %d max_end %d\n", max_temp, max_end);

            
        }

        //printf("max_sum %d\n", max_end);

        if(max_end > 0)
            //printf("%d %d\n", st_pos, ed_pos);
            printf("%d %d\n", a, b);
        else
            printf("nenhum\n");

        printf("\n");
    }

    return 0;
}
