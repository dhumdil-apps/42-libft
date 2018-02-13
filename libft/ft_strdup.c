#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *str;

	str = (char *)malloc(ft_strlen(s) * sizeof(char) + sizeof(char));
	return (ft_strcpy(str, s));
}
