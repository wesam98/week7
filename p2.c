#include <stdio.h>
#include <stdlib.h>
struct student
{int id;
int  programming;
int  datastructure;
int  math;
int algorithm;
};
int main()
{int flag=0;
struct student sub [10]=
{
{600,89,80,90,78},
{601,97,57,88,89},
{602,90,77,56,90},
{603,57,90,55,77},
{604,77,99,88,78},
{605,89,90,34,100},
{606,90,98,88,77},
{607,99,88,76,66},
{608,98,57,90,90},
{609,88,99,77,90}
};
int id;
printf("enter your id ");
scanf("%d",&id);
for(int i=0;i<10;i++)
{if(id==sub[i].id)
{flag =1;
printf("programming=%d,data structure=%d,math=%d,algorithm=%d",sub[i].programming,sub[i].datastructure,sub[i].math,sub[i].algorithm);
    break;
}
}

if(flag==0)
    printf("wrong ID");

    return 0;
}
