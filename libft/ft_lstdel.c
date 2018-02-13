#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*l;
	t_list	*next;

	if (alst != NULL && *alst != NULL)
	{
		l = *alst;
		while (l)
		{
			next = l->next;
			del(l->content, l->content_size);
			free(l);
			l = next;
		}
		*alst = NULL;
	}
}
