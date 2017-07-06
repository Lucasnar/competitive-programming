#include<cstdio>

int arr[64];

int main(){
  int n, s;

  while(scanf(" %d", &n) && n){
    for(int i = 0; i<=n; ++i)
      arr[i] = 0;

    for(int i = 1; i<=n; ++i)
      scanf(" %d", &arr[i]);

    scanf(" %d", &s);

    while(s != arr[s])
      s = arr[s];

    printf("%d\n", s);

  }

  return 0;
}
