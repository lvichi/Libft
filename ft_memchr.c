/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skinners77 <lvichi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:08:24 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/11 16:08:27 by skinners77       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((char *)s)[i]);
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s[30] = "Sweet home alabama";
	int		c = 104; //char 'h'
	size_t	n = 10;

	printf("ft_memchr: %s\n", (char *)ft_memchr(s, c, n));
	printf("memchr: %s\n", (char *)memchr(s, c, n));
}*/
