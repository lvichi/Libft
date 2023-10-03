/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:31:57 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/03 18:49:20 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	c;

	c = '\n';
	printf("Char : %c\n", c);
	printf("ft_isalpha : %d\n", ft_isalpha(c));
	printf("ft_isdigit : %d\n", ft_isdigit(c));
	printf("ft_isalnum : %d\n", ft_isalnum(c));
	return (0);
}
