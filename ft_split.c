/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:28:20 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/10 14:50:10 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	word_flag;

	words = 0;
	i = 0;
	word_flag = 0;
	while (s[i])
	{
		if (s[i] != c)
			word_flag = 1;
		if (s[i] == c && word_flag)
		{
			words++;
			word_flag = 0;
		}
		i++;
	}
	if (word_flag)
		words++;
	return (words);
}

size_t	*ft_get_size(char const *s, size_t w_count, char c)
{
	size_t	i;
	size_t	word_flag;
	size_t	words;
	size_t	*w_size;

	words = 0;
	i = 0;
	word_flag = 0;
	w_size = (size_t *)malloc(sizeof(size_t) * w_count);
	while (w_count--)
		w_size[w_count] = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_flag = 1;
			w_size[words]++;
		}
		if (s[i++] == c && word_flag)
		{
			words++;
			word_flag = 0;
		}
	}
	return (w_size);
}

char	*ft_get_word(char const *s, size_t index, size_t *w_size, char c)
{
	char	*word;
	size_t	word_flag;
	size_t	i;
	size_t	t;
	size_t	words;

	word_flag = 0;
	i = 0;
	t = 0;
	words = 0;
	word = (char *)malloc(sizeof(char) * (w_size[index] + 1));
	while (s[i])
	{
		if (s[i] != c)
			word_flag = 1;
		if (s[i] != c && words == index)
			word[t++] = s[i];
		if (s[i++] == c && word_flag)
		{
			words++;
			word_flag = 0;
		}
	}
	word[t] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	w_count;
	size_t	i;
	size_t	*w_size;

	w_count = ft_count_words(s, c);
	words = (char **)malloc(sizeof(char *) * (w_count + 1));
	if (!words)
		return (NULL);
	w_size = ft_get_size(s, w_count, c); 
	if (!w_size)
		return (NULL);
	i = 0;
	while (i < w_count)
	{
		words[i] = ft_get_word(s, i, w_size, c);
		if (!words[i])
			return (NULL);
		i++;
	}
	words[i] = 0;
	free(w_size);
	return (words);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s = "                  olol  haw    jota";
	char	c = ' ';
	char	**words;
	size_t	i;

	i = 0;
	words = ft_split(s, c);
	while (words[i])
	{
		printf("word[%zu]: %s\n", i, words[i]);
		free(words[i]);
		i++;
	}
	free(words);
}*/
