/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 02:35:32 by zech-chi          #+#    #+#             */
/*   Updated: 2023/12/16 02:35:33 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int	len;
	int	i;
	char	*s_dup;

	len = ft_strlen(src);
	s_dup = malloc(sizeof(char) * (len + 1));
	if (!s_dup)
		return (NULL);
	i = -1;
	while (++i < len)
		s_dup[i] = src[i];
	s_dup[i] = '\0';
	return (s_dup);
}
