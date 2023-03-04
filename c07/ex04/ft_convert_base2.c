/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:42:45 by galambey          #+#    #+#             */
/*   Updated: 2023/02/25 16:00:14 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= ' '
			|| base[i] > '~')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_position(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	s;
	int	nb;

	i = 0;
	s = 1;
	nb = 0;
	if (ft_check_base(base) == 1 && str[i])
	{
		while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				s = -s;
			i++;
		}
		while (ft_position(str[i], base) != -1)
		{
			nb = nb * ft_strlen(base) + (ft_position(str[i], base));
			i++;
		}
	}
	return (nb * s);
}
