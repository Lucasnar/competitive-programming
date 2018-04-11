#include<cstdio>
#include<algorithm>
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
const int maxn = 1024 * 128; // 10 ^ 5

typedef long long int huge;

int even[maxn];
int odd[maxn];
int all[maxn];

int main(){
  int t, n, v, ei, oi, ok, ans;
  scanf(" %d", &t);
  for(int tt = 1; tt<=t; ++tt){
    printf("Case #%d:", tt);
    scanf(" %d", &n);
    ei = oi = 0;
    for(int i = 0; i<n; ++i){
      scanf(" %d", &v);
      i&1 ? odd[oi++] = v : even[ei++] = v;
    }
    sort(even, even+ei);
    sort(odd, odd+oi);
    //ok = 1, ans = 0;
    //even[ei] = odd[oi] = inf;
    //for(int i = 0, h = max(oi, ei); i<h; ++i){
      //if(even[i] > odd[i]){
        //ok = false;
        //ans = i;
      //}
      //if(odd[i] > even[i+1]){
        //ok = false, ans = i+1;
      //}
    //}
    ok = 1, ans = 0;
    for(int i = 0, e = 0, o = 0; i<n; ++i)
      all[i] = i&1 ? odd[o++] : even[e++];
    for(int i = 0; i<n-1; ++i)
      if(all[i] > all[i+1]){
        ok = 0;
        ans = i;
        break;
      }
    ok ? printf(" OK") : printf(" %d", ans);
    printf("\n");
  }
  return 0;
}
