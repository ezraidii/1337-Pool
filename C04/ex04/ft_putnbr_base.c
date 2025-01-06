/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:56:16 by codebind          #+#    #+#             */
/*   Updated: 2025/01/06 16:51:44 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0') 
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
		{
			return (0);
		}
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;
	int	count;

	count = 0;
	if (error(base) == 0)
	return;
	while (base[count])
	count++;
	num = nbr;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= count)
		ft_putnbr_base(num / count, base);
		write(1, &base[num % count], 1);
}
