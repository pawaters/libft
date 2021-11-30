/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pawaters <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:20:32 by pawaters          #+#    #+#             */
/*   Updated: 2021/11/30 16:21:54 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_numlen(int nb)
{
	if (nb < 0)
		return (ft_numlen(-n));
	if (nb > 9)
		return (1 + ft_numlen(nb / 10));
	return (1);
}
