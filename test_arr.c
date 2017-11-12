#include <stdio.h>
#include <stdlib.h>
struct profile
{
	int len;
	char description[0];
};
int main(){
	struct profile * jess= (struct profile *) malloc (sizeof (struct profile) + 260);
	printf("size = %d\n", sizeof(*jess));
	jess->len=260;
	jess->description[0]='h';
	jess->description[1]='e';
	jess->description[2]='y';
	jess->description[3]='\0';
	printf("%s\n", jess->description);
	return 0;
}
