/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:53:10 by galambey          #+#    #+#             */
/*   Updated: 2023/02/20 20:04:41 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power == 0)
		return (1);
	if (power > 0)
	{
		result = 1;
		while (power > 0)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
	return (0);
}
