#include<cstdio>
#include<string.h>
#include<algorithm>

#define inf 0x3f3f3f3f
struct aluno {
    char nome[20];
    double nota;
    int faltas;
};

int main(){
    int n;

    scanf(" %d", &n);

    aluno alunos[n];

    for(int i  = 0; i<n; ++i)
        scanf(" %s %lf %d%*c", alunos[i].nome, &alunos[i].nota, &alunos[i].faltas);

    aluno vencedores_atuais[n];

    //for(int i  = 0; i<n; ++i)
        //printf("%s %.2lf %d\n", alunos[i].nome, alunos[i].nota, alunos[i].faltas);
    double maior_nota = -1;

    for(int i = 0; i<n; ++i)
        if (alunos[i].nota > maior_nota)
            maior_nota = alunos[i].nota;

    int k = 0;
    for(int i  = 0; i< n; ++i)
        if (alunos[i].nota == maior_nota)
            vencedores_atuais[k] = alunos[i], ++k;

    //for(int i = 0; i<k; ++i)
        //printf("%s %.2lf %d\n", vencedores_atuais[i].nome, vencedores_atuais[i].nota, vencedores_atuais[i].faltas);
    
    int menor_falta = inf;
    for(int i = 0; i<k; ++i)
        if(vencedores_atuais[i].faltas < menor_falta)
            menor_falta = vencedores_atuais[i].faltas;

    char vencedores_finais[k][20];

    int l = 0;
    for(int i  = 0; i<k; ++i)
        if(vencedores_atuais[i].faltas == menor_falta){
            for(int j = 0; vencedores_atuais[i].nome[j]; ++j){
                vencedores_finais[l][j] = vencedores_atuais[i].nome[j];
                if (!vencedores_atuais[i].nome[j+1])
                    vencedores_finais[l][j+1] = '\0';
            }
            ++l;
        }
    
    char temp[20];
    for (int i = 0; i<l; ++i)
        for (int j = 0; j<l; ++j)
            if (strcmp(vencedores_finais[i], vencedores_finais[j]) < 0){
                strcpy(temp, vencedores_finais[i]);
                strcpy(vencedores_finais[i], vencedores_finais[j]);
                strcpy(vencedores_finais[j], temp);
            }

    for(int i = 0; i<l; ++i)
        printf("%s\n", vencedores_finais[i]);

    return 0;
}
