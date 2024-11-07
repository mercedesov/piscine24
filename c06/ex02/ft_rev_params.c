/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzaikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:54:45 by anzaikov          #+#    #+#             */
/*   Updated: 2024/10/31 01:33:46 by anzaikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	k;

	i = ac - 1;
	while (i > 0)
	{
		k = 0;
		while (av[i][k] != '\0')
		{
			ft_putchar(av[i][k]);
			k++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
