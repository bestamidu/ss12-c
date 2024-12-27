#include<stdio.h>
 void my_Arr(int mochi[], int size ){
  for (int i=0 ; i<size  ; i++){
  	printf("%d",mochi[i]);
  }
}
  
  
int main(){
	int arr[5]={3,4,6,7,55};
	 int size=sizeof(arr)/sizeof(int);
   my_Arr(arr,size);
	return 0; 
}