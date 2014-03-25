/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 12:32:27 by grass-kw          #+#    #+#             */
/*   Updated: 2013/11/29 18:35:15 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	verif;

	verif = (char) c;
	while (*s != verif && *s != '\0')
		s++;
	if (*s == verif)
		return ((char *)s);
	return (NULL);
}
