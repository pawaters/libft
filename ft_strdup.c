/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:22:29 by pwaters           #+#    #+#             */
/*   Updated: 2021/11/02 11:16:00 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int i;
	char *dest;

	i = 0;
	dest = malloc (ft_strlen(s1) * sizeof(char));
	while (s1[i] != '\0')
	{	
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
