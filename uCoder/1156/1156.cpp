#include<cstdio>

int main(){
    int t, at, ad, oad, bt, bd, obd, hp;
    
    scanf(" %d", &t);

    while(t--){
        scanf(" %d %d %d %d %d", &at, &ad, &bt, &bd, &hp);

        oad = ad;
        obd = bd;
        ad = 0;
        bd = 0;
        while(true){
            if (!ad){
                ad = oad;
                //++ad;
                hp -= at;
                if (hp <= 0){
                    printf("Andre\n");
                    break;
                }
            }
            if (!bd){
                bd = obd;
                //++bd;
                hp -= bt;
                if (hp <= 0){
                    printf("Beto\n");
                    break;
                }
            }
            --ad;
            --bd;
        }
    }

    return 0;
}
