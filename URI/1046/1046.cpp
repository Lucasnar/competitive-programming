#include<cstdio>

int main(){
  int s, e, c = 1;

  scanf(" %d %d", &s, &e);
  s < e && c++;

  while(++s != e)
    c++ && s == 24 ? s = -1 : s;
  printf("O JOGO DUROU %d HORA(S)\n", --c);

  return 0;
}
