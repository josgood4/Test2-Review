#include <stdio.h>

extern int fib(int num);

int fib_c(int num){
	int first, second, temp;
	first=second=1;
	if(num<=2) return second;
	for(num; num>2; num--){
		temp=second;
		second+=first;
		first=temp;
	}
	return second;
}

int main(){
	fib(12);
	/*int i = 8;
	printf("%dth fibonacci number is: %d\n", i, fib_c(i));
	printf("%dth fibonacci number is: %d\n", 12, fib(12));*/
	return 0;
}
