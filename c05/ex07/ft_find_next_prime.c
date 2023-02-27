/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:06:54 by galambey          #+#    #+#             */
/*   Updated: 2023/02/21 19:05:23 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb, long int x)
{
	if (nb <= 1)
		return (0);
	if (nb % x == 0 && nb != x)
		return (0);
	if (x * x < nb)
		return (ft_is_prime(nb, x + 1));
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		nb = 2;
	if (ft_is_prime(nb, 2) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
