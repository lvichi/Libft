/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:28:20 by lvichi            #+#    #+#             */
/*   Updated: 2023/10/10 21:14:43 by lvichi           ###   ########.fr       */
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

int	ft_get_size(char const *s, char c, int index)
{
	size_t	i;
	size_t	word_flag;
	int		words;
	int		size;

	words = 0;
	i = 0;
	word_flag = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_flag = 1;
			if (words == index)
				size++;
		}
		if (s[i++] == c && word_flag)
		{
			words++;
			word_flag = 0;
		}
	}
	return (size);
}

char	*ft_get_word(char const *s, size_t index, char *word, char c)
{
	size_t	word_flag;
	size_t	i;
	size_t	t;
	size_t	words;

	word_flag = 0;
	i = 0;
	t = 0;
	words = 0;
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

void	ft_free(int i, char **words)
{
	while (i > 0)
		free(words[--i]);
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		w_count;
	int		i;

	w_count = ft_count_words(s, c);
	words = (char **)malloc(sizeof(char *) * (w_count + 1));
	if (!words)
		return (NULL);
	i = 0;
	while (i < w_count)
	{
		words[i] = (char *)malloc(sizeof(char) * (ft_get_size(s, c, i) + 1));
		if (!words[i])
		{
			ft_free(i, words);
			return (NULL);
		}
		words[i][0] = 0;
		words[i] = ft_get_word(s, i, words[i], c);
		i++;
	}
	words[i] = 0;
	return (words);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s = "hello!";
	char	c = ' ';
	char	**words;
	size_t	i;

	i = 0;
	words = ft_split(s, c);
	printf("\n");
	while (words[i])
	{
		printf("word[%zu]: %s\n", i, words[i]);
		free(words[i]);
		i++;
	}
	free(words);
}*/
