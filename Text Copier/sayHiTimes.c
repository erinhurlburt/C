#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>


uint64_t sayHiTimes (uint64_t x) {
	int count = 0;
	int i;


	for(i = 0; i < x; i++) {
		printf("Hi \n");
		count++;
	}

	printf("Count: %d \n", count);
	return count;

}