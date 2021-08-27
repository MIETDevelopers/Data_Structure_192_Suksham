#include<stdio.h>
int a=20,b=26,c;
int addd(int a,int b, int c);
int main (){
	printf("Global  variables a & b = %d & %d\n",a,b);
	addd(a, b, c);
}
int addd(int a,int b, int c){
	c=a+b;
	printf("a + b = %d",c);
}