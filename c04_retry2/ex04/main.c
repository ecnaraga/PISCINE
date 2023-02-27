/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:45:10 by galambey          #+#    #+#             */
/*   Updated: 2023/02/20 10:38:21 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putnbr_base.c"

int	main(void)
{
	ft_putnbr_base(-2147483648, " 0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(45, "01 ");
	printf("\n");
	ft_putnbr_base(-45, "0 1");
	printf("\n");
	ft_putnbr_base(-1, "0+1");
        printf("\n");
	ft_putnbr_base(1, "012+");
	printf("\n");
	ft_putnbr_base(-10, "01Á23");
	printf("\n");
	ft_putnbr_base(564, "*012344");
	printf("\n");
	ft_putnbr_base(-6000, "00123453");
	printf("\n");
	ft_putnbr_base(2147483647, "001234567Á");
	printf("\n");
	ft_putnbr_base(-2147483648, "Áponeyvif");
	printf("\n");
	return (0);
}
