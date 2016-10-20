#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(void) {

	printf("hello\n");
	printf("hello2\n");
	int i;

	for(i = 0 ; i < 5 ; i++)
	{
		printf("time is running out --> %d \n",i);
		sleep(1);
	}
}
