/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:47:00 by pwaters           #+#    #+#             */
/*   Updated: 2021/12/01 12:30:51 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char	*s1, const	char	*s2, size_t	n)
{
	int	i;

	i = 0;
	while (*s1 != '\0' && *s1 == *s2 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	if (*s1 - *s2 > 0)
		return (1);
	else if (*s2 - *s1 > 0)
		return (-1);
	else
		return (0);
}
