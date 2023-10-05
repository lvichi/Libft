/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:31:57 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/05 15:44:09 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char	c;
	char	*str;
	char	*str_cpy;

	c = 'A';
	str = (char *)malloc(15);
	str_cpy = (char *)malloc(7);
	strcpy(str, "Leonardo Vichi");
	printf("Char : %c\n", c);
	printf("ft_isalpha : %d\n", ft_isalpha(c));
	printf("ft_isdigit : %d\n", ft_isdigit(c));
	printf("ft_isalnum : %d\n", ft_isalnum(c));
	printf("ft_isascii : %d\n", ft_isascii(c));
	printf("ft_isprint : %d\n", ft_isprint(c));
	printf("%s\n", str);
	printf("ft_strlen : %zu\n", ft_strlen(str));
	printf("%s\n", str);
	printf("ft_memset : %s\n", (char *)ft_memset(str, 'X', 3));
	ft_memcpy(str_cpy, str, 6);
	str_cpy[6] = '\0';
	printf("ft_memcpy : %s\n", str_cpy);
	ft_bzero(str, 5);
	printf("ft_bzero : %s\n", str);
	strcpy(str, "ABCDEF");
	ft_memmove(str_cpy, str, 4);
	printf("ft_memmove : %s", str_cpy);
	printf("\nEND\n");
	free(str);
	free(str_cpy);
	return (0);
}
