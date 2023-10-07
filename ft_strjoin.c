/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:55:26 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/07 14:22:55 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;

	size = (ft_strlen(s1) + ft_strlen(s2) + 1);
	str = (char *)malloc(size);
	if (!str)
		return (NULL);
	str[0] = '\0';
	ft_strlcat(str, s1, size);
	ft_strlcat(str, s2, size);
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[50] = "Leonardo";
	char	s2[50] = " Vichi";
	char	*str;
	
	str = ft_strjoin(s1, s2);
	printf("ft_strjoin: %s\n", str);
	free(str);
}*/