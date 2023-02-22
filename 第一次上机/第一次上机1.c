#include<stdio.h>
void main(){
	int i,j,n,r[100];
	printf("简单选择排序\n");
	printf("排序个数：");
	scanf("%d",&n);
	printf("请输入%d个数，数之间用空格分开：",n);
	for(i=0;i<n;i++){
		scanf("%d",&r[i]);
	}
	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(r[j]<r[min])
				min=j;
		}
		if(min!=i){
		int temp=r[min];
		r[min]=r[i];
		r[i]=temp;
		}
	}
	for(i=0;i<n;i++){
	printf("%d\n",r[i]);
	}
}