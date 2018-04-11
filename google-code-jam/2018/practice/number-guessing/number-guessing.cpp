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

const char SMALL = 'S';
const char BIG = 'B';

char get_response(int guess){
  printf("%d\n", guess);
  fflush(stdout);
  char response[16];
  scanf("%s", response);
  return response[4];
}

void search(int lb, int ub){
  int found = 0;
  int mid;
  while(!found){
    mid = (lb+1+ub)/2;
    switch(get_response(mid)){
      case SMALL:
        lb = mid;
        break;
      case BIG:
        ub = mid;
        break;
      default:
        found = 1;
        break;
    }
  }
}

int main(){
  int t, a, b;
  scanf(" %d", &t);
  while(t--){
    scanf(" %d %d %*d", &a, &b);
    search(a, b);
  }
  return 0;
}
