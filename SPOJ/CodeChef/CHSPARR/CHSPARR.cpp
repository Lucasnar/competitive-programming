#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

const int mod = 1000000007;
vector <long long> vec;

void one_minute(){

    //printf ("[");
    //for (int i = 0; i<n; ++i)
        //i == n-1 ? printf("%d]\n", original_vector[i]) : printf("%d ", original_vector[i]);

    long long n = vec.size()-1;
    long long n2 = (2*vec.size()) - 1;
    long long i;

    for (i = n; i<n2; ++i)
        vec.push_back(0);

    for (i=n; i>=0; --i)
        vec[2*i]= vec[i];

    for (i = 1; i<n2; i+=2)
        vec[i] = vec[i-1] + vec[i+1];

    //printf ("[");
    //for (int i = 0, n2 = (n*2)-1; i<n2; ++i)
        //i == n2-1 ? printf("%d]\n", new_vector[i]) : printf("%d ", new_vector[i]);
}


int main(){
    int t;

    scanf(" %d", &t);

    while(t--){

        int n,m, x, y;

        int vec_element;

        scanf(" %d %d %d %d", &n, &m, &x, &y);

        for (int i = 0; i<n; ++i){
            scanf(" %d", &vec_element);
            vec.push_back(vec_element);
        }
        

        for (int i = 0; i<m; ++i){
            one_minute();
            //printf ("[");
            //for (int i = 0, n2 = -1+vec.size(); i<n2; ++i)
                //i == n2-1 ? printf("%d]\n", vec[i]) : printf("%d ", vec[i]);
        }

        long long s = 0;
        for (int i = x-1; i<y; ++i)
            s += vec[i] % mod;

        printf("%lld\n", s % mod);
        vec.clear();

    }

    return 0;
}

//const int maxa = 1100;
//int array[maxa];

//int * one_minute(int array[], int n){
//
    //static int new_array[200000];
    //int *new_array = (int *) malloc(sizeof(int));
//
    //for (int i = 1, n2 = 2*n; i<n2; ++i)
        //new_array[i] = 0;
//
    //for (int i=1; i<=n; ++i)
        //new_array[i + (i-1)] = array[i];
//
    //for (int i = 2, l=2*n; i<l; i+=2)
        //new_array[i] = new_array[i-1] + new_array[i+1];
//
    //printf("[");
    //for (int i = 1, l=n+n; i<l; ++i)
        //i == l-1 ? printf("%d]\n", new_array[i]) : printf("%d ", new_array[i]);

    //return new_array;
//}


//int main(){
    //int t;
//
    //scanf(" %d", &t);
//
    //while(t--){
        //int n, m, x, y;
//
        //scanf(" %d %d %d %d", &n, &m, &x, &y);
//
        //for (int i = 1; i<=n; ++i)
            //scanf(" %d", &array[i]);
//
        //int *new_array;
        //new_array = one_minute(array, n);
//
        //for (int i = 1; i<m; ++i){
            //n += n-1;
            //new_array = one_minute(new_array, n);
        //}
//
        ////printf ("[");
        ////for (int i = 1, l = 2*n; i<l; ++i)
            ////i == l-1 ? printf("%d]\n", *(new_array+i)) : printf("%d ", *(new_array+i));
//
        //int soma_final = 0;
        //for (int i = x; i<=y; ++i)
            //soma_final += new_array[i];
//
        //printf("%d\n", soma_final % 1000000007);
//
    //}
//
    //return 0;
//}
