#include <stdio.h>
#include <string.h>
/**
* main - We are into standard error
* Return: We shal return 1
*/
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar,\
	2015-10-19\n";
	
	size_t len = strlen(message);
	fwrite(message, sizeof(char), len, stderr);
	
	return (1);
}
