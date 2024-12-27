#include<stdio.h>
int tinh_Sum(int c , int d){
	int sum = c+d;
	return sum;
}

int main(){
	int a =4 , b=5; 
	int sum=tinh_Sum(a,b);
	printf("tong la %d ", sum);
	return 0;
	
}