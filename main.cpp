#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>

void build_rectangle(int n, int k); // ������� ��� ���������� ��������������
int factorial(int n);				// ������� ��� ���������� ����������
void prime_number(int n);			// ������� ��� ��������� �������� �����
void fill_arr(int* arr, const int size, int low, int hi);	// ������� ��� ���������� ������� ������� �� ���������� ����������
void print_arr(int* arr, const int size);					// ������� ��� ���������� �������
void max_min_el_arr(int* arr, const int size);				// ������� ��� ������ ������������� � ������������ �������� ������� � �� ��������
void reverse_arr(int* arr, const int size);					// ������� ��� ��������� �������

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); // ��������� ������� �������� �� ���� ������
	srand(time(NULL));
	// ������ 1.
	/*
	�������� �������, ��������� �� ����� ������������� � ������� N � ������� K.
	*/
	int N, K;
	/*std::cout << "��������� ��� ������ �� ����� �������������� ������� N � ������� K.\n";
	std::cout << "������� ������ �������������� -> ";
	std::cin >> N;
	std::cout << "������� ������ �������������� -> ";
	std::cin >> K;
	build_rectangle(N, K);*/


	// ������ 2.
	/*
	�������� �������, ����������� ��������� ����������� �� �����.
	*/
	/*std::cout << "��������� ��� ������� ���������� ��������� �����.\n";
	std::cout << "������� ����� -> ";
	std::cin >> N;

	std::cout << "!" << N << " = " << factorial(N) << '\n';*/


	// ������ 3.
	/*
	�������� �������, ������� ���������, �������� ��
	���������� �� ����� �������? ����� ���������� �������,
	���� ��� ������� ��� ������� ������ �� ���� � �� �������.
	*/
	/*std::cout << "��������� ��� ����������� �������� �� �������� ����� �������.\n";
	std::cout << "������� ����� -> ";
	std::cin >> N;
	prime_number(N);*/


	// ������ 4.
	/*
		�������� �������, ������������ ������� � ��������
	(�������� � �����) ��������� ������������� �� �������
	*/
	/*std::cout << "��������� ��� ����������� ������������� � ������������ ��������� ������� � �� ��������.\n";
	
	const int size = 10;
	int arr[size];
	int hi = 20;
	int low = 10;
	std::cout << "������:\n";
	fill_arr(arr, size, 10, 20);
	print_arr(arr, size);
	max_min_el_arr(arr, size);*/

	// ������ 5.
	/*
		�������� �������, �������� ������� ����������
	��������� ������������� �� ������� �� ���������������.
	*/
	const int size1 = 10;
	int arr1[size1];
	int hi1 = 50;
	int low1 = 1;
	std::cout << "������:\n";
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
	std::cout << "������������ ������� ������� -> " << max << " c �������� " << max_index << '\n';
	std::cout << "����������� ������� ������� -> " << min << " c �������� " << min_index << '\n';
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
			std::cout << "����� " << n << " �� �������.\n";
			return;
		}
	}
	std::cout << "����� " << n << " �������.\n";
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