#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>

using namespace std;

struct aluno{
    char nome[32];
    double pontuacao;
};

bool operator<(const aluno a, const aluno b) {
    if(a.pontuacao != b.pontuacao)
        return a.pontuacao > b.pontuacao;
    else
        return strcmp(a.nome, b.nome) < 0;
}

int main(){
    aluno alunos[512];
    char linha[64], renda_char[8];
    int n_alunos=0, aux, renda_int, fim_renda_char; 

    while(gets(linha)){
        for(int i  = 0;; ++i){
            alunos[n_alunos].nome[i] = linha[i];
            if(linha[i+1] == ';'){
                alunos[n_alunos].nome[i+1] = '\0';
                aux=i+2;
                break;
            }
        }

        alunos[n_alunos].pontuacao = 0;
        //printf("%c\n", linha[aux]);
        if(linha[aux++] == 'S')
            alunos[n_alunos].pontuacao = 15000;
        //printf("%c\n", linha[aux]);
        //printf("%d\n", alunos[n_alunos].pontuacao);

        for(int i = 0; i<8; ++i)
            renda_char[i] = 0;

        for(int i = ++aux, j = 0; ; ++i, ++j){
            renda_char[j] = linha[i];
            if(linha[i+1] == ';'){
                fim_renda_char  = j;
                aux=i+2;
                break;
            }
        }
        renda_int = 0;
        for(int i = fim_renda_char, m=1; i >= 0; --i){
            renda_int += (renda_char[i] - '0') * m;
            m *= 10;
        }
        //printf("renda_int %d\n", renda_int);

        alunos[n_alunos].pontuacao += 10000 - renda_int;
        //printf("%d\n", alunos[n_alunos].pontuacao);

        if(linha[aux++] == 'S')
            alunos[n_alunos].pontuacao += 0.5;

        if(linha[++aux] == 'S')
            alunos[n_alunos].pontuacao += 0.3;

        ++aux;
        if(linha[++aux] == 'S')
            alunos[n_alunos].pontuacao += 0.1;
                
        ++n_alunos;
    }

    sort(alunos, alunos+n_alunos);
    //for(int i = 0; i<n_alunos; ++i)
        //printf("%s, %lf\n", alunos[i].nome, alunos[i].pontuacao);

    double p = -1;
    for(int i = 0, j=0; i<n_alunos; ++i){
        if(alunos[i].pontuacao != p)
            ++j;
        printf("%d %s\n", j, alunos[i].nome);
        p = alunos[i].pontuacao;
    }

    return 0;
}
