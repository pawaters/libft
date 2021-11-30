/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pawaters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:00:59 by pawaters          #+#    #+#             */
/*   Updated: 2021/11/30 16:57:12 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (needle == "")
		return (haystack);
	while (*(haystack + i) != '\0' && i < n)
	{
		if (*(haystack + i) == *(needle))
			while ((*(haystack + i + j) == *(needle + j)) && needle =! "\0")
				j++;
		if (*(needle + j) == '\0')
			return (*(haystack + i));
	}
	return (NULL);
}
