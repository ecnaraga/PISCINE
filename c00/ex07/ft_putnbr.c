/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:41:39 by galambey          #+#    #+#             */
/*   Updated: 2023/02/09 22:02:10 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int	d;
	unsigned int	n;

	n = nb;
	d = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	while (n / d >= 10)
		d = d * 10;
	while (d >= 10)
	{
		ft_putchar((n / d) + 48);
		n = n % d;
		d = d / 10;
	}
	ft_putchar((n % 10) + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
