/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:39:07 by pwaters           #+#    #+#             */
/*   Updated: 2021/11/30 16:15:44 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (*(s + i) && i < n)
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
		i++;
	}	
	if (*(s + i) == (char)c)
		return ((char *)s + i);
	return ((void *)0);
}
