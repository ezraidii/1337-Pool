/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:21:21 by codebind          #+#    #+#             */
/*   Updated: 2025/01/07 13:52:39 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
	{
		return 0;
	}
	while (base[i] != '\0')
	{
	if (base[i] == '-' || base[i] == '+')
	{
		return 0;
	}
	j = i + 1;
	while (base[j] != '\0')
	{
		if (base[i] == base[j])
		{
			return 0;
		}
		j++;
	}
	i++;
	}
	return 1;
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	sign_count;
	int	count;
	int	result;
	int	value;

	i = 0;
	sign_count = 0;
	count = 0;
	if (error(base) == 0)
		return 0;
	while (base[count])
		count++;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		sign_count++;
		i++;
	}
	result = 0;
	while (str[i] != '\0')
	{
		value = -1;
	j = 0;
	while (base[j] != '\0')
        {
		if (str[i] == base[j])
		{
			value = j;
			break;
		}
		j++;
	}
	if (value == -1)
		return (0);
	result = result * count + value;
	i++;
	}
	if (sign_count % 2 == 1)
		result = -result;
	return result;
}
