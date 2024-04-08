#include <iostream>
#include "Manager.h"

int main() {
	Student st1{ "Alex", 14, 9 };
	Student st2{ "Alice", 13, 7 };
	Student st3{ "Roma", 15, 10 };
	Student st4{ "Matvey", 14, 8 };
	Student st5{ "Alexey", 14, 6 };

	const int size = 5;
	Student students[]{ st1, st2, st3, st4, st5 };

	Manager manager;

	cout << "Best mark is " << manager.getMaxMark(students, size);

	cout << "Worst mark is " << manager.getMinMark(students, size);

	Student best = manager.getBestStudant(students, size);
	cout << "First best student is " << best.convert() << endl;

	

	return 0;
}
