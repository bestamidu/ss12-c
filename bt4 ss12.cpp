#include<stdio.h>
int MAXI(int num[],int size){
	int max = num[0];
	for (int i =0; i<size; i++  ){
	if(num[i]>max){
		max=num[i];
	}
	}
	return max ;
}

int main (){
	int n;
	printf ("nhap n ");
	scanf("%d",&n);
	int arr[n];
	for (int i =0; i<n; i++){
	printf("nhap gia tri %d=",i);
	scanf("%d",&arr[i]) ;}
	
	int max = MAXI(arr,n);
	printf(" so lon nhat la %d ", max );
	return 0;
}