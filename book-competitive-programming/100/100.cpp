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

typedef long long int huge;

int calc(int n){
  int cl=1;

  while(1){
    if (n == 1)
      return cl;

    if(!(n & 1))
      n /= 2;
    else
      n = 3 * n + 1;

    ++cl;
  }
}

int main(){
  int a, b, a2, b2, ans;

  while(1){
    if (scanf(" %d %d", &a, &b) != 2) break;

    ans = -1;

    a2 = min(a, b);
    b2 = max(a, b);

    for(int i = a2; i<=b2; ++i)
      ans = max(ans, calc(i));

    printf("%d %d %d\n", a, b, ans);
  }

  return 0;
}
