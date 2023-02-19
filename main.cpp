#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>

void build_rectangle(int n, int k); // функция для построения прямоугольника  function for building a rectangle
int factorial(int n);				// функция для вычисления факториала   function for calculating the factorial
void prime_number(int n);			// функция для опредения простоты числа	function for determining the simplicity of a number
void fill_arr(int* arr, const int size, int low, int hi);	// функция для заполнения массива числами из указанного промежутка    function for filling an array with numbers from a specified interval
void print_arr(int* arr, const int size);					// фукнция для распечатки массива     function for printing an array
void max_min_el_arr(int* arr, const int size);				// функция для вывода максимального и минимального элемента массива и их индексов a function for displaying the maximum and minimum elements of an array and their indexes
void reverse_arr(int* arr, const int size);					// функция для разворота массива    function for the reversal of the array

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	srand(time(NULL));
	// Задача 1.
	/*
	Написать функцию, выводящую на экран прямоугольник с высотой N и шириной K.
	Write a function that displays a rectangle with height N and width K.
	*/
	int N, K;
	/*std::cout << "A program for displaying a rectangle with height N and width K.\n";
	std::cout << "Enter the height of the rectangle -> ";
	std::cin >> N;
	std::cout << "Enter the width of the rectangle -> ";
	std::cin >> K;
	build_rectangle(N, K);*/


	// Задача 2.
	/*
	Написать функцию, вычисляющую факториал переданного ей числа.
	Write a function that calculates the factorial of the number passed to it.
	*/
	/*std::cout << "A program for calculating the factorial of the entered number.\n";
	std::cout << "Enter a number -> ";
	std::cin >> N;

	std::cout << "!" << N << " = " << factorial(N) << '\n';*/


	// Задача 3.
	/*
	Написать функцию, которая проверяет, является ли
	переданное ей число простым? Число называется простым,
	если оно делится без остатка только на себя и на единицу.
		Write a function that checks whether
	the number passed to it is prime? A number is called prime
	if it is divisible without remainder only by itself and by one.
	*/
	/*std::cout << "A program to determine whether the entered number is prime.\n";
	std::cout << "Enter number -> ";
	std::cin >> N;
	prime_number(N);*/


	// Задача 4.
	/*
		Написать функцию, определяющую минимум и максимум
	(значение и номер) элементов передаваемого ей массива.
		Write a function defining the minimum and maximum
	(value and number) of the elements of the array passed to it.
	*/
	/*std::cout << "A program for determining the maximum and minimum elements of an array and their indexes.\n";
	
	const int size = 10;
	int arr[size];
	int hi = 20;
	int low = 10;
	std::cout << "Array:\n";
	fill_arr(arr, size, 10, 20);
	print_arr(arr, size);
	max_min_el_arr(arr, size);*/

	// Задача 5.
	/*
		Написать функцию, меняющую порядок следования
	элементов передаваемого ей массива на противоположный.
		Write a function that changes the order of
	the elements of the array passed to it to the opposite.
	*/
	const int size1 = 10;
	int arr1[size1];
	int hi1 = 50;
	int low1 = 1;
	std::cout << "Array:\n";
	fill_arr(arr1, size1, low1, hi1);
	print_arr(arr1, size1);
	reverse_arr(arr1, size1);
	print_arr(arr1, size1);
	return 0;
}

void reverse_arr(int* arr, const int size) {
	for (int i = 0; i <= size/2; ++i) {
		int tmp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = tmp;
	}
}

void max_min_el_arr(int* arr, const int length) {
	int max = *arr;
	int min = *arr;
	int max_index = 0;
	int min_index = 0;
	for (size_t i = 0; i < length; i++){
		if (max < arr[i]) {
			max = arr[i];
			max_index = i;
		}
		if (min > arr[i]) {
			min = arr[i];
			min_index = i;
		}
	}
	std::cout << "Maximum array element -> " << max << " with index " << max_index << '\n';
	std::cout << "Minimum array element -> " << min << " with index " << min_index << '\n';
}

void print_arr(int* arr, const int size) {
	std::cout << "[ ";
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b ]\n";
}

void fill_arr(int* arr, const int size, int low, int hi) {
	for (int i = 0; i < size; ++i) {

		arr[i] = rand() % (hi + 1 - low) + low;

	}
}

void prime_number(int n) {
	for (int i = 2; i <= n / 2; ++i) {
		if (n % i == 0) {
			std::cout << "The number " << n << " is not simple.\n";
			return;
		}
	}
	std::cout << "The number " << n << " is simple.\n";
	return;
}

int factorial(int n) {
	if (n == 0) return 1;
	if (n == 1) return 1;
	return factorial(n - 1) * n;
}

void build_rectangle(int n, int k) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < k; ++j) {
			if (i == 0 || i == n - 1)
				std::cout << '*';
			else if (j == 0 || j == k - 1)
				std::cout << '*';
			else
				std::cout << ' ';
		}
		std::cout << '\n';
	}
}