/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:57:45 by galambey          #+#    #+#             */
/*   Updated: 2023/02/25 10:08:13 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	temp;

	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		temp = nb - 1;
		while (temp > 0)
		{
			nb = nb * temp;
			temp--;
		}
		return (nb);
	}
	return (0);
}
