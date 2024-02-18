#include <stdio.h>
main(){
	int a[10];
	int pass,hold,i,n;
	printf("enter total no of elements for the array:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	//loop to control number of passes
	for (pass=0;pass<n-1;i++){
		//loop to control number of comparison per pass
		for(i=0;i<n-pass-1;i++){
			if(a[i]>a[i+1]){
				hold=a[i];
				a[i]=a[i+1];
				a[i+1]=hold;
			}
		}
	}
	printf("\n data items in ascending order");
	for(i=0;i<n;++i){
		printf("\n%d",a[i]);
	}
}
