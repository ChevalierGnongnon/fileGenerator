/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:07:15 by chhoflac          #+#    #+#             */
/*   Updated: 2025/07/02 08:56:51 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <unistd.h>
#include <iomanip>
#include "general_files/includes/Commons/Date.hpp"
#include "general_files/includes/Commons/File.hpp"
#include "general_files/includes/Commons/InterfaceUser.hpp"
#include "general_files/includes/Commons/Program.hpp"
#include "general_files/includes/Interfaces/ILine.hpp"
#include "general_files/sources/utils/loading.cpp"
#include "general_files/sources/utils/rng.cpp"


//RNG
int randomDayGenerator(bool isValid, int month, int year);

//Loading messages
void FalseLoadingMessage(const std::string &msg);




