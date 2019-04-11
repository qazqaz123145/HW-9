#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int qqq,QQQ;
	for(qqq=1;qqq<=9;qqq++)
	{
		for(QQQ=1;QQQ<=9;QQQ++)
		printf("%d*%d=%2d\t",qqq,QQQ,qqq*QQQ);
		printf("%\n");
	}
	
	system("pause");
	return 0;
}
