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
const int maxn = 77;

typedef long long int huge;

int arr[maxn];

int main(){
  int n;

  arr[0] = 0;
  arr[1] = 1;
  arr[2] = 1;
  for(int i = 3; i<maxn; ++i)
    arr[i] = arr[i - 2] + arr[i - 3];

  while(scanf(" %d", &n) == 1)
    printf("%d\n", arr[n] + arr[n-1]);

  return 0;
}
