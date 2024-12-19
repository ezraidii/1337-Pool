/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:26:37 by codebind          #+#    #+#             */
/*   Updated: 2024/12/19 18:26:52 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_current(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;
	int	j;

	if (n <= 0 || n >= 10)
		return ;
	i = -1;
	while (++i < n)
		tab[i] = i;
	while (tab[0] <= (10 - n))
	{
		ft_print_current(tab, n);
		i = n - 1;
		while (i >= 0 && tab[i] == (10 - (n - i)))
			i--;
		if (i < 0)
			break ;
		tab[i]++;
		j = i + 1;
		while (j < n)
		{
			tab[j] = tab[j - 1] + 1;
			j++;
		}
	}
}
