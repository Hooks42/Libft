/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 08:54:43 by ceatgie           #+#    #+#             */
/*   Updated: 2021/12/02 09:15:28 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*adress_recup;

	i = 0;
	adress_recup = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			adress_recup = (char *)&s[i];
		}
		i++;
	}
	if ((char)c == '\0')
		adress_recup = (char *)&s[i];
	return (adress_recup);
}
