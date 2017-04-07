/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgardner <lgardner@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 23:19:35 by lgardner          #+#    #+#             */
/*   Updated: 2017/04/06 23:19:44 by lgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print_reverse_alphabet(void) {
  int z = 'z';
  while(z >= 'a') {
    putchar(z);
    z--;
  }
}

int main() {
  ft_print_reverse_alphabet();
  return 0;
}
