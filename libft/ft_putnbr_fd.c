#include "libft.h"

static int	init(int nb, int *i, int *n)
{
	*i = 0;
	*n = 0;
	if (nb < 0)
	{
		*n += 1;
	}
	while (nb)
	{
		nb /= 10;
		*n += 1;
	}
	return (*n + 1);
}

void		ft_putnbr_fd(int nb, int fd)
{
	int i;
	int n;
	char s[init(nb, &i, &n)];

	if (nb < 0)
	{
		s[0] = '-';
	}
	while (nb)
	{
		s[n - i++] = '0' + (nb % 10);
		nb /= 10;
	}
	ft_putstr_fd(s, fd);
}
