/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:01:01 by galambey          #+#    #+#             */
/*   Updated: 2023/02/20 10:36:03 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_checkbase(char *str)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] < 33 || str[i] > 126 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb;
	unsigned int	len;

	len = ft_strlen(base);
	if (len > 1 && ft_checkbase(base) == 1)
	{
		nb = nbr;
		if (nbr < 0)
		{
			ft_putchar('-');
			nb = -nbr;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		else
		{
			ft_putnbr_base(nb / len, base);
			ft_putchar(base[nb % len]);
		}
	}
}
