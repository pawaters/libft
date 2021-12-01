/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:33:27 by pwaters           #+#    #+#             */
/*   Updated: 2021/12/01 12:03:23 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst1;
	const char	*src1;
	size_t		i;

	dst1 = dst;
	src1 = src1;
	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if (dst1 - src1 < 0)
		while (i < len)
		{
			*(dst1 + i) = *(src1 + i);
			i++;
		}
	else
	{
		i = len;
		while (i-- > 0)
			dst1[i] = src1[i];
		dst1[0] = src1[0];
	}
	return (dst);
}
