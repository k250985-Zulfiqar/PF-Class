#include <stdio.h>
#include<stdlib.h>

int main(){
	int i;
	//malloc example
	int * ptr1=(int*)malloc(5*sizeof(int));
	for(i=0;i<0;i++){
		printf("ptr1[%d] : %d (garbage value)\n",i,ptr1[i]);
	}
	//calloc example
	int ptr2=(int *)calloc(5,sizeof(int));
	for ( i=0;i<5;i++){
		printf("ptr2[%d] : %d (initialized to 0)\n",i,ptr2[i]);
	}
	//realloc example
	ptr1=(int*)realloc(ptr1,10*sizeof(int));
	for ( i=0;i<10;i++){
		printf("ptr1[%d] : %d (existing values retained; new values uninitialized)\n",i,ptr1[i]);
	}
	free(ptr1);
	free(ptr2);
	return 0;
}
