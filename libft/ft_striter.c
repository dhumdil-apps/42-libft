#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t i;

	if (s != NULL || f != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f((char *)s + i++);
		}
	}
}
