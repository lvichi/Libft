/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:18:07 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/12 22:04:12 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*#include <stdio.h>

static void	sum(void *l)
{
	char	*new_str;
	
	new_str = ft_strjoin((char *)l, " !");
	l = new_str;
}

static void	printlst(t_list *lst)
{
	while(lst)
	{
		printf("lst.content: %s\n", (char *)lst->content);
		lst = lst->next;
	}
}

static void	ft_del(void *content)
{
	free(content);
}

int main(void)
{
	char	*content1;
	char	*content2;
	t_list	**lst;

	content1 = ft_strdup("First");
	content2 = ft_strdup("Second");

	lst = (t_list **)malloc(sizeof(t_list *));
	*lst = ft_lstnew(content1);
	ft_lstadd_back(lst, ft_lstnew(content2));
	
	printlst(*lst);
	
	ft_lstiter(*lst, &sum);

	printlst(*lst);

	ft_lstclear(lst, &ft_del);
	free(lst);
}*/