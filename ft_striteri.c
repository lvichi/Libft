/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:25:32 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/11 17:35:04 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = -1;
	while (s[++i])
		f(i, &s[i]);
}

/*#include <stdio.h>

void	ft_sum(unsigned int i, char *c)
{
	*c = *c + i;
}

int	main(void)
{
	char	s[30] = "123456";

	ft_striteri(s, &ft_sum);
	printf("%s\n", s);
}*/