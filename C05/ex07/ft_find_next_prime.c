/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:38:25 by codebind          #+#    #+#             */
/*   Updated: 2025/01/13 14:38:34 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_is_prime(int num)
{
        int     i;

        i = 2;
        if (num <= 1)
        {
                return (0);
        }
        while (i * i <= num)
        {
                if (num % i == 0)
                {
                        return (0);
                }
                i++;
        }
        return (1);
}

int     ft_find_next_prime(int nb)
{
        if (nb <= 1)
                return (2);
        while (!ft_is_prime(nb))
                nb++;
        return (nb);
}
