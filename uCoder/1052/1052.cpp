#include<cstdio>

int main(){
    int n1, n2, d1, d2, v1, v2;
    double tempo1, tempo2;

    scanf(" %d %d %d %d %d %d", &n1, &d1, &v1, &n2, &d2, &v2);

    tempo1 = (double) d1/ (double) v1;
    tempo2 = (double) d2/ (double) v2;

    if (tempo1 > tempo2) n1 = n2;
    printf("%d\n", n1);
    
    return 0;
}
