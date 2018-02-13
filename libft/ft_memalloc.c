#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	if ((mem = malloc(size)) != NULL)
	{
		ft_bzero(mem, size);
		return (mem);
	}
	return (NULL);
}
