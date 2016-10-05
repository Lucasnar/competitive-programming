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

    int a, b, c, count = 0;

    scanf(" %d %d %d", &a, &b, &c);

    while(a >= 2 && b >= 3 && c >= 5){
        a -= 2; b -= 3; c -= 5;
        ++count;
    }

    printf("%d\n", count);


    return 0;
}
