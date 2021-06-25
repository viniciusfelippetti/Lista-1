#include<stdio.h>
#include <stdlib.h>

int main(){
int i=3,j=5,a,b;
int *p, *q;
p = &i;
q = &j;


p == &i;
printf("Valor da primeira equacao= %x\n", p);
printf("Valor da segunda equacao= %d\n", *p - *q);
printf("Valor da terceira equacao= %d\n", **&p);
printf("Valor da quarta equacao= %d\n", 3 - *p/(*q) + 7);

return 0;
}
