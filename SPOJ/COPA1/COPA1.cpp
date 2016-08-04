#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector <char> times;
    char vet[] = "ABCDEFGHIJKLMNOP";
    int m, n, count=0;

    for (int i = 0; i<16; i+=2){
        scanf(" %d %d", &m, &n);

        if (m > n) times.push_back(vet[i]);
        else times.push_back(vet[i+1]);
    }

    for(int i = 0; i<8; i+=2){
        scanf(" %d %d", &m, &n);

        if (m > n) times.push_back(times[i]);
        else times.push_back(times[i+1]);
    }

    for(int i = 8; i<12; i+=2){
        scanf(" %d %d", &m, &n);

        if (m > n) times.push_back(times[i]);
        else times.push_back(times[i+1]);
    } 

    //for (int i =0; i<16; ++i) printf("%c ", times[i]);

    scanf(" %d %d", &m, &n);
    if (m > n) printf("%c\n", times[12]);
    else printf("%c\n", times[13]);

    return 0;
}
