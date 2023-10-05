/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:08:20 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/05 15:39:40 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src < dest)
		ft_memcpy(dest, src, n);
	if (src > dest)
		while (i++ < n)
			((char *)dest)[i - 1] = ((char *)src)[i - 1];
	return (dest);
}
