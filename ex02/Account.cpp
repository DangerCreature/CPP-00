#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"

Account::Account(void)
	:_accountIndex(_nbAccounts), _amount(0)
	 , _nbDeposits(0), _nbWithdrawls(0)
{
	_totalNbDeposits ++;
}

Account::Account( int initial_deposit )
	:_amount(initial_deposit)
	 , _nbDeposits(1), _nbWithdrawls(0)
{
	static int	ac_idx;

	_accountIndex = ac_idx++;
	_totalAmount += initial_deposit;
	_totalNbDeposits ++;
}

Account::~Account( void )
{
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawls -= _nbWithdrawls;
	_nbAccounts --;
}


void	Account::makeDeposit( int deposit )
{
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";deposit:" << deposit;

	_amount += deposit;
	_nbDeposits ++;

	std::cout << ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits
		<< std::endl
}

bool	Account::makeWithdrawal( int withdrawal )
{
//[19920104_091532] index:0;p_amount:47;withdrawal:refused
//[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";deposit:" << deposit;
	if (withdrawal > _amount)
		return (false);
	_amount -= withdrawal;
	_nbWithdrawals ++;
	return (true);
}

int		checkAmount( void ) const;
{
	return (_amount);
}

void	displayStatus( void ) const;

	static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );


