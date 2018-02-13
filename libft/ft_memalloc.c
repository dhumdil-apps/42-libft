#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	mem = malloc(size);
	if (m == NULL)
	{
		return (NULL);
	}
	ft_bzero(mem, size);
	return (mem);
}
