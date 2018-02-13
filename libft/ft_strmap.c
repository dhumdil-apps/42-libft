#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	n;
	char	*str;

	if (s != NULL && f != NULL)
	{
		i = 0;
		n = ft_strlen(s);

		if ((str = (char *)malloc((n + 1) * sizeof(char))) != NULL)
		{
			while (s[i] != '\0')
			{
				str[i] = f(s[i]);
				i++;
			}
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
