/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:44:31 by mhassani          #+#    #+#             */
/*   Updated: 2022/11/09 18:44:36 by mhassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			n++;
		}
	}
	return (n);
}

static int	word_len(char const *s, char c, int i)
{
	int	wc;

	wc = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		wc++;
	}
	return (wc);
}

static char	**fill_array(char **tab, char const *s, char c, int i)
{
	int	j;

	j = 0;
	while (*s)
	{
		i = 0;
		if (*s != c)
		{
			tab[j] = (char *)malloc((word_len(s, c, 0) + 1) * sizeof(char));
			if (!tab[j])
				return (NULL);
			while (*s && *s != c)
			{
				tab[j][i] = *s;
				s++;
				i++;
			}
			tab[j][i] = '\0';
			j++;
		}
		else
			s++;
	}
	tab[j] = NULL;
	return (tab);
}

//wc :<<words count>>
char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc((num_words(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	fill_array(tab, s, c, 0);
	return (tab);
}

// int main()
// {   //test of num_words;
//     // int res = num_words("              hello     world       ", ' ');
//     // printf("%d", res);

// 		//test of word_len;
//     // int res = word_len("hello   gfhfgh  /", ' ', 0);
//     // printf("%d\n", res);

// 		// test of split;
//     int i = 0;
//     char **sp = ft_split("          one           two          ", ' ');
//     while(sp[i])
//     {
//         printf("%s\n", sp[i]);
//         i++;
//     }
// }