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
const int maxn = 62;

typedef long long int huge;

int t, n, ci, p_size;
char p[maxn];

int possible_to_solve(){
  return n >= p_size - ci;
}

int can_solve_now(){
  int total_d = 0, cur_d = 1;
  for(int i = 0; i<p_size; ++i){
    if(p[i] == 'C') cur_d *= 2;
    else total_d += cur_d;
  }
  return n >= total_d;
}

void hack(){
  for(int i = p_size; i>0; --i)
    if(p[i] == 'S' && p[i-1] == 'C'){
      p[i] = 'C', p[i-1] = 'S'; return;
    }
}

int solution(){
  int ans = 0;
  while(!can_solve_now()) hack(), ++ans;
  return ans;
}

int main(){
  scanf(" %d", &t);
  for(int tt = 1; tt<=t; ++tt){
    printf("Case #%d: ", tt);
    scanf(" %d %s", &n, p);
    //printf("%d %s\n", n, p);
    p_size = 0, ci = 0;
    for(int i = 0; p[i]; ++i){
      ++p_size;
      if(p[i] == 'C') ci++;
    }
    if(possible_to_solve()) printf("%d", solution());
    else printf("IMPOSSIBLE");
    printf("\n");
  }
  return 0;
}
/*
// SOLVES ONLY SMALL SET
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
const int maxn = 62;

typedef long long int huge;

int t, n, ci, p_size;
char p[maxn];

int possible_to_solve(){
  return ci == -1 ? n >= p_size : n >= p_size - 1;
}

int can_solve_now(){
  return ci == -1 ? 1 : n >= ci + 2*(p_size - ci - 1);
}

int solution(){
  int ans = 0;
  while(!can_solve_now()) ++ci, ++ans;
  return ans;
}

int main(){
  scanf(" %d", &t);
  for(int tt = 1; tt<=t; ++tt){
    printf("Case #%d: ", tt);
    scanf(" %d %s", &n, p);
    //printf("%d %s\n", n, p);
    p_size = 0, ci = -1;
    for(int i = 0; p[i]; ++i){
      ++p_size;
      if(p[i] == 'C') ci = i;
    }
    if(possible_to_solve()) printf("%d", solution());
    else printf("IMPOSSIBLE");
    printf("\n");
  }
  return 0;
}
*/
