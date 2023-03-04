/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:42:57 by galambey          #+#    #+#             */
/*   Updated: 2023/02/09 14:55:59 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int	main()
{
	int	d;
	int	m;
	int	*a;
	int	*b;

	d = 15;
	m = 3;
	a = &d;
	b = &m;
	printf("%d / %d a pour resultat ", d, m);
	ft_ultimate_div_mod(a, b);
	printf("%d avec un reste = a %d", d, m);
}
