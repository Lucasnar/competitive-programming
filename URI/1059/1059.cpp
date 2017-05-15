#include<cstdio>

int main(){
  int i=0;
  while(i++ != 100)
    if(!(i&1))
      printf("%d\n", i);

  return 0;
}
