#include<iostream>
#include<Windows.h>
struct Information {
public:
	int cardNumber{};
	std::string Name{};
	double cash{};
};
double newBalance(int cardNumber, double& last_balance) {
	std::cout << "¬ведите новый баланс :";
	std::cin >> last_balance;
	return last_balance;
}
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Information information{5031082,"Linar", 100 };
	int userCardNumber;;
	std::string userName;
	double userMoney;
	std::cout << "¬ведите номер счЄта :";
	std::cin >> userCardNumber;
	std::cout << "¬ведите им€ владельца :";
	std::cin >> userName;
	std::cout << "¬ведите баланс :";
	std::cin >> userMoney;
	information.cash = newBalance(userCardNumber,userMoney);
	std::cout << "¬аш счет: " << information.Name << ", " << information.cardNumber << ", " << userMoney<< std::endl;

	return EXIT_SUCCESS;
}