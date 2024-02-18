#include<stdio.h>
main(){
	int a[2][2],i,j,sum=0;
	printf("enter array:");
	for (i=0;i<2;i++)//rows
	for (j=0;j<2;j++)//column
	scanf("%d",&a[i][j]);
	
	
	printf("aaray is");
	for(i=0;i<2;i++)
	{
		
		printf("\n");
		for (j=0;j<2;j++)
		printf("\t%d",a[j][i]);//transpose
		printf("\t%d",a[i][j]);// no transpose
		
	}
	for(i=0;i<2;i++)
	for(j=0;j<2;j++){
	
	if(a[i][j]%2==0)//even no
	sum=sum+a[i][j];}
	printf("\n sum  of even elements is %d",sum);
}
