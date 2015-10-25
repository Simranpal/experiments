#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    if(scanf("%d %d %d %d", &a, &b, &c, &d) !=2) {
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    }
    return 0;
}

int max_of_four(int a, int b, int c, int d) {
    int max = 0;
    if( a >= b && a >= c && a >= d ) return a;
    else if( b > a && b >= c && b >= d ) return b;
    else if( c > a && c > b && c >= d ) return c;
    else return d;
}
