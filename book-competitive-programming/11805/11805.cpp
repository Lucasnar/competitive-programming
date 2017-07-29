#include<cstdio>

int main(){
  int t, a, b, c;
  scanf("%d", &t);
  for(int i = 1; i<=t; ++i){
     scanf("%d %d %d", &a, &b, &c);
     printf("Case %d: %d\n", i, (b + c) % a ? (b+c)%a : a);
  }
  return 0;
}
