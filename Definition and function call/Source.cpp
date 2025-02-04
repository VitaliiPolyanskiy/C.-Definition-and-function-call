﻿#include <iostream>

using namespace std;

// Определение функции Function1.
void Function1()
{
	cout << "This function does not return anything and does not receive any parameters." << endl;
}

// Определение функции Function2.
void Function2()
{
	for (int i = 0; i < 10; i++)
	{
		cout << i << "  ";
	}
	cout << endl;
}

int main()
{
	/*
	Функция - это группа операторов, у которой есть имя.

	Функция должна быть объявлена до своего использования, поэтому функции объявляются до главной
	функции main.

	Синтаксис объявления функции:
	возвращаемое_значение имя_функции(параметры)
	{
	тело_функции;
	}
	возвращаемое_значение - результат работы функции. На место возвращаемого значения
	подставляется любой из базовых типов. Это тип тех данных, которые функция подставит на
	место своего вызова в программе.
	имя_функции - любое имя, которое подчиняется "правилам именования переменных".
	параметры - входные данные, которые необходимы функции для работы над кодом. В качестве
	параметров используют обычные переменные, указывая для каждого параметра его тип данных.
	Если функция не нуждается во входных данных, скобки следует оставить пустыми.

	Нельзя создавать одну функцию внутри другой.

	Нельзя вызвать функцию до ее объявления.

	Синтаксис вызова функции:
	имя_переменной = имя_функции(параметры);
	имя_переменной - переменная, в которую будет записан результат выполнения функции, если она
	возвращает какое-либо значение.
	имя_функции - имя функции, которую необходимо вызвать.
	параметры - входные данные, которые необходимы функции для работы над кодом.
	*/
	// Вызов функции Function1.
	Function1();

	cout << endl;

	// Вызов функции Function2.
	Function2();

	return 0;
}