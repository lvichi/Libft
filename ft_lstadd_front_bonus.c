/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:58:49 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/12 16:41:42 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*#include <stdio.h>

int	main(void)
{
	char	content1[30] = "Round a round";
	char	content2[30] = "First";
	t_list	*lst;

	lst = ft_lstnew(content1);
	ft_lstadd_front(&lst, ft_lstnew(content2));
	while (lst->next != NULL)
	{
		printf("lst.content: %s\n", (char *)lst->content);
		printf("lst.next: %p\n", lst->next);
		lst = lst->next;
	}
	printf("lst.content: %s\n", (char *)lst->content);
	printf("lst.next: %p\n", lst->next);
	free(lst);
}*/
