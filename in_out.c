#include <stdio.h>
/*
int main()
{
	int c;

	// below asks the terminal for text input -- zero to many characters e.g monkey
	c = getchar();  

	while (c != EOF) {
		putchar(c);
		printf("\n");
		//  below advances one letter OF THE GIVEN STRING??? e.g. m, then o, then n...
		//  how can the same method do both these things?
		c = getchar();
	}
}
*/




int main()
{
	int c;

	while ((c = getchar()) != EOF) {
		//  putchar DOES require an argument.
		putchar(c);
	}
}



// int main()
// {
// 	int word, c;


// 	word = getchar(); 
// 	// nope - the below fails :( 
// 	// error: too many arguments to function call, expected 0, have 1
//                 // c = getchar(word);
// 	c = getchar(word); 

// 	while (c != EOF) {
// 		putchar(c);
// 		printf("\n");
// 		c = getchar(word);
// 	}
// }

