/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:31:57 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/03 20:40:47 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	c;
	char	*str;

	c = ' ';
	str = "Leonardo Vichi";
	printf("Char : %c\n", c);
	printf("ft_isalpha : %d\n", ft_isalpha(c));
	printf("ft_isdigit : %d\n", ft_isdigit(c));
	printf("ft_isalnum : %d\n", ft_isalnum(c));
	printf("ft_isascii : %d\n", ft_isascii(c));
	printf("ft_isprint : %d\n", ft_isprint(c));
	printf("ft_strlen : %zu\n", ft_strlen(str));
	return (0);
}
