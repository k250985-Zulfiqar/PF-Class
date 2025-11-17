#include <stdio.h>

//main(){
//	int num,num2;
//	char fileName[100];
//	FILE *fptr;
//	printf("Enter your File Name: ");
//	scanf("%s",&fileName);
//	fptr=fopen("fileName","w");
////	printf("%p", fptr);
//	if (fptr==NULL){
//		printf("Error to Open the file");
//		return 1;
//		
//	}
//	printf("Enter Number\n");
//	scanf("%d",&num);
//	fprintf(fptr,"%d\n",num);
//	printf("Enter Number\n");
//	scanf("%d",&num2);
//	fprintf(fptr,"%d\n",num2);
//	
//	fclose(fptr);
//}

//main(){
//	char Name[30];
//	char fileName[100];
//	FILE *fptr;
//	printf("Enter your File Name: ");
//	scanf("%s",&fileName);
//	fptr=fopen(fileName,"w");
////	printf("%p", fptr);
//	if (fptr==NULL){
//		printf("Error to Open the file");
//		return 1;
//		
//	}
//	printf("Enter your name\n");
//	scanf("%s",&Name);
//	fprintf(fptr,"%s\n",Name);
//
//	fclose(fptr);
//}

//// FILE READING

main(){
	FILE *fptr;
	char userData[500];
	fptr=fopen("zulfiqar.txt","r");
	if (fptr==NULL){
		printf("Error");
		return 1;
	}
	while(fgets(userData,500,fptr)!=NULL){
		printf("%s",userData);
	}
	fclose(fptr);
}
