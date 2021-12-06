/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:47:07 by pwaters           #+#    #+#             */
/*   Updated: 2021/11/30 16:27:25 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		write(1, s[i++], 1);
	write(1, '\n', 1);
}