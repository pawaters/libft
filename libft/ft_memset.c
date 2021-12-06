/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:11:16 by pwaters           #+#    #+#             */
/*   Updated: 2021/12/02 11:31:48 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	uc;
	char			*ptr;

	i = 0;
	uc = (unsigned char)c;
	ptr = (char *)b;
	
	while (i < len)
	{
		*(ptr + i) = uc;
		i++;
	}
	return (b);
}
