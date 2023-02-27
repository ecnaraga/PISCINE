/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:51:19 by galambey          #+#    #+#             */
/*   Updated: 2023/02/08 13:08:07 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	ch;

	ch = '0';
	while (ch <= '9')
	{
		ft_putchar(ch);
		ch++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
