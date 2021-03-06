/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pawaters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:28:01 by pawaters          #+#    #+#             */
/*   Updated: 2021/11/30 16:41:54 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (*(s1 + i) != '\0' && *(s1 + i) == *(s2 + i))
		i++;
	if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
		return (1);
	return (0);
}
