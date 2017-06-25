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

const int maxn = 1000;

//char line[10100];

typedef long long int huge;

int table[maxn];

int main(){
  int t, n, v, lines;
  char c;
  char line[10000000];
  huge ans;

  scanf("%d%*c", &t);

  while(t--){
    for(int i = 0; i<maxn; ++i)
      table[i] = 0;
    ans = 0;

    scanf("%d%*c", &n);

    for(int i = 0; i<n; ++i){
      scanf("%c%*c%d%*c", &c, &v);
      table[(int) c] = v;
    }

    scanf("%d%*c", &lines);

    for(int i = 0; i<lines; ++i){
      //gets(line);
      line[0] = 0;
      scanf("%[^\n]", line);
      //printf("%s\n", line);
      for(int j = 0; line[j]; ++j)
        ans += table[(int) line[j]];
      scanf("%*c");
    }

    printf("%lld.%02lld$\n", ans/100, ans%100);
  }

  return 0;
}
