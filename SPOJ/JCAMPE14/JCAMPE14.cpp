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

    int cv, ce, cs, cp, fv, fe, fs, fp;

    scanf(" %d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);

    cp = 3 * cv + ce;
    fp = 3 * fv + fe;

    if(cp == fp)
        if(cs == fs)
            printf("=");
        else
            cs > fs ? printf("C") : printf("F");
    else
        cp > fp ? printf("C") : printf("F");

    printf("\n");

    return 0;
}
