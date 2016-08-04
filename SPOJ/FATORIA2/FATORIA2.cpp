#include<cstdio>

int main(){
	
	int n, fat=1, cont;
	
	scanf(" %d", &n);
	cont = n;
	for (int i=0; i<cont; i++){
		fat *= n;
		n--;
	}

	printf("%d\n", fat);
	return 0;
}
