/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:14:19 by galambey          #+#    #+#             */
/*   Updated: 2023/02/13 11:19:45 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcpy.c"

int	main()
{
	char src[] = "Salut tu vas bien?";
	char	dest[100];

	ft_strcpy(dest, src);
	printf("%s\n%s", src, dest);
}
