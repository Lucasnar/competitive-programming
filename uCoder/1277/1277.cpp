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

    double mtx[3][3];

    for(int i = 0 ; i<3; ++i)
        for(int j = 0; j<3; ++j)
            scanf(" %lf", &mtx[i][j]);

    printf("DIAGONAL PRINCIPAL %.2f %.2f %.2f %.2f\n", 
            mtx[0][0], mtx[1][1], mtx[2][2], mtx[0][0] + mtx[1][1] + mtx[2][2]);

    printf("DIAGONAL SECUNDARIA %.2f %.2f %.2f %.2f\n", 
            mtx[0][2], mtx[1][1], mtx[2][0], mtx[0][2] + mtx[1][1] + mtx[2][0]);



    return 0;
}
