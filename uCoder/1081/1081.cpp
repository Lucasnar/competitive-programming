#include<cstdio>
#include<cstring>
#include<cctype>

char frases[1020][1020];
char fallback[1020];
char linguagem[100];
int n_frases, n_linguagens;
int t_linguagem;
int count;

void prepara() {
  fallback[0]=-1;
  fallback[1]=0;
  for(int i=2, j=0; i<t_linguagem; ) {
    if (j<0 || linguagem[i-1]==linguagem[j]) {
      fallback[i++]=++j;
    }
    else {
      j=fallback[j];
    }
  }
}

bool busca(int p) {
  for(int i=0,j=0; frases[p][i];) {
    if (j<0 || linguagem[j]==frases[p][i]) {
      if (j==t_linguagem-1) {
        return true;
      }
      else {
        ++i; ++j;
      }
    }
    else {
      j=fallback[j];
    }
  }
  return false;
}

int main(){
    scanf(" %d%*c", &n_frases);

    for (int i = 0; i<n_frases; ++i){
        gets(frases[i]);
        for (int j = 0; frases[i][j]; ++j) frases[i][j] = toupper(frases[i][j]);
    }

    scanf(" %d%*c", &n_linguagens);

    for (int i=0; i<n_linguagens; ++i){
        gets(linguagem+1);
        printf("%s ", linguagem+1);

        linguagem[0] = ' ';
        t_linguagem = strlen(linguagem);
        linguagem[t_linguagem++]= ' ' ;
        linguagem[t_linguagem] = 0;

        for (int j = 0; linguagem[j]; ++j) linguagem[j] = toupper(linguagem[j]);

        prepara();
        count = 0;
        for(int j =0; j<n_frases; ++j)
            if (busca(j)) 
                count++;

        printf("%d\n", count);
    }

    return 0;
}
