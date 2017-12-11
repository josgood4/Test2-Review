#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define TOLERANCE 0.000001
#define FLOAT_EQUAL(x,y) (((x)-(y)) <= TOLERANCE && ((x)-(y)) >= -TOLERANCE)
#define LOG_2(x) (log(x) / log(2))
#define IS_WHOLE_NUM(x) (FLOAT_EQUAL(ceilf(x),(x)) || FLOAT_EQUAL(floorf(x),(x)))

#define PRINT_BIN(x) for(i=31; i>=0; i--)printf("%d", ((x)>>i)&1);printf("\n");


void my_float(long num){
	int i;
	long *pl;
	float *pf;

	pl = &num;
	pf = pl;

	char *ans_str = malloc(32);
	IS_WHOLE_NUM(LOG_2(*pf)) ? sprintf(ans_str,"about 2^(%.0f)",LOG_2(*pf)):
		sprintf(ans_str, "not an even power of 2");
	printf("%e, which is %s\n", *pf, ans_str);
	PRINT_BIN(num);
}



int main(){

	my_float(0xc235872e);
	/*smallest possible NORMALIZED number (give or take sign)*/
	my_float(0x00800000);
	/*a DENORMALIZED number*/
	my_float(0x00400000);
	/*largest possible DENORMALIZED number*/
	my_float(0x007fffff);
	/*smallest possible DENORMALIZED number (give or take sign)*/
	my_float(0x00000001);

	return 0;
}
