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

int arr[maxn];

typedef long long int huge;

int main(){
    int n, m, soma, c=0, maior_media, menor_media, media_atual;

    while(1){


        scanf(" %d %d", &n, &m);
        if(!n) break;

        printf("Teste %d\n", ++c);

        for(int i = 0; i<n; ++i)
            scanf(" %d", &arr[i]);

        soma = 0, maior_media = -200, menor_media = 200;
        for(int i = 0; i<m; ++i)
            soma += arr[i];

        for(int i = m-1; i<n; ++i){
            media_atual = soma / m;
            
            if(media_atual > maior_media)
                maior_media = media_atual;
            if(media_atual < menor_media)
                menor_media = media_atual;

            soma -= arr[i - (m-1)];
            soma += arr[i+1];
        }

        printf("%d %d\n\n", menor_media, maior_media);
    }

    return 0;
}
