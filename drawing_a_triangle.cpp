#include <stdio.h>
#include <math.h>


main()
{

	
	int n,i,j,k;
	printf ("\n Podaj liczbe elementow trojkata");
 	scanf ("%d",&n);
	
	for(i=1;i<=n;i++)
 {
 	for(j=1;j<=i;j++)
 	{
 		printf("*");
 		
	 }
 	printf("\n");
 	

 }
 for(i=n-1;i>=1;i--)
 {
 	for(j=1;j<=i;j++)
 	{
 		printf("*");
 		
	 }
 	printf("\n");
 	

 }
}
 
