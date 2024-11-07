/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzaikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 22:36:13 by anzaikov          #+#    #+#             */
/*   Updated: 2024/10/17 22:37:03 by anzaikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	comb[3];

	comb[0] = '0';
	while (comb[0] <= '7')
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= '8')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= '9')
			{
				if (comb[0] == '7' && comb[1] == '8' && comb[2] == '9')
					write(1, &comb[0], 3);
				else
				{
					write(1, &comb[0], 3);
					write(1, ", ", 2);
				}
				++comb[2];
			}
			++comb[1];
		}
		++comb[0];
	}
}
