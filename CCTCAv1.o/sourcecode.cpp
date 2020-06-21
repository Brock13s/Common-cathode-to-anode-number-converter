#include <iostream>
using namespace std;

unsigned int oldrgb[2];
unsigned int newrgb[2];
char clear;

void clearscreen() {
	for (int a = 0; a < 50; a++) {
		cout << endl;
	}
}

int main()
{
	while (true) {
		cout << "Enter the common cathode value to get converted to anode value (Maximum number: 255)" << endl;
		cout << " " << endl;
		while (true) {
			cout << "Enter R value  "; cin >> oldrgb[0]; if (oldrgb[0] > 255) { cout << "WARNING: High number max 255. "; }
			if (oldrgb[0] < 255) {
				break;
			}
		}
		while (true) {
			cout << "Enter G value  "; cin >> oldrgb[1]; if (oldrgb[1] > 255) { cout << "WARNING: High number max 255. "; }
			if (oldrgb[1] < 255) {
				break;
			}
		}
		while (true) {
			cout << "Enter B value  "; cin >> oldrgb[2]; if (oldrgb[2] > 255) { cout << "WARNING: High number max 255. "; }
			if (oldrgb[2] < 255) {
				break;
			}
		}


			newrgb[0] = 255 - oldrgb[0];
			newrgb[1] = 255 - oldrgb[1];
			newrgb[2] = 255 - oldrgb[2];

			cout << " " << endl;
			cout << " " << endl;

			cout << "Anode R value: " << newrgb[0] << endl;
			cout << "Anode G value: " << newrgb[1] << endl;
			cout << "Anode B value: " << newrgb[2] << endl;

			cout << " " << endl;
			while (true) {
				cout << "Clear screen? (y or n)  ";
				cin >> clear;
				if (clear == 'y') {
					clearscreen();
					break;
				}
				else if (clear == 'n') {
					break;
				}
				if (clear != 'y') {
					cout << "Error you typed something wrong (y or n lowercase)";
				}

				else if (clear != 'n') {
					cout << "Error you typed something wrong (y or n lowercase)";
				}
			}
	}
}
