/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:06:41 by galambey          #+#    #+#             */
/*   Updated: 2023/02/26 12:19:38 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_present(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (ft_check_present(str[i], charset) != -1)
			i++;
		if (str[i] && ft_check_present(str[i], charset) == -1)
		{
			count++;
			i++;
		}
		while (str[i] && ft_check_present(str[i], charset) == -1)
			i++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_print_words(char *str, char *charset, char **array)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	k = -1;
	while (str[j])
	{
		i = 0;
		while (str[j] && ft_check_present(str[j], charset) != -1)
			j++;
		if (str[j] && ft_check_present(str[j], charset) == -1)
		{
			while (str[j] && ft_check_present(str[j], charset) == -1)
			{
				j++;
				i++;
			}
			array[++k] = malloc(sizeof(char) * (i + 1));
			if (array[k] == NULL)
				return (NULL);
			ft_strncpy(array[k], str + (j - i), i + 1);
		}
	}
	return (array);
}

char	**ft_split(char *str, char *charset)
{
	char		**array;
	int			c_words;

	c_words = ft_count_words(str, charset);
	array = malloc(sizeof(char *) * (c_words + 1));
	if (!array)
	{
		return (NULL);
	}
	ft_print_words(str, charset, array);
	array[c_words] = NULL;
	return (array);
}
