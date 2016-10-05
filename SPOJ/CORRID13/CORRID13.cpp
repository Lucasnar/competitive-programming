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
    int n1, n2, d, v;
    double t1, t2;

    scanf(" %d %d %d", &n1, &d, &v);
    t1 = (double) d / (double) v;

    scanf(" %d %d %d", &n2, &d, &v);
    t2 = (double) d / (double) v;

    if (t1 < t2)
        printf("%d\n", n1);
    else
        printf("%d\n", n2);


    return 0;
}
