/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzaikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 01:36:10 by anzaikov          #+#    #+#             */
/*   Updated: 2024/10/31 23:53:25 by anzaikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int ac, char **av)
{
	int	k;
	int	x;

	x = 1;
	while (x < ac - 1)
	{
		k = 1;
		while (k < ac - 1)
		{
			if (ft_strcmp(av[k], av[k + 1]) > 0)
			{
				ft_swap(&av[k], &av[k + 1]);
			}
			k++;
		}
		x++;
	}
	k = 1;
	while (k < ac)
	{
		ft_putstr(av[k]);
		ft_putchar('\n');
		k++;
	}
	return (0);
}
