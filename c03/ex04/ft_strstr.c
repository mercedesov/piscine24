/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzaikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:46:36 by anzaikov          #+#    #+#             */
/*   Updated: 2024/10/23 21:04:55 by anzaikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (to_find[k] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + k] == to_find[k] && str[i + k] != '\0')
			k++;
		if (to_find[k] == '\0')
			return (str + i);
		i++;
		k = 0;
	}
	return (0);
}
