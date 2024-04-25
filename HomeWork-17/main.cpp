#include <iostream>
#include <cmath>


double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}

template <typename T>
T print_arr(T arr[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return (double)sum / length;
}


void powers(int num1, int num2) {
	int result = 0;
	do {
		std::cout << pow(num1, result) << ", ";
		result++;

	} while (num2 >= result);

}


void positive_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0)
			arr[i] = -arr[i];

		std::cout << arr[i] << ", ";

	}

}










int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	// Задача 1. Среднее арифметическое.
	std::cout << "Введите первое число -> ";
	std::cin >> n;
	std::cout << "Введите второе число -> ";
	std::cin >> m;
	std::cout << "Среднее арифметическое чисел " << n << " и " << m << " = " << mean(n, m) << std::endl;
	// Задача 2.Массив
	std::cout << "\n\nЗадача 2\n\n";
	std::cout << "Массив:\n";
	const int size = 5;
	double arr[size]{ 5, 14, 7, 44, 25 };
	std::cout << "{ ";
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";

	std::cout << "Среднее ариметическое массива = " << print_arr(arr, size) << std::endl;
	//Задача 3;
	std::cout << "\n\nЗадача 3\n\n";
	int N, M;
	std::cout << "Введите число -> ";
	std::cin >> N;
	std::cout << "Введите степень ->";
	std::cin >> M;
	std::cout << "Степени числа " << N << " от 0 до " << M << std::endl;
	powers(N, M);

	//Задача 4
	std::cout << "\n\nЗадача 4\n\n";

	const int size2 = 10;
	int arr2[size2]{ 5, -2, 14, -26, -4, 5, 7, 21, 17, -31 };
	std::cout << "Массив до изменения ";
	std::cout << "{ ";
	for (int i = 0; i < size2; i++)
		std::cout << arr2[i] << ", ";
	std::cout << "\b\b }\n";
	std::cout << "Массив после изменения -> ";
	positive_arr(arr2, size2);
















	return 0;
}
