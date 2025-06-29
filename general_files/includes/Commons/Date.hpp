/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:02:44 by chhoflac          #+#    #+#             */
/*   Updated: 2025/06/23 09:40:05 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Date{
    private :
        std::string dateString;
        bool        isLeapYear;
        int         day;
        int         month;
        int         year;
        bool        isValid;
    public:
        Date(); //random day, month and year (valid or not)
        Date(bool isValid); // deciding if it will be valid or not and create random date
        Date(int day, int month, int year); // choose directly the date (check date has to be done)
        Date(const Date &src); //copy constructor
        ~Date(); //destructor;
        
        Date &operator = (const Date &src);

        std::string         getDate() const;
        int                 getDay() const;
        int                 getMonth() const;
        int                 getYear() const;
        bool                getIsValid() const;
        bool                getIsLeap() const;

        std::string         transformToDateString(); //parse values into std string

        bool                validDefiner(); //define wether the date is valid or not
        bool                isLeap();
};

std::ostream &operator<<(std::ostream &os, const Date &date);


