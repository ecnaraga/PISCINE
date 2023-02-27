/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:51:02 by galambey          #+#    #+#             */
/*   Updated: 2023/02/25 10:41:49 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_square(int nb, long int x);

int	ft_sqrt(int nb)
{
	int	x;

	if (nb < 0)
		return (0);
	x = 0;
	return (ft_square(nb, x));
}

int	ft_square(int nb, long int x)
{
	if (x * x == nb)
		return ((int)x);
	else if (x * x > nb)
		return (0);
	else
		return (ft_square(nb, x + 1));
}
