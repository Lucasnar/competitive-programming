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
    int n, p, q, v, t_sum=0, c_sum;

    scanf(" %d", &n);

    while(n--){
        scanf(" %d", &p);

        c_sum = 0;
        while(p--){
            scanf(" %d %d", &q, &v);
            c_sum +=  q * v;
        }

        printf("%d\n", c_sum);
        t_sum += c_sum;
    }

    printf("%d\n", t_sum);
    return 0;
}
