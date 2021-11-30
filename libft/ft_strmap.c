/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pawaters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:58:16 by pawaters          #+#    #+#             */
/*   Updated: 2021/11/30 16:45:29 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	res = (char *)malloc((s + 1) * sizeof(char));
	if (!res || !s)
		return (0);
	while (i < len)
	{	
		res[i] = f(s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
