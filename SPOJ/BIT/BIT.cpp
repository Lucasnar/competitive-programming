#include<cstdio>

int main(){

	int v, i, j, k, l, cont=1, v_temp;
	scanf(" %d", &v);
	while(v != 0){
		i=0; j=0; k=0; l=0;
		printf("Teste %d\n", cont);
		v_temp = v;

		while(v_temp != 0){
			if (v_temp >= 50){
				v_temp -= 50;
				i++;
			}
			else if (v_temp >= 10){
				v_temp -= 10;
				j++;
			}
			else if (v_temp >= 5){
				v_temp -= 5;
				k++;
			}
			else{
				v_temp -= 1;
				l++;
			}

		}
		printf("%d %d %d %d\n\n", i, j, k, l);
		cont++;
		scanf(" %d", &v);
	}

	return 0;
}
