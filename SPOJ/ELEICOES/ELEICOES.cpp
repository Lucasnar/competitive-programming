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

int arr[maxn];

typedef long long int huge;

int main(){

    int n, cur_c, max_c, elected;

    scanf("%d", &n);

    for(int i = 0; i<n; ++i)
        scanf(" %d", &arr[i]);

    sort(arr, arr+n);

    cur_c = max_c = 0;
    for(int i = 1; i<n; ++i){
        if(arr[i] == arr[i-1]){
            ++cur_c;
            if(cur_c > max_c)
                max_c = cur_c, elected = arr[i];
        }
        else
            cur_c = 0;
    }

    printf("%d\n", elected);

    return 0;
}
