#include "libft.h"

int		ft_toupper(int c)
{
	if (ft_is_lower(c))
	{
		return (c - 'a' + 'A');
	}
	return (c);
}
