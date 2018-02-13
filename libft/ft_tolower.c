#include "libft.h"

int		ft_tolower(int c)
{
	if (ft_is_upper(c))
	{
		return (c - 'A' + 'a');
	}
	return (c);
}
