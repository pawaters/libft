/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:33:27 by pwaters           #+#    #+#             */
/*   Updated: 2021/12/08 12:11:20 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;

	if (!dst && !src)
		return (NULL);
	if (dst > src && dst < src + len)
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	else
		return (ft_memcpy(dst, src, len));		
	return (dst);
}
