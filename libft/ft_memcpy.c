/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:25:57 by pwaters           #+#    #+#             */
/*   Updated: 2021/11/03 13:33:06 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dst, const void *src, size_t n)
{
	int i;
	char		*dst1;
	const char	*src1;

	i = 0;
	dst1 = dst;
	src1 = src;
	if (dst || src)
		return((void *)0);
	while (i < n )
		*(dst1 + i) = *(src1 + i++);
   return (dst);	
}
