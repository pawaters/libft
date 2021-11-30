/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pawaters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:06:07 by pawaters          #+#    #+#             */
/*   Updated: 2021/11/30 16:12:03 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		len;

	i = 1;
	len = ft_numlen(n);
	res = (char *)malloc((ft_numlen(n) + 1) * sizeof(char));
	if (n == -2147483648)
		res = ft_strdup("-2147483648");
	if (ft_numlen(n) == 0)
		return (0);
	if (n < 0)
		n = -n;
	while (len - i >= 0)
	{
		res[len - i] = n % 10 + '0';
		nb = nb / 10;
	}
	res[len] = '\0';
	if (sign < 0)
		res[0] = '-';
	return (res);
}
