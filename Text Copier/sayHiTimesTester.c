#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <assert.h>



uint64_t sayHiTimes(uint64_t x);

int main() {

	uint64_t num;

	printf("Enter a number: ");
	scanf("%lld", &num);

	sayHiTimes(num);

	assert(sayHiTimes(num) == 3);


}