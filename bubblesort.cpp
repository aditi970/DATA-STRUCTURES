#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
 int ni;
 printf("Enter the size of the array: ");
 scanf("%d",&ni);
 int a[ni],m,n,flag=0,temp;
 
 double time_spent = 0.0;
 clock_t begin = clock();
 printf("Enter the range between which the number has to be generated for
array: ");
 scanf("%d %d",&n,&m);
 srand(time(NULL));
 for(int i=0;i<ni;i++)
 {
 a[i]=rand()%(m-n+1)+n;
 }
 for(int i=0;i<ni;i++)
 {
 for(int j=0;j<ni-i-1;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 flag=1;
 }
 }
 if(flag==0)
 break;
 
 }
 
 for(int i=0;i<ni;i++)
 printf("%d ",a[i]);
 
 clock_t end = clock();
 
 
 time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 printf("\nThe elapsed time is %f seconds", time_spent);
 
 return 0;
}
