/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hook <hook@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 08:42:28 by ceatgie           #+#    #+#             */
/*   Updated: 2021/11/29 07:27:17 by hook             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size )
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)destination;
	tmp2 = (unsigned char *)source;
	if (!size || destination == source)
		return (destination);
	i = 0;
	if (size == 0)
		return (tmp1);
	while (i < size)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (tmp1);
}
