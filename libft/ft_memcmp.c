/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:56:20 by grass-kw          #+#    #+#             */
/*   Updated: 2013/11/29 18:27:45 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr;
	char	*str;
	int		i;

	ptr = (char *)s1;
	str = (char *)s2;
	i = 0;
	while (n != 0 && ptr[i] == str[i])
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (ptr[i] - str[i]);
}
