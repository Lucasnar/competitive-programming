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

int main(){
    int arr[3];

    scanf(" %d %d %d", &arr[0], &arr[1], &arr[2]);

    sort(arr, arr+3);

    printf("%d\n", arr[1]);

    return 0;
}
