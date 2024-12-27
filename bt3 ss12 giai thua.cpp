#include<stdio.h>
long long result =1;
long long giai_Thua ( int num1){
	for (int i =1 ; i<= num1 ; i++){
		 result *=i; }
		return result;
	}
	

int main(){
int num;
printf("nhap mot so ");

scanf("%d",&num);


long long fact = giai_Thua(num);

printf("giai thua la %lld", fact );

return 0;

}
