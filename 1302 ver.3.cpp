#include <iostream>
#include <vector>
using namespace std;

long long int factorial(int N)
{
	long long int factorial_N = 1;
	vector <int> numbers_to_N;


	if (N < 0 || N > 20)
	{
		cout << endl << "Цей код не може рахувати від'ємні числа або числа більше 20." << endl;
		return 0;
	}

	if (N == 0)
	{
		cout << endl << "Числа які використовуються для знаходження факторіала числа " << N << " - [ 1 ]";
		cout << endl << endl << "Факторіал числа " << N << " = " << factorial_N << endl;
	}

	if (N >= 1 && N <= 20)
	{
		cout << endl << "Числа які використовуються для знаходження факторіала числа " << N << " - [ ";

		for (int a = 1; a <= N; a++)
		{
			numbers_to_N.push_back(a);
			cout << numbers_to_N[a - 1] << " ";
			factorial_N *= numbers_to_N[a - 1];
		}
		cout << "]" << endl << endl << "Факторіал числа " << N << " = " << factorial_N << endl;
	}
	return factorial_N;
}
int main(int N)
{
	system("chcp 1251 > nul");

	cout << "Ця програма рахує факторіал введеного числа." << endl << endl;
	cout << "Введіть натуральне число від 0 до 20: ";
	cin >> N;
	factorial(N);
	return 0;
}