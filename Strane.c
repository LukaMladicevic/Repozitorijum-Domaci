#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct{
int x;
int y;
} Tacka;
int orjentacijad(Tacka A,Tacka B,Tacka C)
{
return(B.x-A.x)*(C.y-A.y)-(C.x-A.x)*(B.y-A.y);
}
void saIsteStrane(Tacka A,Tacka B,Tacka C, Tacka D){
int d1=orjentacijad(A,B,C);
int d2=orjentacijad(A,B,C);
if((d1>0 && d2>0)||(d1<0 &&d2<0))
printf("Sa iste strane su.");
else
printf("Sa razlictih strana su");
}
int main()
{
Tacka A={1,2},B={2,5},C={-4,4},D={3,4};
saIsteStrane(A,B,C,D);
return 0;
}
