#include <stdio.h>
#include <stdlib.h>

 struct employee
 {
  float salary;
  float bouns;
  float deduction;
 } ;
float salary( struct employee  x)
{
    float total =(x.salary*x.deduction)+x.bouns;
    return total;
}
int main()
{ struct employee mohsen,maged,mariam;
printf("enter salary ,bouns and deduction for mohsen \n");
scanf("%f%f%f",&mohsen.salary,&mohsen.bouns,&mohsen.deduction);
printf("-------------------------------------------------------------\n");
printf("enter salary ,bouns and deduction for maged \n");
scanf("%f%f%f",&maged.salary,&maged.bouns,&maged.deduction);
printf("-------------------------------------------------------------\n");
printf("enter salary ,bouns and deduction for mariam \n");
scanf("%f%f%f",&mariam.salary,&mariam.bouns,&mariam.deduction);
printf("-------------------------------------------------------------\n");
printf("the net salary for mohsen is %.2f\n",salary(mohsen));
printf("the net salary for maged is %.2f\n",salary(maged));
printf("the net salary for mariam is %.2f\n",salary(mariam));





  return 0;
}
