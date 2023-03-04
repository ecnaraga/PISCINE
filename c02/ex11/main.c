/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:12:45 by galambey          #+#    #+#             */
/*   Updated: 2023/02/14 10:29:20 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putstr_non_printable.c"

int	main()
{
	char	str[] = "CouXcou\ntu vas Xbienx?";
	str[3] = 255;

	printf("%s\n", str);
	ft_putstr_non_printable(str);
	return (0);
}
