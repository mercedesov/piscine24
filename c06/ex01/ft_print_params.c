/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzaikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:42:54 by anzaikov          #+#    #+#             */
/*   Updated: 2024/10/31 23:52:25 by anzaikov         ###   ########.fr       */
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

	k = 1;
	while (k < ac)
	{
		i = 0;
		while (av[k][i] != '\0')
		{
			ft_putchar(av[k][i]);
			i++;
		}
		ft_putchar('\n');
		k++;
	}
	return (0);
}
