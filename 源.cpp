#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<windows.h>
#include<string.h>



 /* int main(void) {
	double value = 12.123456789;
	 //��Ĭ�ϵ�����£�cout���6λ��Ч����
	cout << value << endl;
	
	//�����޸�����ľ���
	cout.precision(10);
	cout << value << endl;

	system("pause");
	return 0;
}
*/
/*int main(void) {
	char girltype;
	int salary;
	double ligh;

    

	cout << "�����������������ͣ�\n" << endl;
	cout << "A���ͻ���" << endl;
	cout << "B:������" << endl;
	cout << "C:������" << endl;
	cout << "D:�˶���" << endl;
	cin >> girltype;

	cout << "���������������룺"<<endl;
	cin >> salary;
	
	cout << "������������ߣ�"<<endl ;
	cin >> ligh;

	cout << "�����������ǣ�" << girltype << endl;
	cout << "�����������ǣ�" << salary << "Ԫ"<<endl;
	cout << "��������ǣ�" << ligh << "��" << endl;

	 
	system("pause");
	return 0; 
 }*/
/*int main(void) {
	int a;
	int b;
	int c;

	cout<<"������a:";
	cin >> a; 
	if (cin.fail())
	{
		cout << "����ʧ�ܣ�Ӧ����������" << endl;
			cin.clear();//���cin�Ĵ����־
			cin.sync();//������뻺����
	}

	cout << "a=" << a << endl;
	cout<<"������a��"

	system("pause");
	return 0;
	}
	*/
/*int main(void) {
	string compellation;

	cout << "��ɳ�����ϵͳ��" << endl;
	cout << "��������Ҫ������Ա��������" << endl;
	cin >> compellation;

	cout << "��⵽" << compellation << "�ǹ㶫��һɳ���" << endl;
	system("pause");
		return 0;

}
*/
using namespace std;
int main(void){
	string i;
	int o = 0;
	cout<< "��ϲ����ʳ����ʲô��" << endl;
	while (cin >> i) {
		 o = o + 1;
		 cout << "��ϲ���ĵ�" << o << "��ʳ���ǣ�" << i << endl;
		

	}
	system("pause");
	return 0;
}