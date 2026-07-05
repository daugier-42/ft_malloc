/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 17:26:57 by daugier           #+#    #+#             */
/*   Updated: 2018/06/11 17:26:59 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft_malloc.h"

void        *malloc(size_t size)
{
    void    *ptr;

    ptr = mmap(0, size, PROT_WRITE | PROT_READ,  MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
    return (ptr);
}