/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 13:17:38 by grass-kw          #+#    #+#             */
/*   Updated: 2013/12/03 15:26:18 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	verif;
	int				i;

	i = 0;
	ptr = (unsigned char*)s;
	verif = (unsigned char)c;
	while (n != 0)
	{
		if (ptr[i] == verif)
			return (ptr + i);
		i++;
		n--;
	}
	return (NULL);
}
