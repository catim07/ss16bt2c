#include<stdio.h>
void changeValue(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void printfValue(int a,int b){
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
int main(){
	int num1=100,num2=311;
	changeValue(&num1,&num2);
	printfValue(num1,num2);
}
