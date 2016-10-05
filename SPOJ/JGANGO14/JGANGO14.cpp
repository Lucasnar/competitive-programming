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
    int p1, c1, p2, c2;

    scanf(" %d %d %d %d", &p1, &c1, &p2, &c2);

    if(p1 * c1 == p2 * c2)
        printf("0\n");
    else if(p1 * c1 > p2 * c2)
        printf("-1\n");
    else
        printf("1\n");

    return 0;
}
