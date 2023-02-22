#include<stdio.h>
int hahha(int aa){
	int i,j,x=0,y=0;
	for (i=1;i<aa;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0){
				x+=j;
			}
		}
		if(x==i)
		{
			y++;
		}
		x=0;
	}
	return y;
}
void main()
{
	int x,y,x1,y1;
	printf("判断两个正整数之间的完数个数\n");
	printf("请输入第一个整数:");
	scanf("%d",&x);
	x1=hahha(x);
	printf("请输入第二个整数：");
	scanf("%d",&y);
	printf("\n");
	y1=hahha(y);
	printf("两数之间的完数个数为：%d\n",y1-x1);


}