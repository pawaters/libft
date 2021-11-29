/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:44:59 by pwaters           #+#    #+#             */
/*   Updated: 2021/11/08 11:28:37 by pawaters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	int	srclen;
	int	dstlen;
	int	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst)
	i = 0;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (src[i] != '\0' && (dstlen + 1) < dstsize)
	{
		dst[dstlen] = src[i];
		dstlen++;
		i++;
	}
	dst[dstlen] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]);
} 
