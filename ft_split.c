/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:28:20 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/07 21:06:23 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_trim(char const *s, char c)
{
	char	*trim_s;
	char	sep[1];
	
	sep[0] = c;
	trim_s = ft_strtrim(s, sep);
	return (trim_s);
}

size_t	ft_count_words(char const *trim_s, char c)
{
	size_t	words;
	size_t	i;
	size_t	word_flag;
	
	words = 0;
	i = 0;
	word_flag = 1;
	if (trim_s[i])
		words = 1;
	while (trim_s[i])
	{
		if (trim_s[i] != c)
			word_flag = 1;
		if (trim_s[i] == c && word_flag)
		{
			words++;
			word_flag = 0;
		}
		i++;
	}
	return (words);
}

size_t	*ft_get_size(char const *trim_s, size_t w_count, char c)
{
	size_t	i;
	size_t	word_flag;
	size_t	words;
	size_t	*w_size;

	words = 0;
	i = 0;
	word_flag = 1;
	w_size = (size_t *)malloc(sizeof(size_t) * w_count);
	while (trim_s[i])
	{
		if (trim_s[i] != c)
		{
			word_flag = 1;
			w_size[words]++;
		}
		if (trim_s[i] == c && word_flag)
		{
			words++;
			word_flag = 0;
		}
		i++;
	}
	return (w_size);
}

char	*ft_get_word(char const *trim_s, size_t index, size_t *w_size, char c)
{
	char	*word;
	size_t	word_flag;
	size_t	i;
	size_t	t;
	size_t	words;

	word_flag = 1;
	i = 0;
	t = 0;
	words = 0;
	word = (char *)malloc(sizeof(char) * (w_size[index] + 1));
	while (trim_s[i])
	{
		if (trim_s[i] != c)
			word_flag = 1;
		if (trim_s[i] != c && words == index)
			word[t++] = trim_s[i];  
		if (trim_s[i] == c && word_flag)
		{
			words++;
			word_flag = 0;
		}
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	*trim_s;
	char	**words;
	size_t	w_count;
	size_t	i;
	size_t	*w_size;

	i = 0;
	trim_s = ft_trim(s, c);
	w_count = ft_count_words(trim_s, c);
	words = (char **)malloc(sizeof(char *) * (w_count + 1));
	w_size = ft_get_size(trim_s, w_count, c); 
	while (i < w_count)
	{
		words[i] = ft_get_word(trim_s, i, w_size, c);
		i++;
	}
	words[i] = 0;
	i = 0;
	free(w_size);
	free(trim_s);
	return (words);
}

int	main(void)
{
	char	s[50] = "...rat..phanter.duck...hamster.";
	char	c = '.';
	char	**words;
	
	words = ft_split(s, c);
	while (words[i])
	{
		printf("word[%zu]: %s\n", i, words[i]);
		free(words[i]);
		i++;
	}
	free(words);
}
