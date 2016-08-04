#include<cstdio>

const int maxn = 80000; //um pouco maior que 10^6/(log(10^6)-1)
int primos[maxn];

typedef long long int huge;

int magic[] = {2, 7, 61, 0};

int exp_mod(int base, int exp, int mod) {
  huge resp, tmp;
  if (exp&1)
    resp=base;
  else
    resp=1;
  exp >>= 1;
  if (exp>0) {
    tmp = exp_mod(base, exp, mod);
    resp = (resp * tmp)%mod * tmp;
  }
  return resp%mod;
}
bool is_witness(int a, int n, int d, int s) {
  //printf("is_witness(%d %d %d %d)\n", a, n, d, s);
  a = exp_mod(a, d, n);
  //printf("a^d mod n = %d\n", a);
  if (a==1 || a==n-1)
    return false;
  for(int i=0; i<s; ++i) {
    a = exp_mod(a, 2, n);
    //printf("new a = %d\n", a);
    if (a==n-1)
      return false;
  }
  return true;
}
bool is_prime(int n) {
  for(int i=0; magic[i]; ++i)
    if (n==magic[i])
      return true;
    else if (n%magic[i]==0)
      return false;
  int d=n-1, s=0;
  while(!(d&1)) {
    ++s;
    d>>=1;
  }
  for(int i=0; magic[i]; ++i)
    if (is_witness(magic[i], n, d, s))
      return false;
  return true;
}

int main(){
    int n, c=-1, flag;
    
    for(int i = 2; i<1000000; ++i)
        if(is_prime(i))
            ++c, primos[c] = i;

    while(true){
        scanf(" %d", &n);
        if(!n) break;

        if (n&1)
            printf("erro\n");
        else{

            flag=0;
            for(int i = 0; i<=maxn;++i){
                if(flag) break;
                for(int j=i;j<=maxn; ++j)
                    if(primos[i] + primos[j] == n){
                        printf("%d %d\n", primos[i], primos[j]);
                        flag = 1;
                        break;
                    }
            }
        }


    }

    return 0;
}
