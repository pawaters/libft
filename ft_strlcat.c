/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:44:59 by pwaters           #+#    #+#             */
/*   Updated: 2021/11/03 16:11:05 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	int	len;
	int i;

	src_len = ft_strlen(src);
	i = 0;

	while (*dst)
	{
		if (i++ >= dstsize)
			break;
		dst++;
	}
	if (

