/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:14:19 by galambey          #+#    #+#             */
/*   Updated: 2023/02/13 16:57:09 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlowcase.c"

int	main()
{
	char src[] = "qwert\ayuioQWERTasdf1252QWERTY \nghp";

	printf("%s\n", src);
	ft_strlowcase(src);
	printf("%s\n", src);
}
