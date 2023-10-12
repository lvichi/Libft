/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:46:18 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/12 17:10:53 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	char	content1[30] = "Round a round";
	char	content2[30] = "First";
	t_list	*lst;

	lst = ft_lstnew(content1);
	ft_lstadd_front(&lst, ft_lstnew(content2));
	printf("size of lst: %d\n", ft_lstsize(lst));
}*/