/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_recursive.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:12:32 by galambey          #+#    #+#             */
/*   Updated: 2023/02/10 10:46:47 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int	n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	if (n > 9)
	{
		if (n / 10 < 10)
			ft_putchar(n / 10 + 48);
		else
			ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	ft_putnbr(0);
	ft_putchar(' ');
	ft_putnbr(1);
	ft_putchar(' ');
	ft_putnbr(-1);
	ft_putchar(' ');
	ft_putnbr(10);
	ft_putchar(' ');
	ft_putnbr(2147483647);
	ft_putchar(' ');
	ft_putnbr(-2147483648);
	ft_putchar(' ');
	ft_putnbr(100000000);
	ft_putchar(' ');
	ft_putnbr(99);
}
