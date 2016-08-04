#include<cstdio>

int main(){
	int n=-1, j, z, cont=1, diff;

	scanf("%d", &n);

	while (n != 0){

		diff = 0;

		printf("Teste %d\n", cont);

		for (int i=0; i<n; i++){
			scanf(" %d %d", &j, &z);
			diff += j - z;
			printf("%d\n", diff);
		}


		scanf("%d", &n);
		printf("\n");
		cont++;
	}

	return 0;

}
