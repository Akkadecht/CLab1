#include <stdio.h>

int main(){
	int n1;
	int n2;
	int n3;
	scanf("%d",&n1);
	scanf("%d",&n2);
	if(n1>n2){
		n3=n1-n2;
        printf("%d greater than %d = %d",n1,n2,n3);
	}
	else{
		n3=n2-n1;
		printf("%d greater than %d = %d",n2,n1,n3);
	}
	return 0;
}
