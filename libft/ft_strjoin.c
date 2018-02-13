#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	if (s1 != NULL && s2 != NULL)
	{
		str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (str != NULL)
		{
			ft_strcpy(str, s1);
			ft_strcat(str, s2);
			return (str);
		}
	}
	return (NULL);
}
