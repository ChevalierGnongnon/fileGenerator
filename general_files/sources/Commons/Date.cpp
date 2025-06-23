/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:02:18 by chhoflac          #+#    #+#             */
/*   Updated: 2025/06/21 16:33:51 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Header.hpp"

Date::Date()
	: dateString("2000-01-01"),
	  isLeapYear(true),
	  day(1),
	  month(1),
	  year(2000),
	  isValid(true){
	FalseLoadingMessage("Generating default date ");
}

Date::Date(bool isValid){
	this->year = randomYearGenerator(isValid);
	this->month = randomMonthGenerator(isValid);
	this->day = randomDayGenerator(isValid, this->month, this->year);
	this->isValid = isValid;
	this->isLeapYear = isLeap();
	this->dateString = transformToDateString();
	FalseLoadingMessage("Generating " + std::string(isValid ? "valid" : "invalid") + " date");
}
Date::Date(int day, int month, int year)
	: day(day), 
	  month(month),
	  year(year){
	this->isLeapYear = isLeap();
	this->dateString = transformToDateString();
	this->isValid = validDefiner();
	FalseLoadingMessage("Generating defined date ");
}

Date::Date(const Date &src)
	: day(src.day),
	  month(src.month),
	  year(src.year),
	  isLeapYear(src.isLeapYear),
	  dateString(src.dateString),
	  isValid(src.isValid){
	FalseLoadingMessage("Generating copied date ");

}
Date::~Date(){}

Date &Date::operator=(const Date &src){
	if (this != &src) {
		this->day = src.day;
		this->month = src.month;
		this->year = src.year;
		this->isValid = src.isValid;
		this->isLeapYear = src.isLeapYear;
		this->dateString = src.dateString;
	}
	return (*this);
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

bool                Date::validDefiner() const{

}
bool                Date::isLeap(){
	
}