/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:12:57 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/06 22:08:43 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!little[0])
		return ((char *)big);
	while (i <= (len - ft_strlen(little)) && big[i])
	{
		if (!ft_strncmp(&big[i], little, ft_strlen(little)))
		{
			if (len < ft_strlen(little))
				return (0);
			else
				return (&((char *)big)[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	big[40] = "I'm the master of the universe";
	char	little[40] = "master";
	size_t	len = 5;

	printf("ft_strnstr: %s\n", ft_strnstr(big, little, len));
	printf("strnstr: %s\n", strnstr(big, little, len));
}*/