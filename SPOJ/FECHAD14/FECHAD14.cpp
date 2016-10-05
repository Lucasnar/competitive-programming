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
const int maxn = 1024;

int arr[maxn];

typedef long long int huge;

int main(){

    int n, m, c=0;

    scanf(" %d %d", &n, &m);

    for(int i = 0; i<n; ++i)
        scanf(" %d", &arr[i]);

    for(int i = 1; i<n; ++i){
        if(arr[i-1] != m){
            if(arr[i-1] > m){
                c += arr[i-1] - m;
                arr[i] = arr[i] - (arr[i-1] - m);
            }
            else{
                c += m - arr[i-1];
                arr[i] = arr[i] + (m - arr[i-1]);
            }
        }
    }

    printf("%d\n", c);

    return 0;
}
