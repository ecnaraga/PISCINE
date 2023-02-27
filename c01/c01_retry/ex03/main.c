/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:25:33 by galambey          #+#    #+#             */
/*   Updated: 2023/02/09 14:39:11 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_div_mod.c"

int	main()
{
	int	a;
	int	b;
	int	d;
	int	m;
	int	*div;
	int	*mod;

	div = &d;
	mod = &m;
	a = 10;
	b = 5;
	d = 0;
	m = 0;
	ft_div_mod(a, b, div, mod);
	printf("%d / %d = %d\n%d mod %d = %d\n", a, b, d, a, b, m);
}
