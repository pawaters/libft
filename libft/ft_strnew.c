/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:47:43 by pwaters           #+#    #+#             */
/*   Updated: 2021/12/01 12:39:04 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) + 1);
	while (i <= size)
		dest[i++] = '\0';
	return (dest);
}