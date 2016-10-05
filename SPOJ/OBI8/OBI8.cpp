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
    int n, p, a, b, c=0;

    scanf(" %d %d", &p, &n);

    for(int i = 0; i<p; ++i){
        scanf(" %d %d", &a, &b);
        if (a+b >= n)
            c++;
    }

    printf("%d\n", c);

    return 0;
}
