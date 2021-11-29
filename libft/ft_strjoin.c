/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pawaters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:44:33 by pawaters          #+#    #+#             */
/*   Updated: 2021/11/29 14:08:23 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int 	s1len;
	int 	s2len;
	int 	i;
	char*	dest;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	i = 0;
	dest = (char *)malloc((s1len + s2len +1) * sizeof(char));
	if (!dest)
		return (0);
	ft_strcpy(dest, s1);
	ft_strcpy(dest[s2len], s2);
	return (dest);
}	
