/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:34:18 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/12 21:04:21 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(temp, del);
	}
}

/*#include <stdio.h>

static void	ft_del(void *content)
{
	free(content);
}

int	main(void)
{
	char	*content1;
	char	*content2;
	t_list	**lst;

	content1 = ft_strdup("First");
	content2 = ft_strdup("Second");

	lst = (t_list **)malloc(sizeof(t_list *));
	*lst = ft_lstnew(content1);
	ft_lstadd_back(lst, ft_lstnew(content2));
	printf("lst.content: %s\n", (char *)(*lst)->content);
	printf("lst.next: %p\n", (*lst)->next);
	
	ft_lstclear(lst, &ft_del);
	free(lst);
}*/