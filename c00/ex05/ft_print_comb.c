/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:42:22 by galambey          #+#    #+#             */
/*   Updated: 2023/02/08 17:01:28 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int	n;

	n = 12;
	while (n <= 789)
	{
		if ((n % 10 > (n % 100) / 10) && ((n % 100) / 10 > n / 100))
		{
			ft_putchar((n / 100) + 48);
			ft_putchar(((n % 100) / 10) + 48);
			ft_putchar((n % 10) + 48);
			if (n != 789)
				write(1, ", ", 2);
		}
		n++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
