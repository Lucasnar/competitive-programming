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
    int ant, cur;
    bool o_c = true, o_d = true;
    
    scanf(" %d", &ant);
    for(int i = 4; i--;){
        scanf(" %d", &cur);

        if (cur > ant)
            o_d = false;
        else
            o_c = false;

        ant = cur;
    }

    o_c ? printf("C") : o_d ? printf("D") : printf("N");
    printf("\n");

    return 0;
}
