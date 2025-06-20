/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:02:18 by chhoflac          #+#    #+#             */
/*   Updated: 2025/06/20 12:38:26 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Header.hpp"

Date::Date(){
	
}

Date::Date(bool isValid){
	
}
Date::Date(int day, int month, int year){
	
}

Date::Date(const Date &src){
	
}
Date::~Date(){}

Date &Date::operator=(const Date &src){
	
}

std::string         Date::getDate() const{
	return (this->dateString);
}
int                 Date::getDay() const{
	return (this->day);	
}
int                 Date::getMonth() const{
	return (this->month);	
}
int                 Date::getYear() const{
	return (this->year);
}
bool                Date::getIsValid() const{
	return (this->isValid);
}
bool                Date::getIsLeap() const{
	return (this->isLeapYear);
}

std::string         Date::transformToDateString() const{

}

void                Date::dateGenerator(bool isValid){

}

bool                Date::validDefiner() const{

}
bool                Date::isLeap(){
	
}