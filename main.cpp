#include <iostream>
#include <cstdlib>
#include "��.h"

using namespace std;

int main()
{
	void display(char qipan[][3]);

	char qipan[3][3] = { {'O','_','_'} ,{'_','_','_'} ,{'_','_','_'} };
	start:
	cout << "����1������Ϸ" << endl;
	cout << "����2�鿴ʹ��˵��" << endl;
	int x = 0;
	cin >> x;
	system("cls");
	if (x == 1) {
		int step = 1;
		display(qipan);
		while (true) {
			int x = 0, y = 0;
			cout << "\n�ֵ���Ļغ��ˣ�" << endl;
			cin >> x >> y;
			if (qipan[x - 1][y - 1] == '_') {
				step += 2;

				qipan[x - 1][y - 1] = 'X';
				int w = whowin(qipan);
				if (w == 1) {
					system("cls");
					display(qipan);
					goto jite; 
				}
				putPiece(qipan);
			}
			else {
				cout << "������������������ӣ�����س�������" << endl;
				getchar();
				getchar();
			}
			system("cls");
			display(qipan);
			if (whowin(qipan) == 1) {
				jite:
				cout << "��Ӯ����" << endl;
				getchar();
				getchar();
				return 0;
			}
			else if (whowin(qipan) == 2) {
				cout << "��������" << endl;
				getchar();
				getchar();
				return 0;
			}
			else {
				if (step != 9) continue;
				else {
					cout << "������������" << endl;
					getchar();
					getchar();
					return 0;
				}
			}
		}

	}
	else if (x == 2) {
		cout << "����˵��:" << endl;
		cout << "���ڱ������Ҳ�̫����c++��ǰ�˿������ʴ˳������С�ڿ�ͨ�����̽��г��򻥶�" << endl;
		cout << "���������Уacm��������һ���㷨�������������У���ʵ�ֵ�һ��С��Ϸ����\n" << endl;
		cout << "����ָ��" << endl;
		cout << "ͨ��������������ȷ���Լ������ӵ�λ�ã���������ǰ���������ں�����ԭ��Ϊ���������Ͻǵĸ���" << endl;
		cout << "����ϷΪ��ai�ĵ�����Ϸ������������" << endl;
		cout << "����س��˻ر���" << endl;
		getchar();
		getchar();
		system("cls");
		goto start;
	}
	else {
		cout << "���ɶ���ҿ�������" << endl;
		cout << "����س��˻ر���" << endl;
		getchar();
		getchar();
		system("cls");
		goto start;
	}
}

void display(char qipan[][3]) {
	for (int I = 0; I < 3; I++) {
		for (int i = 0; i < 3; i++) {
			cout << qipan[I][i] << ' ';
		}
		cout << endl;
	}
}
