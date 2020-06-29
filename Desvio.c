#include <stdio.h>
#include <math.h>
#define tam 100
int main() {
    int i, t,  v[tam];
    double ad=0,media,  soma=0, o, n;
    scanf("%d", &t);
    n=t;
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
        soma=soma+v[i];
    }
    media=soma/n;
    for(i=0;i<n;i++){
        o=pow((v[i]-media), 2);
        ad=ad+o;
    }
    printf("%.2lf", sqrt(ad/(n-1)));
	return 0;
}