#include <stdio.h>
#include <stdlib.h>

main(){
	int i,n;
	char (*ptr)[20]; //pointing to an array of 20 characters
	printf("Enter number of values: ");
	scanf("%d",&n);
	//ptr=(typecasting*) malloc(size_in_bytes);
	//allocates a single block of memory of the given size
	//Memory is not initialized. Contains garbage values.
	//returns a pointer to the first byte of allocated memory
	ptr=malloc(n*sizeof(*ptr));
	if (ptr==NULL){
		printf("Error in memory allocation! \n");
	}
	printf("Enter values of n: ");
	for (i=0;i<n;i++){
		scanf("%s",(ptr+i));
	}
	printf("Your values are: \n");
	for(i=0;i<n;i++){
		printf("%s \n",*(ptr+i));
	}
	free(ptr);
}
