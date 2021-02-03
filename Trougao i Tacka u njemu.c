#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
int x;
int y;
} Tacka;
double rastojanje(Tacka A,Tacka B)
{
int dx=B.x-A.x;
int dy=B.y-A.y;
return sqrt(dx*dx+dy*dy);
}
double PTrougla(double a,double b,double c)
{
double s=(a+b+c)/2;
return sqrt(s*(s-a)*(s-b)*(s-c));
}
int unutarTrougla(Tacka A,Tacka B,Tacka C,Tacka P)
{
double PA=rastojanje(P,A);
double PB=rastojanje(P,B);
double PC=rastojanje(P,C);
double AB=rastojanje(A,B);
double AC=rastojanje(A,C);
double BC=rastojanje(B,C);
double P1=PTrougla(PA,PC,AC)+PTrougla(PA,PB,AB)+PTrougla(PB,BC,PC);
double P2=PTrougla(AB,AC,BC);
if(P1==P2)return 0;
else return 1;
}
int main()
{
int x,y;
printf("Unesi koordinate tacke A\n");
scanf("%d%d",&x,&y);
Tacka A={x,y};
printf("Unesi koordinate tacke B\n");
scanf("%d%d",&x,&y);
Tacka B={x,y};
printf("Unesi koordinate tacke C\n");
scanf("%d%d",&x,&y);
Tacka C={x,y};
printf("Unesi koordinate tacke P\n");
scanf("%d%d",&x,&y);
Tacka P={x,y};
if(unutarTrougla(A,B,C,P)==1)
printf("Nalazi se u trouglu.");
else printf("Ne nalazi se u trouglu.");
return 0;
}
