/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:00:47 by ceatgie           #+#    #+#             */
/*   Updated: 2021/12/02 09:14:33 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t			i;
	unsigned char	*src;

	src = (unsigned char *)memoryBlock;
	i = 0;
	while (i < size)
	{
		if (src[i] == (unsigned char)searchedChar)
			return (&((void *)src)[i]);
		i++;
	}
	return (NULL);
}
