#include "libft.h"

static void	init_vars(unsigned int *i, int *is_minus, int *value)
{
	*i = 0;
	*is_minus = 0;
	*value = 0;
}

static void	jump_over_whitespace(const char *s, unsigned int *i, int *is_minus)
{
	while (ft_is_whitespace(s[*i]))
	{
		*i = *i + 1;
	}

	if (s[*i] == '+')
	{
		*i = *i + 1;
	}
	else if (s[*i] == '-')
	{
		*is_minus = 1;
		*i = *i + 1;
	}
}

static void	try_atoi(const char *s, unsigned int *i, int *is_minus, int *value)
{
	while (ft_isdigit(s[*i]))
	{
		*value = (*value * 10) + (s[*i] - '0');
		*i = *i + 1;
	}

	if (*is_minus)
	{
		*value = -(*value);
	}
}

int			ft_atoi(const char *s)
{
	unsigned int i;
	int is_minus;
	int value;

	if (s == NULL)
	{
		return (0);
	}
	init_vars(&i, &is_minus, &value);
	jump_over_whitespace(s, &i, &is_minus);
	try_atoi(s, &i, &is_minus, &value);
	return (value);
}
