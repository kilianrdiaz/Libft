/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:25:34 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/07/05 19:48:26 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dst_len;
	unsigned int	i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	i = 0;
	if (size > 0)
	{
		if (size > src_len)
			dst_len = src_len;
		else
			dst_len = size - 1;
		while (i < dst_len)
		{
			dst[i] = src[i];
			i++;
		}
		dst[dst_len] = '\0';
	}
	return (src_len);
}
