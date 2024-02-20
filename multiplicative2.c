#include<stdio.h>
main()
{
 int i,num,MI;
 printf("Enter number to get multiplicative Inverse\n");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
  MI=((i*26)+1);
  if(MI%num==0)
  {
   break;
  }
 }
 MI=MI/num;
 printf("Multiplicative inverse of %d is %d\n",num,MI);
 printf("------------Nishan Bhattarai-------------");
    printf("\n--------- Rollno:15 --------------");
}
