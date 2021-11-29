/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pawaters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:43:59 by pawaters          #+#    #+#             */
/*   Updated: 2021/11/09 11:30:46 by pawaters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_wc(char const *s, char c)
{
	int i;
	int wc;
	
	i = 0;
	wc = 0;     
	if(!*s || !s)
                return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i] != c)
			i++;
		wc++;
		i++;
	}
	return (wc);
}

int	ft_strclen(char const *s, char c)
{
	int i;
	int len;
	
	i = 0;
	len = 0;     
	if(!*s || !s)
                return (0);
	while (s[i] == c)
		i++;
	while (s[i] != c)
		len++;
	return (len);
}

char	*ft_strcdup(char const *s, char c)
{
	int 	i;
	char	*res;

        i = 0;
	res = (char *)malloc(ft_strclen(s, c) + 1);
        if(!*s || !s)
                return (0);
	while (s[i] == c)
		i++;
	while (s[i] != c)
	{
		res[i] = s[i]
		i++;
	}
	return (res);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int	wnb;
	int	wc;
	int 	i;

	i = 0;
	wnb = ft_wc(s, c);	
	res = (char **)malloc(sizeof(char *) * (wc + 1));
	if(!*s || !s || !res)
		return (0);
	while (wc < wnb)
	{
		while (*(s + i) == c)	
			i++;
		res[wc] = ft_strcdup(s + i, c);
		wc++;
		while (*(s + i) != c)
			i++;
	}
	return (res);	
}
