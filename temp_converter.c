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

	fahr = start;  /* NB - farh REMAINS float type, even though start is int type.*/

	printf("\nFahr\tCelsius\n");
	printf("---------------\n");

	while (fahr <= stop) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}


	start = 0;
	stop = 100;
	step = 10;

	celsius = start;

	printf("\nCelius\tFahrenheit\n");
	printf("---------------\n");

		while (celsius <= stop) {
		fahr = (celsius+32) * (9.0/5.0);
		printf("%4.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	int fh;

	printf("\nFahr\tCelsius\n");
	printf("---------------\n");

	for (fh = 0; fh <= 300; fh = fh + 20)
		printf("%3d \t%6.1f\n", fh, (5.0/9.0) * (fh-32));

	printf("\n\n");

}