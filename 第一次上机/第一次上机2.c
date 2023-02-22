#include<stdio.h>
void main(){
	int i,j,n,r[100];
	printf("直接插入排序\n");
	printf("排序个数：");
	scanf("%d",&n);
	printf("请输入%d个数，数之间用空格分开：",n);
	for(i=0;i<n;i++){
		scanf("%d",&r[i]);
	}
	for(i=1;i<n;i++){
		int temp=r[i];
		for(j=i-1;j>=0&&temp<r[j];j--){
			r[j+1]=r[j];
		}
		r[j+1]=temp;
	}
	for(i=0;i<n;i++){
		printf("%d\n",r[i]);
	}
}