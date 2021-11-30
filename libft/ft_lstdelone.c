/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:24:18 by pwaters           #+#    #+#             */
/*   Updated: 2021/11/30 16:14:01 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (del != NULL && alst != NULL)
	{	
		del((**alst).content, (**alst).content_size);
		free(*alst);
		*alst = NULL;
	}
}
