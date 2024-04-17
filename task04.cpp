﻿#include "tasks.h"

/*	Task 04. Chess & Queen [шахматный ферзь]
*
*	Шахматный ферзь (chess queen) ходит по диагонали, горизонтали или вертикали.
*	Даны две различные клетки шахматной доски, определите,
*	может ли ферзь попасть с первой клетки на вторую одним ходом.
*
*	Примечание
*	1) Чтобы увидеть решение и разработать алгоритм, нарисуйте себе шахматную доску
*	и поставьте в клетках соответствующие координаты x и y.
*	2) Не забудьте "защиту от дурака". Если пользователь задаёт неверные коориднаты клеток,
*	то функция должна возвратить булевское значение false.
*	3) Для решения достаточно использовать арифметические операции, операции отношения,
*	логические операции и условную операцию (?:).
*
*	Формат входных данных [input]
*	Функция принимает на вход четыре числа от 1 до 8 каждое, задающие номер столбца
*	и номер строки сначала для первой клетки (x1, y1), а потом для второй клетки (x2, y2).
*
*	Формат выходных данных [output]
*	Функция должна возвратить булевское значение - результат решения.
*
*	[ input 1]: 4 4 5 5
*	[output 1]: true
*
*	[ input 2]: 4 4 5 8
*	[output 2]: false
*/

bool task04(int x1, int y1, int x2, int y2) {
	return x1 > 0 && x1 < 9 && x2 > 0 && x2 < 9 && y1 > 0 && y1 < 9 && y2 > 0 && y2 < 9
		&& !(x1 == x2 && y1 == y2) && 
		(x1 == x2 || y1 == y2 || abs(x2 - x1) == abs(y2 - y1) || x1 + y1 == x2 + y2);
}
