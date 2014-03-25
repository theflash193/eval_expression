/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/07 15:28:51 by grass-kw          #+#    #+#             */
/*   Updated: 2014/02/07 15:36:11 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		y;
	int		o;

	i = 0;
	y = 0;
	o = 0;
	s3 = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(*s3));
	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[o] = s1[i];
		i++;
		o++;
	}
	while (s2[y] != '\0')
	{
		s3[o] = s2[y];
		y++;
		o++;
	}
	s3[o] = '\0';
	return (s3);
}
