/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 14:25:08 by codebind          #+#    #+#             */
/*   Updated: 2024/12/29 20:08:33 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_hex(unsigned char c)
{
	char	*hex;
	char	hex_rep[2];

	hex = "0123456789abcdef";
	hex_rep[0] = hex[c / 16];
	hex_rep[1] = hex[c % 16];
	write(1, hex_rep, 2);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			write(1, "\\", 1);
			ft_putchar_hex(*str);
		}
		else
			write(1, str, 1);
		str++;
	}
}
