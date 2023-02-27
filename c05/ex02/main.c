/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:00:49 by galambey          #+#    #+#             */
/*   Updated: 2023/02/20 20:26:14 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_iterative_power.c"

int	main(void)
{
	int	nb;
	int	power;

	nb = -9;
	power = 2;
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}
