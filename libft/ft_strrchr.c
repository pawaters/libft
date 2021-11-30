/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:57:45 by pwaters           #+#    #+#             */
/*   Updated: 2021/11/30 16:58:04 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (*(s + i))
	{
		if (*(s + i) == (char)c)
			pos = i;
		i++;
	}	
	if (*(s + i) == (char)c)
		return ((char *)s + i);
	else
		return ((char *)s + p);
	return ((void *)0);
}
