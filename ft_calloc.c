/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:35:08 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/06 23:05:39 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	ret = malloc(nmemb * size);
	if (!ret)
		return (NULL);
	if (ret)
		ft_bzero(ret, (size * nmemb));
	return (ret);
}

/*#include <stdio.h>

int	main(void)
{
	size_t	nmemb;
	size_t	size;
	void	*ret1;
	void	*ret2;


	nmemb = 10000000;
	size = 10000000;
	ret1 = ft_calloc(nmemb, size);
	ret2 = calloc(nmemb, size);
	printf("ft_calloc: %s\n", (char *)ret1);
	printf("calloc: %s\n", (char *)ret2);
	free(ret1);
	free(ret2);
}*/