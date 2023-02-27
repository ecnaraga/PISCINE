/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:09:46 by galambey          #+#    #+#             */
/*   Updated: 2023/02/08 17:33:03 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = 0;
		while (j <= 99)
		{
			if (j > i)
			{
				ft_putchar((i / 10) + 48);
				ft_putchar((i % 10) + 48);
				ft_putchar(' ');
				ft_putchar((j / 10) + 48);
				ft_putchar((j % 10) + 48);
				if (i != 98 || j != 99)
					write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
