/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 15:23:53 by grass-kw          #+#    #+#             */
/*   Updated: 2014/02/07 15:23:57 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int		ft_count_word(char const *s, char c);

int		ft_count_word(char const *s, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		i++;
	}
	return (word);
}

char	**ft_strsplit(char const *s, char c)
{
	int				i;
	int				j;
	char			**tab;
	unsigned int	start;
	int				nb_word;

	i = 0;
	j = 0;
	nb_word = ft_count_word(s, c);
	tab = (char **)malloc(sizeof(char *) * (nb_word) + 1);
	tab[nb_word + 1] = '\0';
	if (tab == NULL)
		return (NULL);
	while (s[i] && j < nb_word)
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			tab[j] = ft_strsub(s, start, i - start);
			j++;
		}
		if (s[i])
			i++;
	}
	return (tab);
}
