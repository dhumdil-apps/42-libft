#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	n;
	char	*s;

	if (s != NULL && f != NULL)
	{
		i = 0;
		n = ft_strlen(s);
		s = (char *)malloc((n + 1) * sizeof(char));

		if (s != NULL)
		{
			while (s[i] != '\0')
			{
				s[i] = f(s[i]);
				i++;
			}
			s[i] = '\0';
			return (s);
		}
	}
	return (NULL);
}
