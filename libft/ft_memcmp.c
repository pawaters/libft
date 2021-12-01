/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:05:41 by pwaters           #+#    #+#             */
/*   Updated: 2021/12/01 11:45:29 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*str1;
	char		*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (*(str1 + i) != '\0' && *(str1 + i) == *(str2 + i) && (i < n))
		i++;
	if (*(str1 + i) - *(str2 + i) > 0)
		return (1);
	else if (*(str2 + i) - *(str1 + i) > 0)
		return (-1);
	else
		return (0);
}
