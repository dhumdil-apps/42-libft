#include "libft.h"

static int	count_length(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char *s;
	int i;

	i = count_length(n);
	s = ft_strnew(i);
	while (n)
	{
		s[--i] = '0' + (n % 10);
		n /= 10;
	}
	if (i)
	{
		s[--i] = '-';
	}
	return (s);
}
