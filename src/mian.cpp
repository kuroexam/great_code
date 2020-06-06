#include <stdio.h>

int main() 
{
	char str[1000];
	int mojisuu = 0;

	while (mojisuu ++ < 1000)
	{
		sprintf_s(str, "%d", mojisuu),
		printf("%s, ", mojisuu % 15 ? mojisuu % 3 ? mojisuu % 5 ? str : "Buzz" : "Fizz" : "FizzBuzz");
	}
	getchar();
	return 0;
}
