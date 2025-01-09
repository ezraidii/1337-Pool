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

int     ft_iterative_factorial(int nb)
{
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
}
