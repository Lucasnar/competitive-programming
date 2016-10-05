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
const int maxn = 1001;
int arr[maxn];

typedef long long int huge;

int main(){

    int n, aux; 

    scanf(" %d", &n);

    for(int i = 1; i<=n; ++i)
        arr[i] = 0;

    for(int i = 1; i<n; ++i){
        scanf(" %d", &aux);
        arr[aux]++;
    }

    for(int i = 1; i<=n; ++i)
        if(!arr[i]){
            printf("%d\n", i);
            return 0;
        }
}
