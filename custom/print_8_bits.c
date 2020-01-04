/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_8_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 17:40:52 by mvidal-a          #+#    #+#             */
/*   Updated: 2020/01/04 17:43:58 by mvidal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void    print_8_bits(t_byte b)
{
    t_byte z;
	
	z = 0b10000000;
    while (z > 0)
    {
        if (b & z)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        z >>= 1;
    }
}