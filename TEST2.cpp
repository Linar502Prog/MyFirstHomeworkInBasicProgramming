#include<iostream>
#include<Windows.h>
struct Information {
public:
	int cardNumber{};
	std::string Name{};
	double cash{};
};
void newBalance(Information& information, double userMoney) {
	information.cash = userMoney;
}
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Information information{5031082,"Linar", 100 };
	int userCardNumber;;
	std::string userName;
	double userMoney;
	std::cout << "Ââåäèòå íîìåð ñ÷¸òà :";
	std::cin >> userCardNumber;
	std::cout << "Ââåäèòå èìÿ âëàäåëüöà :";
	std::cin >> userName;
	std::cout << "Ââåäèòå áàëàíñ :";
	std::cin >> userMoney;
	newBalance(information,userMoney);
	std::cout << "Âàø ñ÷åò: " << information.Name << ", " << information.cardNumber << ", " << information.cash << std::endl;

	return EXIT_SUCCESS;
}
