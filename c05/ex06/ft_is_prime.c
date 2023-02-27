/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:36:18 by galambey          #+#    #+#             */
/*   Updated: 2023/02/21 18:52:57 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime_recursive(unsigned int nb, long int x)
{
	if (nb % x == 0 && nb != x)
		return (0);
	else if (x * x < nb)
		return (ft_is_prime_recursive(nb, x + 1));
	else
		return (1);
}

int	ft_is_prime(int nb)
{
	long int	x;

	if (nb <= 1)
		return (0);
	x = 2;
	return (ft_is_prime_recursive(nb, x));
}
