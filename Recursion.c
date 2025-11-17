#include <stdio.h>

Fact(n){
	if (n==1){
		return 1;
	}
	else{
		return n*Fact(n-1);
		printf("%d",n);
	}
}

int main(){
	int n=5;
	
	printf("%d",Fact(n));
}
