#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int arr[10], mom, a = 0;
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100 + 1;
		if (a == arr[i]) {
			arr[i] -= 1;
		}
		a = arr[i];
		cout << arr[i] << "|";
	}
	cout << endl << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i] > arr[j]) {
				mom = arr[i];
				arr[i] = arr[j];
				arr[j] = mom;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "|";
	}
	cout << endl;
}