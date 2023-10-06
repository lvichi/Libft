/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:17:49 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/06 19:38:31 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	z;

	i = 0;
	z = -1;
	while (s[i] && (unsigned char)c != '\0')
		if (s[i++] == (unsigned char)c)
			z = i -1;
	i = 0;
	if ((unsigned char)c == '\0')
	{
		while (s[i])
			i++;
		return (&((char *)s)[i]);
	}
	if (z != -1)
		return (&((char *)s)[z]);
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char	s[30] = "Born to be twild";
	char	c = 't';

	printf("ft_strrchr: %s\n", ft_strrchr(s, c));
	printf("strrchr: %s\n", strrchr(s, c));
}*/