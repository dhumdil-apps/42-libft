#include "../libft/libft.h"

#define KRED  "\x1B[31m"
#define KBLU  "\x1B[34m"
#define N 255

int test(int c)
{
	if (ft_isascii(c) && isascii(c))
	{
		return (1);
	}
	if (!ft_isascii(c) && !isascii(c))
	{
		return (1);
	}
	return (0);
}

int main()
{
	int i = 0;
	int err = 0;

	while (N - i)
	{
		if (!test(i))
		{
			printf(KRED "Test %s%d: Error!\n", ((i + 1 < 100) ? ("  ") : ("")), (i + 1));
			err = 1;
		}
		i++;
	}

	if (!err)
	{
		printf(KBLU "Ok - all tests passed successfully.\n");
	}

	return (0);
}
