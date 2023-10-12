/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:50:06 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/12 15:34:04 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	char	content[30] = "Round a round";

	lst = ft_lstnew(content);
	printf("lst.content: %s\n", (char *)lst->content);
	printf("lst.next: %p\n", lst->next);
	free(lst);
}*/