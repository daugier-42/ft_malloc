/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 17:27:33 by daugier           #+#    #+#             */
/*   Updated: 2018/06/11 17:27:34 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft_malloc.h"

int     main(int ac, char **av)
{
    char    *str;
    int     loop;
    char    c;
    int     i;

    (void)ac;
    loop = atoi(av[2]);
    c = av[1][0];
    i = -1;
    str = (char *)malloc(sizeof (char) * (loop + 1));
    while (loop-- > 0)
    {
        str[++i] = c;
    }
    str[i] = '\0'; 
    ft_printf("%s\n", str);
    return (0);
}
