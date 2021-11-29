/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pawaters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:40:07 by pawaters          #+#    #+#             */
/*   Updated: 2021/11/09 11:56:34 by pawaters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0); 
}

char	*ft_strtrim(char const *s)
{
	char	*res;
	int	i;
	int	start;
	int	end;
	int 	len;

	i = 0;
	start = 0;
	end = 0;
	len = ft_strlen(s);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (0);
	while (ft_isspace(*(s + start)) == 1)
		start++;
	while (ft_isspace(*(s + len - 1 - end)) == 0)
		end++;
	res = ft_strsub(s, start, len - end);
	if (!res)
		return (0);
	return (res);
}
