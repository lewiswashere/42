/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgardner <lgardner@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 23:18:57 by lgardner          #+#    #+#             */
/*   Updated: 2017/04/06 23:19:11 by lgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print_alphabet(void) {
  int a = 'a';
  while(a <= 'z') {
    putchar(a);
    a++;
  }
}

int main() {
  ft_print_alphabet();
  return 0;
}
