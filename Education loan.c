#include<stdio.h>
void main()
{
float f1,f2,f3,f4,itrst,total;
int i,m;
printf("Enter the fees of four years and interest:\n");
scanf("%f%f%f%f%f",&f1,&f2,&f3,&f4,&itrst);
itrst=itrst/12.0;
total=f1+f2+f3+f4;
for(i=0;i<12;i++)
{
   m=(f1*itrst)/100;
   f1=f1+m;
}
f2=f1+f2;
for(i=0;i<12;i++)
{
    m=(f2*itrst)/100;
    f2=f2+m;
}
f3=f2+f3;
for(i=0;i<12;i++)
{
    m=(f3*itrst)/100;
    f3=f3+m;
}
f4=f3+f4;
for(i=0;i<12;i++)
{
    m=(f4*itrst)/100;
    f4=f4+m;
}
printf("The total fees at the end of course is %f",f4);
itrst=f4-total;
printf("\nInterest added to fees is %f",itrst);
}
