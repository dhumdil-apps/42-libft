#include "libft.h"

static void	count_words(char const *s, char c, int *i, int *n)
{
	size_t	j;
	int		is_word;

	j = 0;
	*i = 0;
	*n = 0;
	is_word = 0;
	while (s[j] != '\0')
	{
		if (s[j++] == c)
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			is_word = 1;
			*n = *n + 1;
		}
	}
}

static void	get_word(char const *s, char c, size_t *j, size_t *k)
{
	while (s[*j] == c)
	{
		*j = *j + 1;
	}
	*k = *j;
	while (s[*j] != c && s[*j] != '\0')
	{
		*j = *j + 1;
	}
}

static void	fill_string(char *str, char const *s, size_t j, size_t n)
{
	size_t	i;

	i = 0;
	while (n - j - i)
	{
		str[i] = s[j + i];
		i++;
	}
}

char		**ft_strsplit(char const *s, char c)
{
	char	**m;
	int		i;
	int		n;
	size_t	j;
	size_t	k;

	if (s != NULL)
	{
		count_words(s, c, &i, &n);
		m = (char **)malloc((n + 1) * sizeof(char *));
		if (m != NULL)
		{
			while (n - i)
			{
				get_word(s, c, &j, &k);
				if ((m[i] = ft_strnew(j - k)) == NULL)
					return (NULL);
				fill_string(m[i], s, k, j);
				i++;
			}
			return (m);
		}
	}
	return (NULL);
}
