#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *l;

	if (lst != NULL && f != NULL)
	{
		l = lst;
		while (l)
		{
			f(l);
			l = l->next;
		}
	}
}
