/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bezero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bandre <bandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 19:56:01 by bandre            #+#    #+#             */
/*   Updated: 2018/05/31 19:57:34 by bandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm_test.h"

size_t    test_valid(char *ptr, size_t size)
{
    size_t i = 0;

    while (i < size)
    {
        if (ptr[i] != '/0')
            return size;
    }
    return -1;
}

int main()
{
    char    *yolo1;
    char    *yolo2;
    char    *yolo3;
    char    *yolo4;
    
    yolo1 = malloc(1);
    yolo2 = malloc(5);
    yolo3 = malloc(50000);
    yolo4 = malloc(31222112);


}