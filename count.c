#include <stdio.h>

/*strugging with ob1.  Wrting code to step through the increments of the while loop.
successful!  But still confused. ????*/

int main()
{
	
	long nc;
	int w;

	nc = 0;
	w = getchar();

	/* example did NOT have brackets around the while statement.  Seems you don't need them if only one, 
	but necessary for multiple. */

	while (w != EOF) {
		putchar(w);
		printf("\tcount: %.0ld\n", nc);
		w = getchar(); 
		++nc;
	}

	printf("\tfinal:  %ld\n", nc);
	return 0;
}


// int main()
// {
// 	double nc;

// 	for (nc = 0; getchar() != EOF; nc++)
// 		printf("%.0f\n", nc);  
// 	printf("final count: %.0f\n", nc);
// }





