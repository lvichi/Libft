/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:26:11 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/12 18:58:17 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = (*lst);
	while (last->next)
		last = last->next;
	last->next = new;
}

/*#include <stdio.h>

int	main(void)
{
	char	content1[30] = "Round a round";
	char	content2[30] = "Last";
	t_list	*lst;

	lst = ft_lstnew(content1);
	ft_lstadd_back(&lst, ft_lstnew(content2));
	while (lst->next)
	{
		printf("lst.content: %s\n", (char *)lst->content);
		printf("lst.next: %p\n", lst->next);
		lst = lst->next;
	}
	printf("lst.content: %s\n", (char *)lst->content);
	printf("lst.next: %p\n", lst->next);
	free(lst);
}*/
