#include<cstdio>

int main(){
	
	int n, s, soma=0;
	
	scanf(" %d", &n);
	for (int i=0; i<n; i++){
		scanf(" %d", &s);
		soma += s;
	}

	printf("%d\n", soma);
	return 0;
}
