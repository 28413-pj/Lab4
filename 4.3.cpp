#include <iostream>

using namespace std;

int main()
{
	int tab[10][10];
	for (int i = 0; i < 10; i++) {
		tab[i][0] = i;
		tab[i][1] = i+ i;
		tab[i][2] = i* i;
		tab[i][3] = i+ 3;
		tab[i][4] = i- 4;
	for (int a = 5; a < 10; a++) {
		tab[i][a] = 0;
			}
	}
	for (int k = 0; k < 10; k++) {
		for (int l = 0; l < 10; l++) {
			cout << tab[k][l] << " ";
		}
		cout << endl;
	}
}
