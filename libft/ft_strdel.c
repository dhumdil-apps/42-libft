#include "libft.h"

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		ft_memdel((void**)as);
		as = NULL;
	}
}
