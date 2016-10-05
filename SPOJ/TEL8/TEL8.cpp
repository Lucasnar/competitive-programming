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
const int maxn = 10010; // 10 ^ 5

typedef long long int huge;

char convert(char c){
    if(c >= 65 && c <= 67)
        return '2';
    else if(c >=68 && c <= 70)
        return '3';
    else if(c >=71 && c <= 73)
        return '4';
    else if(c >=74 && c <= 76)
        return '5';
    else if(c >=77 && c <= 79)
        return '6';
    else if(c >=80 && c <=83)
        return '7';
    else if(c >=84 && c <=86)
        return '8';
    else if(c >=87 && c <=90)
        return '9';
    return '\0';
}

int main(){
    char number[32];
    char processed_number[32];

    gets(number);

    for(int i = 0; number[i]; ++i){
        if((number[i] >= 48 && number[i] <= 57) || number[i] == '-')
            processed_number[i] = number[i];
        else
            processed_number[i] = convert(number[i]);

        if(!number[i+1])
            processed_number[i+1] = 0;
    }

    printf("%s\n", processed_number);

    return 0;
}
