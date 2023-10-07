/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:21:40 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/07 13:11:24 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (ft_strlen(s) <= start)
	{
		start = ft_strlen(s);
		len = 0;
	}
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[start] && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char			s[30] = "Weirdyellowmonkey";
	char			*str;
	unsigned int	start = 5;
	size_t			len = 6;

	str = ft_substr(s, start, len);
	printf("ft_substr: %s\n", str);
	free(str);
}*/
