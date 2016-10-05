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
    int n, p=1;

    scanf(" %d", &n);
    
    while(n >=2){
        n /= 2;
        p *= 4;
    }

    printf("%d\n", p);

    return 0;
}
