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

    double a[5];

    for(int i = 0; i<5; ++i)
        scanf(" %lf", &a[i]);

    printf("%.2f\n", a[2]);
    printf("%.2f\n", (a[0] + a[1] + a[2] + a[3] + a[4]) / 5.0); 

    double a1 = a[0], a2 = a[1], a3 = a[2], a4 = a[3], a5 = a[4];

    int c1, c2, c3, c4, c5;
    c1 = c2 = c3 = c4 = c5 = 0;

    for(int i = 0; i<5; ++i){
        if(a[i] == a1)
            ++c1;
        if(a[i] == a2)
            ++c2;
        if(a[i] == a3)
            ++c3;
        if(a[i] == a4)
            ++c4;
        if(a[i] == a5)
            ++c5;
    }

    int
    ans = max(c1, c2);
    ans = max(ans, c3);
    ans = max(ans, c4);
    ans = max(ans, c5);

    if (ans == c1)
        printf("%.2f\n", a[0]);
    else if (ans == c2)
        printf("%.2f\n", a[1]);
    else if (ans == c3)
        printf("%.2f\n", a[2]);
    else if (ans == c4)
        printf("%.2f\n", a[3]);
    else if (ans == c5)
        printf("%.2f\n", a[4]);

    return 0;
}
