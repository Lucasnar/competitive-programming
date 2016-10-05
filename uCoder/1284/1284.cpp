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
const int maxn = 100010; // 10 ^ 5

typedef long long int huge;

int main(){
    int a, b, c;

    scanf(" %d %d %d", &a, &b, &c);

    if(!(a - b - c) || !(b - a - c) || !(c - a - b) ||
       !(a + b - c) || !(a + c - b) || !(b + c - a) ||
       !(a - b) || !(a - c) || !(b - c)){
        printf("S\n");
        return 0;
    }

    printf("N\n");
    return 0;
}
