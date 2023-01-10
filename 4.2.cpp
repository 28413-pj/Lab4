#include <iostream>
#include <vector>
using namespace std;
int naj = 0;
int najcz = 0;
int count = 0;

int main()

{
	int wiel;
	cout << "Podaj wielkosc tablicy: ";
	cin >> wiel;
	vector<int> arr(wiel);

	for (int i=0; i<wiel; i++) {
		cout << "Podaj wartosc do tablicy: ";
		cin >> arr[i];
	}


	for (int j=0; j < wiel; j++) {
		for (int k = 0; k < wiel; k++) {
			if (arr[j] == arr[k]) {
				count++;
			}
			if (count > naj) {
				naj = count;
				najcz = arr[j];
			}
		}
	}
	cout << "Najczęstszy element tablicy to: " << najcz;
}
