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

size_t    test_valid(size_t size)
{
    size_t i = 0;
    char *yolo;

    yolo = malloc(size);
    strcpy(yolo, "test");
    while (i < size)
    {
        if (yolo[i] != '\0')
            return size;
    }
    return -1;
}

int main()
{
    ft_putendl("test started");    
    if (test_valid(0) != -1)
       ft_putendl("error bzero");
    if (test_valid(1) != -1)
        ft_putendl("error bzero");
    if (test_valid(15) != -1)
        ft_putendl("error bzero");
    if (test_valid(40) != -1)
        ft_putendl("error bzero");
    if (test_valid(159) != -1)
        ft_putendl("error bzero");
    if (test_valid(665151) != -1)
        ft_putendl("error bzero");
    if (test_valid(848465) != -1)
        ft_putendl("error bzero");
    ft_putendl("test ended");
    return 1;
}