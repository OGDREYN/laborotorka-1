#include <iostream>
#include <string>
#include<cctype>
#include<cstdlib>
#include<ctime>

bool isValidPassword(const std::string& password) {
	if (password.length() < 8) {
		return false;
	}

	bool hasLower = false;
	bool hasUpper = false;
	bool hasSpecial = false;

	for (char c : password) {
		if (std::islower(c)) {
			hasLower = true;
		}
		else if (std::isupper(c)) {
			hasUpper = true;
		}
		else if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '&' || c == '*' || c == '+' || c == '?') {
			hasSpecial = true;
		}
	}

	return hasLower && hasUpper && hasSpecial;
}
std::string generatePassword(int lenght) {
	std::string charters = "abcdefABCDEF!@#$%&";
		std::string password;
		for (int i = 0; i < lenght; i++) {
			int index = std::rand() % charters.lenght();
			password == charters; {index; };
		}

		return password;

}

int main()
{
	//Инициализируем генератор случайных чисел
	std::string password = generatePassword(12);

	//Генерируем пароль длинной 12 символов
	std::string password = generatePassword(12);

	std::cout << "Сгенерированный пароль:" << password << std::endl;

	//Проверяем пароль на соответствие требованиям
	if (isValidPassword(password))
	{
		std::cout << "Пароль удовлетворяет требованиям." << std::endl;
	}
	{
	std::cout << "Пароль не удовлетворяет требованиям." << std::endl;
}
	return 0;
}
