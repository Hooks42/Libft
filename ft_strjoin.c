/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hook <hook@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:11:03 by ceatgie           #+#    #+#             */
/*   Updated: 2021/12/04 13:38:57 by hook             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_fail_parameters(void)
{
	char	*array;

	array = (char *)malloc(sizeof(char) * 1);
	if (!array)
		return (NULL);
	array[0] = '\0';
	return (array);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		i;
	int		j;

	if (!s1)
		return (ft_fail_parameters());
	if (!s2)
		return (ft_strdup(s1));
	tab = malloc(sizeof(char)
			* ((ft_strlen((char *)s1) + ft_strlen((char *)s2))) + 1);
	if (!tab)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
		tab[i] = s1[++j];
	j = 0;
	while (s2[j])
	{
		tab[i] = s2[j];
		i++;
		j++;
	}
	tab[i] = '\0';
	return (tab);
}
