/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:07:15 by chhoflac          #+#    #+#             */
/*   Updated: 2025/06/21 15:15:46 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "general_files/includes/Commons/Date.hpp"
#include "general_files/includes/Commons/File.hpp"
#include "general_files/includes/Commons/InterfaceUser.hpp"
#include "general_files/includes/Commons/Program.hpp"
#include "general_files/includes/Interfaces/ILine.hpp"
#include "utils/rng.cpp"
#include "utils/loading.cpp"
#include <unistd.h>

//RNG
int randomDayGenerator(bool isValid, int month, int year);

//Loading messages
void FalseLoadingMessage(const std::string &msg);




