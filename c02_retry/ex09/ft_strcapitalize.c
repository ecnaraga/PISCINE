/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:01:54 by galambey          #+#    #+#             */
/*   Updated: 2023/02/13 17:36:06 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (ft_char_is(str[0]) == 2)
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if (ft_char_is(str[i - 1]) == 0 && ft_char_is(str[i]) == 2)
			str[i] = str[i] - 32;
		if (ft_char_is(str[i - 1]) != 0 && ft_char_is(str[i]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	ft_char_is(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= '0' && c <= '9')
		return (3);
	else
		return (0);
}
