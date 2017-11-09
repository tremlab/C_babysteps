#include <stdio.h>

/* comments!   second pass at converting celsius to fahrenheit in a loop. -- floats
*/

int main()

{
	float fahr, celsius;
	int start, stop, step;

	start = 0;
	stop = 300;
	step = 20;

	fahr = start;

	while (fahr <= stop) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

}