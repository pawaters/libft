/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pawaters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:06:07 by pawaters          #+#    #+#             */
/*   Updated: 2021/12/01 10:57:53 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * 2);
	if (n == -2147483648)
		res = ft_strdup("-2147483648");
	if (n < 0)
	{
		res[0] = '-';
		res[1] = '\0';
		res = ft_strjoin(res, ft_itoa(-n));
	}
	else if (n >= 10)
		res = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		res[0] = n + '0';
		res[1] = '\0';
	}
	return (res);
}
