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
  int n;
  char months[12][24] = { "January", "February", "March",
                      "April", "May", "June", "July",
                      "August", "September", "October",
                      "November", "December" };

  scanf(" %d", &n);
  printf("%s\n", months[n-1]);

  return 0;
}
