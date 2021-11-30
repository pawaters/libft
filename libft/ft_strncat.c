/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:45:59 by pwaters           #+#    #+#             */
/*   Updated: 2021/11/30 16:46:44 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		len;
	char	*p1;

	i = 0;
	p1 = s1;
	len = ft_strlen(s1);
	while ((*(s2 + i) != '\0') && i < n)
		*(p1 + len + i) = *(s2 + i++);
	*(s2 + i) = '\0';
	return (s1);
}
