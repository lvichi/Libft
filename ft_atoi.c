/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:11:13 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/06 22:31:21 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	long	n;
	int		i;
	int		negative;

	n = 0;
	i = 0;
	negative = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			negative = -1;
		i++;
	}
	while (nptr[i])
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
			n = (n * 10) + (nptr[i] - 48);
		else
			break ;
		i++;
	}
	return (n * negative);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	nptr[30] = "1234o98";

	printf("ft_atoi: %i\n", ft_atoi(nptr));
	printf("atoi: %i\n", atoi(nptr));
}*/