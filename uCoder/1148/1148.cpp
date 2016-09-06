// NAO RESOLVIDO

#include<cstdio>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

const int maxn = 10010;
vector<int> castelo[maxn];
vector<int> chaves_atuais;
int visitado[maxn];
int chaves[maxn];
int alcanca[maxn];

int main(){
    int n, m, a, b, c;

    while(scanf(" %d %d", &n, &m) == 2){

        for(int i=0; i<m;++i)
                castelo[i].clear();
        chaves_atuais.clear();

        for(int i = 1; i<n; ++i){
            chaves[i] = 0;
            visitado[i] = 0;
            alcanca[i] = 0;
        }

        for(int i = 0; i<m; ++i){
            scanf(" %d %d", &a, &b);
            --a, --b;
            castelo[a].push_back(b);
            castelo[b].push_back(a);
        }

        for(int i = 1; i<n; ++i){
            scanf(" %d", &c);
            --c;
            chaves[c] = i;
        }

        chaves_atuais.push_back(chaves[0]);
        alcanca[0] = 1;
        visitado[0] = 1;

        for(int i = 0; i<n; ++i){

                for(int j = 0, t = chaves_atuais.size(); j<t; ++j)
                    if (chaves_atuais[j] == i){
                        chaves_atuais.push_back(chaves[i]);
                        visitado[i] = 1;
                        break;
                    }

                for(int j = 0, t = castelo[i].size(); j<t; ++j){
                    //printf("visitado[castelo[i][j]] = visitado[castelo[%d][%d]] = visitado[%d] = %d\n", i, j, castelo[i][j], visitado[castelo[i][j]]);
                    if (alcanca[i] && !visitado[castelo[i][j]] && find(chaves_atuais.begin(), chaves_atuais.end(), castelo[i][j]) != chaves_atuais.end()){
                        alcanca[castelo[i][j]] = 1;
                        chaves_atuais.push_back(chaves[castelo[i][j]]);
                        //printf("alcacei o %d\n", castelo[i][j]+1);
                    }
                }

                //for(int j = 0, t = castelo[i].size(); j<t; ++j){
                    //printf("visitado[castelo[i][j]] = visitado[castelo[%d][%d]] = visitado[%d] = %d\n", i, j, castelo[i][j], visitado[castelo[i][j]]);
                    //if (alcanca[i] && !visitado[castelo[i][j]] && find(chaves_atuais.begin(), chaves_atuais.end(), castelo[i][j]) != chaves_atuais.end()){
                        //alcanca[castelo[i][j]] = 1;
                        //printf("alcacei o %d\n", castelo[i][j]+1);
                    //}
                //}

       }

        for(int i = 0; i<n; ++i)
            if(!visitado[i]){
                printf("nao");
                break;
            }
            else if( i == n-1)
                printf("sim");
        printf("\n");
        

    }

    return 0;
}
