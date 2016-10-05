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
const int maxn = 100100; // 10 ^ 5

typedef long long int huge;

int main(){

    int n, c=0;
    char aux;

    scanf(" %d", &n);

    for(int i = 0; i<n; ++i){
        scanf(" %c", &aux);
        if(aux == 'P' || aux == 'C')
            c += 2;
        else if(aux == 'A')
            c++;
    }

    printf("%d\n", c);


    return 0;
}
