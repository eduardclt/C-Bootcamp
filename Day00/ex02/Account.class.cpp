/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:06:39 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/05 16:51:16 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	_displayTimestamp();
	Account::_accountIndex = 0;
	Account::_amount = 0;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	Account::_nbAccounts++;
	Account::_accountIndex = Account::_nbAccounts - 1;
	Account::_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	std::cout << " index:" << Account::_accountIndex << ";" << "amount:" << Account::_amount << ";" << "created";
    std::cout << std::endl;	
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex << ";amount:" << Account::_amount;
	std::cout << ";closed" << std::endl;
};

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

void Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "deposits:" << Account::_nbDeposits << ";";
	std::cout << "withdrawals:" << Account::_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
	this->_totalNbDeposits++;
	Account::_nbDeposits++;
	Account::_totalAmount += deposit;
	_displayTimestamp();
	std::cout << " ";
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "p_amount:" << Account::_amount << ";";
    std::cout << "deposit:" << deposit << ";";
	Account::_amount += deposit;
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "nb_deposits:" << Account::_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << " ";
	if (Account::_amount - withdrawal < 0) {
		std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount;
		std::cout << ";withdrawal:refused";
		std::cout << std::endl;
		return false;
	}
    else 
    {
		Account::_totalNbWithdrawals++;
		Account::_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";";
		Account::_amount -= withdrawal;
		std::cout << "withdrawal:" << withdrawal << ";amount:" << Account::_amount << ";nb_withdrawals:" << Account::_nbWithdrawals;
		std::cout << std::endl;
		return true;
	}
}

void Account::_displayTimestamp(void) {
	time_t	theTime = time(NULL);
	struct	tm *aTime = localtime(&theTime);
	int day = aTime->tm_mday;
	int month = aTime->tm_mon + 1;
	int year = aTime->tm_year + 1900;
	int hour = aTime->tm_hour;
	int minutes = aTime->tm_min;
	int seconds = aTime->tm_sec;
	std::cout << "[" << year;
	if (month < 10) {std::cout << "0" << month;}
	else {std::cout << month;}
	if (day < 10) {std::cout << "0" << day;}
	else {std::cout << day;}
	std::cout << "_";
	if (hour < 10) {std::cout << "0" << hour;}
	else {std::cout << hour;}
	if (minutes < 10) {std:: cout << "0" << minutes;}
	else {std::cout << minutes;}
	if (seconds < 10) {std::cout << "0" << seconds;}
	else {std::cout << seconds;}
	std::cout << "]";

}
