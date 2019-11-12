#include <bits/stdc++.h>
using namespace std;
const int maxn = 10000;
typedef long double ld;

void gera(ld& a,ld& b){

    a = rand()%100;
    b = rand()%100;

    a = 10.0/a;
    b = 10.0/b;

  //  a -= 1.0;
  //  b -= 1.0;
}

int main(){

    ld cont = 0;
    srand(time(NULL));
    for(int i=0;i<maxn;i++){
        long double a,b;
        gera(a,b);
        a = a*a + b*b;
        if(a <= 1.000000) cont = cont+1.0;
    }

    ld ans = (cont*4)/maxn;

    printf("%.5Lf\n",ans);    
}