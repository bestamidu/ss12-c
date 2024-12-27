#include<stdio.h>


int timsohoanhao(int n ){
	int tong=0;
	for ( int i = 1;i<=n/2;i++){
		if( n % i == 0 ) { 
		tong = tong + i;
		}
	}
	if ( tong == n) {
	printf("True");
}
	else {
	 printf(" khong phai la so hoan hao ");
}
}
int main (){
	int n;
	printf("nhap n");
	scanf("%d",&n);
	timsohoanhao(n) ;
}