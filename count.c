#include <stdio.h>



int main()
{
	
	long nc;
	nc = 0;

	while (getchar() != EOF) {
		printf("%.0ld\n", nc); 
		++nc;
	}

	printf("final:  %ld\n", nc);
	return 0;
}


// int main()
// {
// 	double nc;

// 	for (nc = 0; getchar() != EOF; nc++)
// 		printf("%.0f\n", nc);  
// 	printf("final count: %.0f\n", nc);
// }



/* below, trying to write code that would print each letter and the current count so I could watch each increment.  not working yet.  :P
*/


// int main()
// {
	
// 	long nc;
// 	int l;

// 	nc = 0;
// 	l = getchar();
// 	printf("word = %i\n", l);

// 	while ((l = getchar()) != EOF)
// 		putchar(l);
// 		printf("count = %ld\n", nc);
// 		++nc;

// 	printf("final:  %ld\n", nc);
// 	return 0;
// }

