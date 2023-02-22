#include<stdio.h>

void main(){
	int i=100,a,b,c;
	for(i;i<=999;i++){
		a=i/100%10;
		b=i/10%10;
		c=i%10;
		if(i==a*a*a+b*b*b+c*c*c){
			printf("%d\n",i);
		}
	}
}