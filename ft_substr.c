/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hook <hook@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:10:19 by ceatgie           #+#    #+#             */
/*   Updated: 2021/12/04 13:42:27 by hook             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fail_start(void)
{
	char	*array;

	array = (char *)malloc(sizeof(char) * 1);
	if (!array)
		return (NULL);
	array[0] = '\0';
	return (array);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*tab;
	size_t		i;
	size_t		strt;

	strt = (size_t)start;
	if (!s)
		return (fail_start());
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (ft_strlen(s) < strt)
		return (fail_start());
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		tab[i] = s[strt];
		i++;
		strt++;
	}
	tab[i] = '\0';
	return (tab);
}
