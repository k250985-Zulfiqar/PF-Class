#include <stdio.h>
#include <string.h>


int main(){
	char degree[10];
	char result[10];
	printf("Enter your Degree: ");
	scanf("%s",&degree);
	
	if (strcmp(degree,"MS")==0){
		printf("Enter Your Result: ");
		scanf("%s",&result);
		if (strcmp(result,"Pass")==0){
			printf("Congrats! You are hired");
		}
		else{
			printf("Better Luck Next Time!");
			
		}
	}
	else{
		printf("Not Eligible!");
	}	
	return 0;
}
