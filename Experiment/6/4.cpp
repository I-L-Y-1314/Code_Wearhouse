#include <iostream>
using namespace std;

int main() {
	char str[500];
	int num = 0, i; //
	int ln;            //ln��¼����
	int longest_num = 0;   //����ʵĳ���
	int longest_seat = 0;      //����ʵ�λ��
	int lseat = 0;             //����λ�ò�
	cin.getline(str, 500);
	
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			num++;
			ln = i - 1 - lseat;
			if (ln > longest_num) {
				longest_num = ln;
				longest_seat = lseat;
			}
			lseat = i;
		}
	}
	cout << num + 1 << ' ';
	for (i = longest_seat; i <= (longest_num + longest_seat); i++)
		cout << str[i];
	cout << endl;
	return 0;
}