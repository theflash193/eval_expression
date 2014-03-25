/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 13:24:44 by grass-kw          #+#    #+#             */
/*   Updated: 2013/11/29 18:44:11 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	verif;
	int		i;

	verif = (char)c;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (s[i] != verif && i >= 0)
	{
		i--;
	}
	if (s[i] == verif)
		return ((char *)s + i);
	return (NULL);
}
