/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto <pneto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:22:48 by pneto             #+#    #+#             */
/*   Updated: 2025/12/09 15:54:18 by pneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			words++;
		if (i > 0 && s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

static char	*get_word(char const *s, char c, int *i)
{
	char	*word;
	int		len;
	int		j;

	len = 0;
	while (s[*i + len] && s[*i + len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (len--)
		word[j++] = s[(*i)++];
	word[j] = '\0';
	return (word);
}

static char	*free_words(char *s)
{
	if (!s)
	{
		free(s);
		return (NULL);
	}
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] && s[i] == c)
			i++;
		split[j] = get_word(s, c, &i);
		if (free_words(split[j]) == NULL)
			return (NULL);
		j++;
	}
	split[j] = NULL;
	return (split);
}
/*int main()
{
	char	**result;
	int	i;
	
	result = ft_split("Welcome to the Monster Ball", ' ');
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}*/