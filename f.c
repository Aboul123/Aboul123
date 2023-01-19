#include<stdio.h>
int main()
{
   int i, sum=0;
   while(1){
   printf("\nEnter a number to test[input 0 for stop]: \n");
   scanf("%d",&i);
    if(i==0)
    break;
   for ( i = i; i <=100; i++)
   {
    if (i%2==0 && i%5==0){
    sum = sum + i;
    printf("%d\n",i);
   } 
   }
   printf("this is sum:\n");
   printf("%d\n",sum);
 float avg;
 avg = sum/2;
 printf("This is avg value:%f\n",avg);
   }


    return 0;
}