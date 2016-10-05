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
    int n, ant, cur, c, max_c;

    scanf(" %d", &n);

    for(int i = 0; i<n; ++i){
        scanf(" %d", &cur);

        if(ant == cur && i != 0)
            ++c;
        else
            c = 1;

        max_c = max(c, max_c);
        ant = cur;
    }

    printf("%d\n", max_c);

    return 0;
}
