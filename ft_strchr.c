/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:15:01 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/06 19:06:55 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] || (unsigned char)c == '\0')
		if (s[i++] == (unsigned char)c)
			return (&((char *)s)[i - 1]);
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char	s[30] = "Born to be wild";
	char	c = 't';

	printf("ft_strchr: %s\n", ft_strchr(s, c));
	printf("strchr: %s\n", strchr(s, c));
}*/