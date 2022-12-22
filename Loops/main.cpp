#include<iostream>
using namespace std;

//#define FACTORIAL
//#define STEPEN
//#define ASCII_TABLE
//#define FIBONACCI_2
//#define PRIME_NUM
//#define FIBONACCI_1_1
//#define FIBONACCI_2_2
//#define PRIME_NUM_1
//#define FACTORIAL_1
//#define STEPEN_1
//#define ASCII_TABLE_1
//#define MULT_TABLE
//#define PYTHAGORAS_1
//#define CLOCK


void main()
{
	setlocale(LC_ALL, "");

	// Задание 1
#ifdef FACTORIAL
	int i = 1, fact = 1, n;
	cout << "Введите число: "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		fact *= i;
	}
	cout << "Факториал числа " << n << "=" << fact << endl;
#endif // FACTORIAL

	// Задание 2

#ifdef STEPEN
	int num, degr, res = 1;
	cout << "Введите число, которое будете возводить в степень: "; cin >> num;
	cout << "Введите степень: "; cin >> degr;
	if (degr < 0)
	{
		for (int i = degr; i < 0; i++)
		{
			res *= 1 / num;
		}

	}
	else
	{
		for (int i = 0; i < degr; i++)
			res *= num;
	}
	cout << "Ответ: " << res << endl;
#endif // STEPEN

	// Задание 3

#ifdef ASCII_TABLE
	char symbol = 0;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			cout << symbol++ << " ";
		}
		cout << endl;
	}

#endif // ASCII_TABLE

	// Задание 4

	// Задание 5

#ifdef FIBONACCI_2
	int num, fib1 = 0, fib2 = 1, fib_sum;
	cout << "Введите число: "; cin >> num;
	for (int i = 0; i < num - 1; i++)
	{
		if (i == 0)
		{
			fib_sum = 1;
		}
		else
		{
			fib_sum = fib1 + fib2;
			fib1 = fib2;
			fib2 = fib_sum;
		}
		cout << fib2 << "\t";
	}
	cout << "Фибоначчи числа: " << num << "=" << fib2 << endl;
#endif // FIBONACCI_2

	// Задание 6

#ifdef PRIME_NUM
	int x;
	cout << "Введите число: "; cin >> x;

	for (int i = 2; i <= x; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{


			}
		}

	}
#endif // PRIME_NUM

#ifdef FACTORIAL_1
	int n;
	double f = 1;
	cout << "Введите число "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "!=";
		f *= i;
		cout << f << endl;;
	}
	cout << endl;
#endif // FACTORIAL_1

#ifdef STEPEN_1
	double a; // Основание степени
	int n; // Показатель степени
	double N = 1; // Степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени:"; cin >> n;
	cout << a << "^" << n << "=";
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;

#endif // STEPEN_1

#ifdef ASCII_TABLE_1
	cout << "Таблица ASCII-символов: \n";
	setlocale(LC_ALL, "C"); // Устанавливает кодировку по умолчанию

	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";

	}
	cout << endl;
	setlocale(LC_ALL, " ");
	cout << "Вот и сказочке конец " << endl;
#endif // ASCII_TABLE_1

#ifdef FIBONACCI_1_1
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI_1_1

#ifdef PRIME_NUM_1
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true; // Изначально предположим, что число простое
		//но это нужно проверить:
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}

	cout << endl;
#endif // PRIME_NUM_1
	
#ifdef MULT_TABLE
		for (int i = 1; i <= 10; i++)
		{
			for (int j = 1; j <= 10; j++)
			{
				cout << i << "*" << j << "=" << i * j << endl;
			}
		}
#endif // MULT_TABLE

#ifdef PYTHAGORAS_1
		for (int i = 1; i <= 10; i++)
		{
			for (int j = 1; j <= 10; j++)
			{
				cout << i * j << "\t";
			}
			cout << endl;

		}
#endif // PYTHAGORAS_1

#ifdef CLOCK
		for (int h = 0; h < 24; h++)
		{
			for (int m = 0; m < 60; m++)
			{
				for (int s = 0; s < 60; s++)
				{
					system("CLS");
					cout << h << ":" << m << ":" << s << endl;
					Sleep(50);
				}
			}
		}
#endif // CLOCK
		
	}





