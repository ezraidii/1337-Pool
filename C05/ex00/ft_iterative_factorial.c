/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:54:56 by codebind          #+#    #+#             */
/*   Updated: 2025/01/08 17:40:42 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factoriel;

	if (nb < 0)
	{
		return 0;
	}
	i = 1;
	factoriel = 1;
	while (i <= nb)
	{
		factoriel *= i;
		i++;
	}
	return factoriel;
}
