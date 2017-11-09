#include <stdio.h>

/* comments!   first pass at converting celsius to fahrenheit in a loop.
*/

int main()

{
	int fahr, celsius;
	int start, stop, step;

	start = 0;
	stop = 300;
	step = 20;

	fahr = start;

	while (fahr <= stop) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}

}