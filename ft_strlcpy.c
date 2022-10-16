/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 08:46:41 by ceatgie           #+#    #+#             */
/*   Updated: 2021/12/02 09:15:13 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	if (len == 0)
		return (srclen);
	if (!dest)
		return (srclen);
	while (src[i] != '\0' && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	if (len > 0)
	{
		if (srclen == 0 || srclen < len)
			dest[i] = '\0';
		else
			dest[i - 1] = '\0';
	}
	return (srclen);
}
