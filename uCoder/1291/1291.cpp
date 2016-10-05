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

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 64; 

char original_word[maxn];
char vowels[maxn];

typedef long long int huge;

int main(){

    gets(original_word);

    int j = 0;
    for(int i = 0; original_word[i]; ++i) 
        if(original_word[i] == 'a' || original_word[i] == 'e' || 
                original_word[i] == 'i' || original_word[i] == 'u' ||
         original_word[i] == 'o' )
            vowels[j++] = original_word[i];
    vowels[j] = 0;

    for(int i = 0, k = j-1; i <= j-1/2; ++i, --k)
        if(vowels[i] != vowels[k]){
            printf("N\n");
            return 0;
        }

    printf("S\n");
    return 0;
}
