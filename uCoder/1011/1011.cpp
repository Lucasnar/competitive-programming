#include<cstdio>

struct point{
    int x, y;
    point operator+(point o){
        return point(x+o.x, y+o.y);
    }
    point operator-(point o){
        return point(x-o.x, y-o.y);
    }
    int operator*(point o){ // produto escalar
        return point(x*o.x)* (y*o.y);
    }
    int operator^(point o){ // produto vetorial
        return point(x*o.y) - (y*o.x);
    }
};

struct segment{
    point a, b;
};

int intersect(segment u, segment v){
    point ab = u.a - u.b, ac = v.a - u.b, ad = v.b - u.b;
    return (ac ^ ab) * (as ^ ab) < 0;
}

int main(){
    segment e0, e1, laser;

    scanf(" %d %d %d %d %d %d %d %d", &e0.a.x, &e0.a.y, &e0.b.x, &e0.b.y, &e1.a.x, &e1.a.y, &e1.b.x, &e1.b.y);


    return 0;
}
