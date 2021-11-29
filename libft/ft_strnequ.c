/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pawaters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:28:01 by pawaters          #+#    #+#             */
/*   Updated: 2021/11/08 16:36:09 by pawaters         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strnequ( char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	if (!s1 || !s2) 
		return (0);
	while (*(s1 + i) != '\0' && *(s1 + i) == *(s2 + i) && i < n)
		i++;
	if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
		return (1);
	return (0);
}
