/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 22:50:38 by codebind          #+#    #+#             */
/*   Updated: 2025/01/02 12:35:54 by codebind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
	while (str[i + j] == to_find[j] && to_find[j] != '\0')
        {
            j++;
        }
        
        if (to_find[j] == '\0')
            return &str[i];

        i++;
    }
    return NULL;
}
