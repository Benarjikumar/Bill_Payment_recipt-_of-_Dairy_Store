#include<stdio.h>
#include <time.h>
#include "Dairy.h"
int main()
{
    
  int sub ;
  int Milk =34;
  int Curd =10;
  int butter=50;
  int buttermilk=8;
int m,p1,n,p2,o,p3,q,p4;
char name[50];
time_t t;   // not  primitive datatype
    time(&t);
    
  printf("Product Discription\n");
printf("cost of Milk 1 packet is:%d\n",Milk);
printf("cost of Curd 1 packet is :%d\n",Curd);
printf("cost of Butter 1  packet is:%d\n",butter);
printf("cost of Butter Milk 1 packet is:%d\n", buttermilk);
   printf ("enter the number of   milk packets that are taken\n");
   scanf("%d",&m);
   p1 =milk(m); 
  printf ("enter the number of   curd  packets that are taken\n");
  scanf("%d",&n);
  p2=curd(n);
  printf ("enter the number of   Butter packets that are taken\n");
  scanf("%d",&o);
  p3=Butter(o);
  printf("enter the number of   Butter_milk  packets that are taken\n");
  scanf("%d",&q);
  printf("Enter the name of customer\n");
  scanf("%s",name);
  p4=Buttermilk(q);
  
  sub  = total (p1,p2,p3,p4);
  
  printf("THE DAIRY STORE\n");

 printf("Name:%s\n",name);
 printf("date and time is:%s", ctime(&t));
  
  if(p1>0){
  printf(" Cost of milk packets that are taken is:%d\n",p1);
  }
  if(p2>0){
  printf(" Cost of  curd packets that are taken is:%d\n ",p2);
  }
  if(p3>0){
  printf(" Cost number of Butter packets that are taken is :%d\n",p3);
  }
  if(p4>0){
 printf(" Cost number of Butter_milk packets that are taken is:%d\n",p4);
   printf("The Total=%d\n",sub);
 
  }
}

  