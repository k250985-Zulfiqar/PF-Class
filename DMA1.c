#include <stdio.h>
#include <stdlib.h>

main(){
	int n,i, *ptr;
	printf("%p\n",ptr);
	printf("Enter number of values: ");
	scanf("%d",&n);
	ptr = (int *)malloc(n*sizeof(int));
	if (ptr==NULL){
		printf("Error in memory allocation");
	}
	printf("Enter values \n");
	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
	}
	printf("Entered values are: \n");
	for(i=0;i<n;i++){
		printf("%d\n",*(ptr+i));
	}
	free(ptr);
}

