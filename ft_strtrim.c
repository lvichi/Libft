/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:11:28 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/14 15:37:09 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_begin(char const *s1, char const *set)
{
	int	i;
	int	t;
	int	flag;

	i = -1;
	while (s1[++i])
	{
		t = -1;
		flag = 1;
		while (set[++t])
			if (s1[i] == set[t])
				flag = 0;
		if (flag)
			break ;
	}
	return (i);
}

static int	ft_end(char const *s1, char const *set)
{
	int	i;
	int	t;
	int	flag;

	i = ft_strlen(s1);
	while (i-- > 0)
	{
		t = -1;
		flag = 1;
		while (set[++t])
			if (s1[i] == set[t])
				flag = 0;
		if (flag)
			break ;
	}
	return (i + 1);
}

static void	ft_fill(char const *s1, char *str, int begin, int end)
{
	int	i;

	i = 0;
	while (begin < end)
		str[i++] = s1[begin++];
	str[i] = 0;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin;
	int		end;
	char	*str;

	begin = ft_begin(s1, set);
	end = ft_end(s1, set);
	if (begin > end)
		begin = end;
	str = (char *)malloc(sizeof(char) * (end - begin + 1));
	if (!str)
		return (NULL);
	str[0] = 0;
	ft_fill(s1, str, begin, end);
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[30] = ",,..,,abcd,.t..";
	char	*new_str;

	new_str = ft_strtrim(str, ".,");
	printf("ft_strtrim: %s\n", new_str);
	free(new_str);
}*/