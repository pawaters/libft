/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:15:03 by pwaters           #+#    #+#             */
/*   Updated: 2021/11/02 15:33:58 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isascii(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}
