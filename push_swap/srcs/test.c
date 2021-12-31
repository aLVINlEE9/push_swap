#include <unistd.h>
#include <string.h>

int main()
{
	char *str = "abcdef";

	write(1, str, (int)strlen(str));
}