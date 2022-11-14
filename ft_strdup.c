/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 07:00:05 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/11 07:23:23 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	int		i;
	char	*ptr;

	len = ft_strlen(str);
	i = 0;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr != NULL)
	{
		while (i < len)
		{
			ptr[i] = str[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
