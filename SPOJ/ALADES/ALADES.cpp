// NOT FINISHIED
// HERE

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
const int maxn = 100100; // 10 ^ 5

typedef long long int huge;

int main(){
    int h1, m1, h2, m2, resp;

    while(1){
        scanf(" %d %d %d %d", &h1, &m1, &h2, &m2);

        if(!h1 && !h2 && !m1 && !m2) break;

        resp = 0;

        if(h1 + m1 <= h2 + m2)
            resp = ((h2 - h1) * 60) + (m2 - m1);
        else if( h1 <= h2



        printf("%d\n", resp);

    }

    return 0;
}
