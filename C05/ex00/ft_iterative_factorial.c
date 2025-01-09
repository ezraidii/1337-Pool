/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:54:56 by codebind          #+#    #+#             */
/*   Updated: 2025/01/09 13:49:41 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_iterative_factorial(int nb)
{
<<<<<<< Updated upstream
        int     factoriel;

        if (nb < 0)
        {
                return 0;
        }
        factoriel = 1;
        while (nb >= 1)
        {
                factoriel *= nb;
                nb--;
        }
        return factoriel;
=======
	int	factoriel;

	if (nb < 0)
	{
		return 0;
	}
	factoriel = 1;
	while (nb >= 1)
	{
		factoriel *= nb;
		nb--;
	}
	return factoriel;
>>>>>>> Stashed changes
}
