/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:25:34 by grass-kw          #+#    #+#             */
/*   Updated: 2013/11/29 18:25:33 by grass-kw         ###   ########.fr       */
/*   Updated: 2013/11/22 17:04:38 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char		*tmp_dest;
	unsigned char		*tmp_src;
	unsigned char		*tmp;
	unsigned int		i;

	tmp_dest = (unsigned char *)s1;
	tmp_src = (unsigned char *)s2;
	tmp = malloc(sizeof(*s2) * (n));
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		tmp[i] = tmp_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		tmp_dest[i] = tmp[i];
		i++;
	}
	return (s1);
}
