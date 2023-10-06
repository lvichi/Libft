/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:02:17 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/06 17:09:28 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	c = 'A';
	printf("ft_tolower: %c\n", ft_tolower(c));
	printf("tolower: %c\n", tolower(c));
}*/
