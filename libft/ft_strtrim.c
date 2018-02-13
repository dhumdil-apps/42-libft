#include "libft.h"

static int	is_whitespaces(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
	{
		return (1);
	}
	return (0);
}

static void	jump_over_starting_whitespace(const char *s, size_t *i)
{
	*i = 0;
	while (is_whitespaces(s[*i]))
	{
		*i = *i + 1;
	}
}

static void	jump_over_string(const char *s, size_t *i, size_t *j)
{
	*j = *i;
	while (s[*i] != '\0')
	{
		*i = *i + 1;
	}
}

static void	jump_over_ending_whitespace(const char *s, size_t *i)
{
	*i = *i - 1;
	while (is_whitespaces(s[*i]))
	{
		*i = *i - 1;
	}
	*i = *i + 1;
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	if (s != NULL)
	{
		jump_over_starting_whitespace(s, &i);
		jump_over_string(s, &i, &j);
		jump_over_ending_whitespace(s, &i);
		str = ft_strnew(i - j);
		if (str != NULL)
		{
			k = 0;
			while (j < (i - k))
			{
				str[k] = s[j + k];
				k++;
			}
			str[k] = '\0';
			return (str);
		}
	}
	return (NULL);
}
