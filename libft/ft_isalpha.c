#include "libft.h"

int	ft_isalpha(int c)
{
	if (ft_is_lower(c) || ft_is_upper(c))
	{
		return (1);
	}
	return (0);
}
