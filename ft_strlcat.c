/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:19:53 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/06 16:54:26 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	t;
	size_t	retval;

	i = 0;
	t = 0;
	if (ft_strlen(dest) > size)
		retval = ft_strlen(src) + size;
	else
		retval = ft_strlen(src) + ft_strlen(dest);
	while (dest[i])
		i++;
	while ((i + 1) < size && src[t])
		dest[i++] = src[t++];
	dest[i] = 0;
	return (retval);
}

/*#include <stdio.h>
#include <bsd/string.h>

//compile : cc -Wall -Wextra -Werror ft_strlcat.c ft_strlen.c -lbsd

int	main(void)
{
	char	dest[30] = "Rat";
	char	dest_2[30] = "Rat";
	char	src[30] = "Ball";
	size_t	size = 15151551;

	printf("ft_strlcat = %zu\n", ft_strlcat(dest, src, size));
	printf("dest = %s\n", dest);
	printf("strlcat = %zu\n", strlcat(dest_2, src, size));
	printf("dest_2 = %s\n", dest_2);
}*/
