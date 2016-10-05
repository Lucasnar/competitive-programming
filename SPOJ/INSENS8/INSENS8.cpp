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

    int n, x1, y1, x2, y2, sum=0;

    scanf(" %d", &n);

    while(n--){

        scanf(" %d %d %d %d", &x1, &y1, &x2, &y2);

        sum += ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
    }

    printf("%d\n", sum);

    return 0;
}
