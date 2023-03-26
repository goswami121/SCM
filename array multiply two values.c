#include<stdio.h>
int main(){
	
	int arr[]={1,2,3,4,5};
	int*p1=&arr[2];
	int*p2=&arr[4];
	int p3 = *++p1 + *++p2;
	printf("%d",*p1);
	printf("%d",*p2);
	printf("%d",p3);
		
	
	
	
	
	
	return 0;
}
