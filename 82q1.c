#include<stdio.h>
int square(int);
void main(){
	int a;
	int ans;
	printf("enter the number:");
	scanf("%d",&a);
	ans=square (a);
	printf("square is %d \n",ans);
}
int square(int n)
{
	return n*n;
}
