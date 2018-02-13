#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s != NULL)
	{
		i = 0;
		str = ft_strnew(len);
		if (str != NULL)
		{
			while (len - i)
			{
				str[i] = s[start + i];
				i++;
			}
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
