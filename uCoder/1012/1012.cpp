#include<cstdio>

int main(){
    int n;
    int p, m, q, c, l;
    int q_m[150][150];
    int c_l[150][150];


    scanf(" %d", &n);

    for (int i = 1; i<=n; ++i){
        printf("Case %d:\n", i);

        scanf(" %d %d", &p, &m);

        for (int j = 0; j<m; ++j)
            for (int k = 0; k<p; ++k){
                scanf(" %d", &q);
                q_m[j][k] = q;
            }

        for (int j = 0; j<p; ++j){
            scanf(" %d %d", &c, &l);
            c_l[j][0] = c;
            c_l[j][1] = l;
        }

        for (int j =0 ; j<m; ++j){
            int m_cost = 0;
            int m_profit = 0;
            for (int k=0; k<p; ++k){
                m_cost += q_m[j][k] * c_l[k][0];
                m_profit += q_m[j][k] * c_l[k][1];
            }
            printf("%d %d\n", m_cost, m_profit);
        }
    }

    return 0;
}
