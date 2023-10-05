/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:31:57 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/05 14:36:46 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <unistd.h>

int	main(void)
{
	char	c;
	char	*str;

	c = ' ';
	str = malloc(30);
	str[0] = 'L';
	str[1] = 'e';
	str[2] = 'o';
	str[3] = 'n';
	str[4] = 'a';
	str[5] = 'r';
	str[6] = 'd';
	str[7] = 'o';
	printf("Char : %c\n", c);
	printf("ft_isalpha : %d\n", ft_isalpha(c));
	printf("ft_isdigit : %d\n", ft_isdigit(c));
	printf("ft_isalnum : %d\n", ft_isalnum(c));
	printf("ft_isascii : %d\n", ft_isascii(c));
	printf("ft_isprint : %d\n", ft_isprint(c));
	printf("%s\n", str);
	printf("ft_strlen : %zu\n", ft_strlen(str));
	printf("%s\n", str);
	printf("ft_memset : %s\n", (char *)ft_memset(str, 'X', 5));
	ft_bzero(str, 5);
	printf("ft_bzero : %s\n", str);
	printf("\nEND\n");
	free(str);
	return (0);
}
