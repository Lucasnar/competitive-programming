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
    int n, s, cur, min_s=inf;

    scanf(" %d %d", &n, &s);

    while(n--){
        scanf(" %d", &cur);

        s += cur;

        min_s = min(s, min_s);
    }

    printf("%d\n", min_s);

    return 0;
}
