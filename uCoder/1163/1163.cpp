#include<cstdio>


int main(){
    int n, m, a, k, nc=0, nm=0, na=0, nk=0;
    char senha[1001];

    scanf(" %d %d %d %d ", &n, &m, &a, &k);

    gets(senha);

    for (int i =0;senha[i]; ++i)
        if (senha[i] >= 97)
            ++nm, ++nc;
        else if (senha[i] >= 65)
            ++na, ++nc;
        else
            ++nk, ++nc;

    //printf("nm %d na %d nk %d\n", nm, na, nk);
    //printf("senha: %s\n", senha);

    nc >= n && nm >= m && na >= a && nk >= k ? printf("Ok =/") : printf("Ufa :)");
    printf("\n");

    return 0;
}
