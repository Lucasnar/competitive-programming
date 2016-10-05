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

typedef long long int huge;

int main(){
    int v, t, cur;

    scanf(" %d %d", &v, &t);

    for(int i = 0; i<t; ++i){
        scanf(" %d", &cur);

        v += cur;

        if(v > 100)
            v = 100;
        else if(v < 0)
            v = 0;
    }

    printf("%d\n", v);

    return 0;
}
