#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
  int arr[3];
  char printable[512];

  for(int i = 0; i<3; ++i)
    scanf(" %d", &arr[i]);

  sprintf(printable,
      "\n%d\n%d\n%d\n",
      arr[0], arr[1], arr[2]);
  sort(arr, arr+3);

  for(int i = 0; i<3; ++i)
    printf("%d\n", arr[i]);
  printf("%s", printable);

  return 0;
}
