/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:21:40 by galambey          #+#    #+#             */
/*   Updated: 2023/02/26 17:41:11 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_position(char c)
{
	char	*s1;
	char	*s2;
	int	i;

	i = 0;
	s1 = "abcdefghijklmnopqrstuvwxyz";
	s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (s1[i] || s2[i])
	{
		if (c == s1[i] || c == s2[i])
			return (i);
		i++;
	}
	return (-1);
}

void	ft_repeat_alpha(char *str)
{
	int	i;
	int	count;

	i = 0;
	while (str[i])
	{
		count = ft_position(str[i]);
		if (count == -1)
			ft_putchar(str[i]);
		else
			while (count > -1)
			{
				ft_putchar(str[i]);
				count--;
			}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_repeat_alpha(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
