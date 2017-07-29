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
#include<bitset>

using namespace std;

int main(){
  int t, nn1, nn2;
  string n1, n2;

  scanf(" %d", &t);

  for(int i = 1; i<=t; ++i){
    printf("Pair #%d: ", i);
    cin >> n1 >> n2;
    bitset<32> bs1(n1);
    bitset<32> bs2(n2);
    nn1 = (int) bs1.to_ulong(), nn2 = (int) bs2.to_ulong();
    //printf("__gcd(4, 8): %d\nnn1: %d\nnn2: %d\n", __gcd(4, 8), nn1, nn2);
    printf("%s\n", __gcd(nn1, nn2) > 1 ? "All you need is love!" : "Love is not all you need!");
  }

  return 0;
}
