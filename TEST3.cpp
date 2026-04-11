//Описание
//Создайте структуру для хранения адреса.Структура должна содержать название города, улицы, номер дома, номер квартиры и индекс.
//
//Создайте функцию для вывода структуры на консоль.
//
//Протестируйте созданную функцию.Создайте в коде экземпляры структуры, передайте их в функцию и выведите 
// на консоль получившиеся экземпляры структуры.
//
//Пример работы программы
//Город : Москва
//Улица : Арбат
//Номер дома : 12
//Номер квартиры : 8
//Индекс : 123456
//
//Город : Ижевск
//Улица : Пушкина
//Номер дома : 59
//Номер квартиры : 143
//Индекс : 953769
#include<iostream>
void strucFunction(std::string cityName, std::string streetName, int houseNumber, int flatNumber, int index);
struct Adress {
public:
	std::string City{};
	std::string Street{};
	int numberHouse{};
	int numberFlat{};
	int index{};
};
int main(){
	setlocale(LC_ALL, "RUS");
	Adress adress{ "Москва", "Арбат", 20, 2, 119002 };
	Adress adress1{ "Санкт-Петербург", "Невский проспект", 39, 52, 191023 };
	strucFunction(adress.City, adress.Street, adress.numberHouse, adress.numberFlat, adress.index);
	strucFunction(adress1.City, adress1.Street, adress1.numberHouse, adress1.numberFlat, adress1.index);

	return EXIT_SUCCESS;
}
void strucFunction(std::string cityName, std::string streetName, int houseNumber, int flatNumber, int index) {
	std::cout << "Город :" << cityName << std::endl;
	std::cout << "Улица :" << streetName << std::endl;
	std::cout << "Номер дома :" << houseNumber << std::endl;
	std::cout << "Номер квартиры :" << flatNumber << std::endl;
	std::cout << "Индекс :" << index << std::endl << std::endl;

}

