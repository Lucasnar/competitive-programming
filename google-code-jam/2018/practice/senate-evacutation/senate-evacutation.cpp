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

char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int party[32];

void double_evacuate(int party_number_1, int party_number_2, int quantity){
  //printf("\ndouble_evacuate quantity: %d\n", quantity); return;
  party[party_number_1] -= quantity;
  party[party_number_2] -= quantity;
  while(quantity--)
    printf(" %c%c", abc[party_number_1], abc[party_number_2]);
}

void evacuate(int party_number, int quantity){
  //printf("\nevacuate quantity: %d\n", quantity); return;
  party[party_number] -= quantity;
  while(quantity--)
    printf(" %c", abc[party_number]);
}

int main(){
  int tt, t = 0, n;
  int biggest, second_biggest;
  scanf("%d", &tt);
  while(t++ < tt){
    printf("Case #%d:", t);
    scanf(" %d", &n);
    biggest = 0, second_biggest = 1;
    for(int i = 0; i<n; ++i){
      scanf(" %d", &party[i]);
      if(party[biggest] < party[i])
        second_biggest = biggest, biggest = i;
      else if(party[second_biggest] < party[i] && i)
        second_biggest = i;
    }
    //printf("\nbiggest %d, second_biggest %d\n", biggest, second_biggest);
    evacuate(biggest, party[biggest] - party[second_biggest]);
    for(int i = 0; i<n; ++i)
      if(i != biggest && i != second_biggest)
        evacuate(i, party[i]);
    double_evacuate(biggest, second_biggest, party[biggest]);
    printf("\n");
  }
  return 0;
}
