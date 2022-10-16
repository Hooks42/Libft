/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hook <hook@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:37:42 by ceatgie           #+#    #+#             */
/*   Updated: 2021/12/02 07:49:09 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		k;
	size_t		sizemax;

	i = 0;
	k = 0;
	if (dstsize == 0 || dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (dst[k])
		k++;
	sizemax = dstsize - 1;
	while (src[i] && (k + i) < sizemax)
	{
		dst[i + k] = src[i];
		i++;
	}
	dst[i + k] = 0;
	i = 0;
	while (src[i])
		i++;
	return (i + k);
}
