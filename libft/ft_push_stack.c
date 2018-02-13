#include "libft.h"

void	ft_push_stack(char *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	s[i++] = c;
	s[i] = '\0';
}
