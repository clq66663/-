#include<stdio.h>
void swap(int *i,int *j){
	int t;
	t=*i;
	*i=*j;
	*j=t;
}
void PerDown(int r[],int i,int n){
	int child;
	int Tmp;
	for(Tmp=r[i];2*i+1<n;i=child){
		child=2*i+1;
		if(child <n-1 && r[child+1]>r[child])
			++child;
		if(Tmp<r[child]){
			r[i]=r[child];
		}
		else
			break;
	}
	r[i]=Tmp;
}
void main(){
	int i,j,n,r[100];
	printf("堆排序\n");
	printf("排序个数：");
	scanf("%d",&n);
	printf("请输入%d个数，数之间用空格分开：",n);
	for(i=0;i<n;i++){
		scanf("%d",&r[i]);
	}
	for(i=n/2;i>=0;--i){
		PerDown(r,i,n);
	}
	for(i=n-1;i>0;--i){
		swap(&r[0],&r[i]);
		PerDown(r,0,i);
	}
	for(i=0;i<n;i++){
		printf("%d\n",r[i]);
	}
}