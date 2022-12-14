/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hook <hook@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:06:55 by ceatgie           #+#    #+#             */
/*   Updated: 2021/12/06 08:06:23 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] == ' ' || str[cpt] == '\f'
		|| str[cpt] == '\t' || str[cpt] == '\n'
		|| str[cpt] == '\r' || str[cpt] == '\v')
		cpt++;
	return (cpt);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		cpt;
	int		sign_cpt;
	int		atoi_var;

	sign = 1;
	sign_cpt = 0;
	atoi_var = 0;
	cpt = ft_isspace(str);
	if (str[cpt] == '-' || str[cpt] == '+')
		if (str[cpt++] == '-')
			sign *= -1;
	while (str[cpt] >= '0' && str[cpt] <= '9')
	{
		atoi_var *= 10;
		atoi_var += str[cpt] - '0';
		cpt++;
	}
	return (atoi_var *= sign);
}
