/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgardner <lgardner@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 23:20:35 by lgardner          #+#    #+#             */
/*   Updated: 2017/04/06 23:20:44 by lgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print_numbers(void) {
  int a = '0';
  while(a <= '9') {
    putchar(a);
    a++;
  }
}

int main() {
  ft_print_numbers();
  return 0;
}
