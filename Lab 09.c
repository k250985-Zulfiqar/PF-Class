#include <stdio.h>

//void printGreetings(){
//	printf("Hello User\n");
//}
//
//int sumOfNumbers(int a,int b){
//	return a+b;
//}
//
//main(){
//	printGreetings();
//	printGreetings();
//	printf("%d",sumOfNumbers(10,20));
//}

//        *MAX NUMBER*
//int maxNumber(int a,int b){
//	if(a>b){
//		return a;
//	}
//	else{
//		return b;
//	}
//}
//
//main(){
//	printf("%d",maxNumber(20,50));
//}


//       *EVEN ODD*  
//void evenOdd(int a){
//	if (a%2==0){
//		printf("Even");
//	}
//	else{
//		printf("Odd");
//	}
//}
//main(){
//	evenOdd(4);
//}


//       *ARRAY *
//
//int sumArray(int data[]){
//	int sum=0,i;
//	for(i=0;i<5;i++){
//		sum+=data[i];
//	}
//	return sum;
//	
//}
//
//main(){
//	int i;
//	int number[5];
//	for(i=0;i<5;i++){
//		printf("Enter number %d: ",i+1);
//		scanf("%d",&number[i]);
//		
//	}
//	int result=sumArray(number);
//	printf("\nThe sum is, %d",result);
//	return 0;
//}

//           *Interest*
float interest(int principal,int rate,int time){
	int result=0;
	result=(principal*rate*time)/100;
	return result;
}

main(){
	int principal,rate,time;
	
	printf("Enter principal: ");
	scanf("%d",&principal);
	printf("Enter rate in percentage : ");
	scanf("%d",&rate);
	printf("Enter time: ");
	scanf("%d",&time);
	
	float final=interest(principal,rate,time);
	printf("The interest is, %.2f",final);

}










