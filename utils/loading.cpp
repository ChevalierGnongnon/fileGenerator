/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loadingMessages.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 15:05:09 by chhoflac          #+#    #+#             */
/*   Updated: 2025/06/21 15:06:39 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Header.hpp"

void FalseLoadingMessage(const std::string &msg) {
	std::cout << "\033[3m" << msg << "\033[0m" << std::flush;
	for (int i = 0; i < 3; ++i) {
		usleep(50000); // 50 ms
		std::cout << "." << std::flush;
	}
	std::cout << std::endl;
}