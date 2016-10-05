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
const int maxn = 50010;

int arr[maxn];
int l[maxn];
int r[maxn];

typedef long long int huge;

int main(){

    int n, cur_l=1, cur_r=1, best=1;

    scanf(" %d", &n);

    for(int i = 0; i<n; ++i)
        scanf(" %d", &arr[i]);

    l[0] = r[n-1] = 1;
    for(int i = 1, j = n-2; i<n; ++i, --j){
       if (cur_l + 1 <= arr[i])
           ++cur_l;
       else
           cur_l = arr[i];

       if (cur_r + 1 <= arr[j])
           ++cur_r;
       else
           cur_r = arr[j];

       l[i] = cur_l;
       r[j] = cur_r;
    }

    for(int i = 0; i<n; ++i)
        best = max(min(l[i], r[i]), best);

    printf("%d\n", best);

    return 0;
}
