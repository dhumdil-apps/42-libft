#include "libft.h"

int	ft_is_whitespace(char c)
{
	if (c == ' ')
	{
		return (1);
	}
	if (c == '\t')
	{
		return (1);
	}
	if (c == '\n')
	{
		return (1);
	}
	if (c == '\r')
	{
		return (1);
	}
	if (c == '\v')
	{
		return (1);
	}
	if (c == '\f')
	{
		return (1);
	}
	return (0);
}
