/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:44:17 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/14 15:35:46 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_negative(long *i)
{
	int	negative;

	negative = 0;
	if (*i < 0)
	{
		*i = *i * -1;
		negative = -1;
	}
	return (negative);
}

static int	ft_size(long i)
{
	int	size;

	size = 0;
	if (i == 0)
		return (1);
	while (i)
	{
		i = i / 10;
		size++;
	}
	return (size);
}

static int	ft_pow(int n, int p)
{
	int	n_original;

	n_original = n;
	if (p < 0)
		return (1);
	while (p--)
	{
		n = n * n_original;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	number;
	int		negative;
	int		size;
	int		i;

	number = n;
	size = ft_size(number);
	negative = ft_negative(&number);
	res = (char *)malloc(sizeof(char) * (size - negative + 1));
	if (!res)
		return (0);
	i = 0;
	if (negative)
		res[i++] = '-';
	while (size--)
	{
		res[i++] = number / ft_pow(10, size - 1) + '0';
		number = number - (res[i - 1] - '0') * ft_pow(10, size - 1);
	}
	res[i] = 0;
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	int		i = 2147483647;
	char	*n;
	
	n = ft_itoa(i);
	printf("%s\n", n);
	free (n);
}*/