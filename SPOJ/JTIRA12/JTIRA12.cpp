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
    int a, b;

    scanf(" %d %d", &a, &b);

    printf("%s\n", a >= 0 && a <= 432 && b <= 468 && b >= 0 ? "dentro" : "fora");

    return 0;
}
