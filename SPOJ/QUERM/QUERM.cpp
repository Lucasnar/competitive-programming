#include<cstdio>

int main(){
	
	int n, cont=1, pos, sorteado;
	scanf(" %d", &n);
	while(n!=0){
		printf("Teste %d\n", cont);
		for(int i=1; i<=n; i++){
			scanf(" %d", &pos);
			if (pos == i){
				sorteado = pos;
			}
		}
		printf("%d\n\n", sorteado);
		cont++;
		scanf(" %d", &n);
	}
	return 0;
}

