/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patigunt <42@xbay.io>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 23:20:10 by patigunt          #+#    #+#             */
/*   Updated: 2018/09/20 23:20:35 by patigunt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}