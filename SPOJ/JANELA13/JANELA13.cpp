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
const int maxn = 602;

typedef long long int huge;

int arr[maxn];

int main(){
    int a, b, c, count=0;

    scanf(" %d %d %d", &a, &b, &c);

    for(int i = 0; i<=600; ++i)
        arr[i] = 0;

    for(int i = a; i<a+200; ++i)
        arr[i]  = 1;

    for(int i = b; i<b+200; ++i)
        arr[i]  = 1;

    for(int i = c; i<c+200; ++i)
        arr[i]  = 1;

    for(int i = 0; i<600; ++i)
        if(!arr[i])
            ++count;

    printf("%d\n", count * 100);


    return 0;
}
