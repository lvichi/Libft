/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:43:53 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/06 16:59:35 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	c = '\n';
	printf("ft_toupper = %c\n", ft_toupper(c));
	printf("toupper = %c\n", toupper(c));
}*/
