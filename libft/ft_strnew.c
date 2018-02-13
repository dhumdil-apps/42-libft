#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	s = (char *)malloc((size + 1) * sizeof(char));
	if (s != NULL)
	{
		ft_memset(s, '\0', size + 1);
	}
	return ((char *)s);
}
