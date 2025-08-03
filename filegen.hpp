/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filegen.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:07:15 by chhoflac          #+#    #+#             */
/*   Updated: 2025/08/03 14:41:22 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <unistd.h>
#include <iomanip>
#include <map>
#include <vector>

#include "general_files/includes/Commons/Date.hpp"

#include "general_files/includes/Abstracts/AFile.hpp"

#include "general_files/includes/Commons/InterfaceUser.hpp"
#include "general_files/includes/Commons/Program.hpp"

#include "general_files/includes/Interfaces/ILine.hpp"
#include "general_files/includes/Interfaces/IWriter.hpp"
#include "general_files/includes/Interfaces/IFileGenerator.hpp"
#include "general_files/includes/Interfaces/ILineGenerator.hpp"
#include "general_files/includes/Interfaces/IFile.hpp"

#include "general_files/sources/utils/loading.cpp"
#include "general_files/sources/utils/rng.cpp"

#include "GarbageCollector/GarbageCollector.hpp"

//RNG
int randomDayGenerator(bool isValid, int month, int year);

//Loading messages
void FalseLoadingMessage(const std::string &msg);




