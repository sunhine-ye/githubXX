#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<windows.h>
#include<string.h>



 /* int main(void) {
	double value = 12.123456789;
	 //在默认的情况下，cout输出6位有效数字
	cout << value << endl;
	
	//可以修改输出的精度
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

    

	cout << "其输入您的理想类型：\n" << endl;
	cout << "A：贤惠型" << endl;
	cout << "B:泼辣型" << endl;
	cout << "C:文艺型" << endl;
	cout << "D:运动型" << endl;
	cin >> girltype;

	cout << "请输入您的月收入："<<endl;
	cin >> salary;
	
	cout << "请输入您的身高："<<endl ;
	cin >> ligh;

	cout << "您的理想型是：" << girltype << endl;
	cout << "您的月收入是：" << salary << "元"<<endl;
	cout << "您的身高是：" << ligh << "米" << endl;

	 
	system("pause");
	return 0; 
 }*/
/*int main(void) {
	int a;
	int b;
	int c;

	cout<<"请输入a:";
	cin >> a; 
	if (cin.fail())
	{
		cout << "输入失败，应该输入整数" << endl;
			cin.clear();//清除cin的错误标志
			cin.sync();//清除输入缓冲区
	}

	cout << "a=" << a << endl;
	cout<<"请输入a："

	system("pause");
	return 0;
	}
	*/
/*int main(void) {
	string compellation;

	cout << "《沙雕测试系统》" << endl;
	cout << "请输入需要测试人员的姓名：" << endl;
	cin >> compellation;

	cout << "检测到" << compellation << "是广东第一沙雕儿" << endl;
	system("pause");
		return 0;

}
*/
using namespace std;
int main(void){
	string i;
	int o = 0;
	cout<< "你喜欢的食物是什么？" << endl;
	while (cin >> i) {
		 o = o + 1;
		 cout << "你喜欢的第" << o << "种食物是：" << i << endl;
		

	}
	system("pause");
	return 0;
}