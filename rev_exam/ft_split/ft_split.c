#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++; 
		if (str[i] && !(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		{
			count++;
			i++;
		}
		while (str[i] && !(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str)
{
	char	**array;
	int	i;
	int	count_wd;
	int	count_lt;
	int	j;

	if (!str)
		return (NULL);
	count_wd = count_words(str);
	array = malloc(sizeof(char *) * (count_wd + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && j < count_wd)
	{
		count_lt = 0;
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		while (str[i] && !(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		{
			i++;
			count_lt++;
		}
		if (count_lt > 0)
		{
			array[j] = malloc(sizeof(char) * (count_lt + 1));
			ft_strncpy(array[j], str + i - count_lt, count_lt);
			j++;
		}
	}
	array[count_wd] = NULL;
	return (array);
}

int	main(int ac, char **av)
{
	char	**array;
	int	count_wd;
	char	*str;
	int	i;

	if (ac == 2)
	{
		i = 0;
		str = av[1];
		if (!str)
			count_wd = 0;
		else
			count_wd = count_words(str);
		array = ft_split(str);
		while (i < count_wd)
		{
			ft_putstr(array[i]);
			ft_putchar('\n');
			free(array[i]);
			i++;
		}
		free(array);
	}
	else
		ft_putchar('\n');
	return (0);
}
