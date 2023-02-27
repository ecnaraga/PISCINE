/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:43:31 by galambey          #+#    #+#             */
/*   Updated: 2023/02/14 11:35:43 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(unsigned int n)
{
	if (n > 9)
	{
		if (n / 10 <= 9)
			ft_putchar((n / 10) + 48);
		else
			ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + 48);
}

unsigned int	ft_first_comb(int n)
{
	unsigned int	nb;
	unsigned int	d;

	nb = 0;
	d = 10;

	while (n >= 2)
	{
		nb = (nb * d) + (nb % d) + 1;
		d = d * 10;
		n -= 1;
	}
	ft_putchar(0);
	if (n >= 2)
		ft_putnbr(nb);
	return (nb);
}

unsigned int	ft_last_comb(int n)
{
	unsigned int	nb;
	unsigned int	i;

	nb = 0;
	i = 9;
	while (n > 0)
	{
		nb = nb * 10 + i;
	}
	return (nb);
}

void	ft_print_combn(int n)
{
	unsigned int	nb;
	unsigned int	d;
	unsigned int	i;
	
	ft_first_comb(n);
	while (nb <= ft_last_comb(n))
	{
		i = 0;
		d = 10;
		while (nb % d == 9 - i)
		{
			d = d * 10;
			i++;
		}
		while (d > 10)
		{
			nb = nb * 10 + ((nb % 10) + 1);
			d = d / 10;
		}
		ft_putnbr(nb);
		nb++;
	}
}
