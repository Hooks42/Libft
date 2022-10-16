/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:10:00 by ceatgie           #+#    #+#             */
/*   Updated: 2021/12/02 09:14:48 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_is_negativ(int n, int fd)
{
	int		i;
	char	tab[10];
	long	nb;

	i = 0;
	nb = ((long) n * -1);
	while (nb > 0)
	{
		tab[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	i -= 1;
	ft_putchar_fd('-', fd);
	while (i >= 0)
	{
		ft_putchar_fd(tab[i], fd);
		i--;
	}
}

static void	ft_is_positiv(int n, int fd)
{
	int		i;
	char	tab[10];

	i = 0;
	while (n > 0)
	{
		tab[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		ft_putchar_fd(tab[i], fd);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
		ft_is_negativ(n, fd);
	if (n > 0)
		ft_is_positiv(n, fd);
}
