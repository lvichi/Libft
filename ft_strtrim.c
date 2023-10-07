/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:11:28 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/07 19:25:07 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_pos(char const *s1, char const *set)
{
	int	begin_flag;
	int	i;
	int	t;

	begin_flag = 1;
	i = -1;
	while (s1[++i] && begin_flag)
	{
		t = 0;
		while (set[t])
		{
			begin_flag = 0;
			if (s1[i] == set[t])
			{
				begin_flag = 1;
				break ;
			}
			t++;
		}
		if (!begin_flag)
			return ((size_t)i);
	}
	if (!s1[i])
		return ((size_t)i);
	return (0);
}

size_t	ft_end(char const *s1, char const *set)
{
	char	*rev_s1;
	size_t	i;
	size_t	t;
	size_t	end;

	i = 0;
	t = (ft_strlen(s1) - 1);
	rev_s1 = (char *)malloc((ft_strlen(s1) + 1));
	if (!rev_s1)
		return (0);
	while (i < ft_strlen(s1))
		rev_s1[i++] = s1[t--];
	rev_s1[i] = 0;
	end = ft_pos(rev_s1, set);
	free(rev_s1);
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	size_t	size;
	size_t	i;
	char	*str;

	i = 0;
	begin = ft_pos(s1, set);
	end = ft_end(s1, set);
	if (begin == ft_strlen(s1) && !set[0])
	{
		begin = 0;
		size = ft_strlen(s1);
	}
	else if (begin == ft_strlen(s1))
		size = 0;
	else
		size = ft_strlen(s1) - begin - end;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	while (i < size)
		str[i++] = s1[begin++];
	str[i] = 0;
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[30] = "abcd";
	char	*trimed_str;

	trimed_str = ft_strtrim(str, "");
	printf("ft_strtrim: %s\n", trimed_str);
	free(trimed_str);
}

	printf("begin: %zu\n", begin);
	printf("end: %zu\n", end);
	printf("size: %zu\n", size);

	if (begin == (ft_strlen(s1)) && set[0])
		size = 0;
	if (size > ft_strlen(s1))
		size = ft_strlen(s1);
*/