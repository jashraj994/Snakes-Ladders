#include<stdio.h> 
#include<stdlib.h>
main()
{
int ch,n,m;
printf("Enter 1 for addition./n");
printf("Enter 2 for subtraction./n");
printf("Enter 3 for division./n");
printf("Enter 4 for multipliction./n");
printf("Enter any choice./n");
scanf("%d",&ch);
printf("Enter any 2 Values./n");
scanf("%d%d",&n,&m);

switch(ch)
{
case1:
printf("The sum is %d",n+m);
break();
case2:
printf("The difference is %d",n-m);
break();
case3:
printf("The quotient is %d",n/m);
break();
case4:
printf("The product is %d",n*m);
break();

default:
	printf("Invalid Choice");

}
}
