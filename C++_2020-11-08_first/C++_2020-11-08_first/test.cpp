////A -> B -> C ->(������)-> C++ -> C#
//
////class, ���ø�, ���, ĸ��ȭ
////c++������
#include <iostream> //c++ ���� ������� .h ���ʿ� ����
//#include "head.h"
//
//
//class MyClass1
//{
//public:
//	MyClass1();
//	~MyClass1();
//
//	int inin = 0;
//
//private:
//
//};
//
//MyClass1::MyClass1()
//{
//}
//
//MyClass1::~MyClass1()
//{
//}
//
//MyClass1 cls;
//
//MyClass Class1;
//
//using namespace std; //���ӽ����̽��� std�� ������� �ʰڴ�
//
//namespace Space1
//{
//	int val1;
//}
//
//using namespace Space1; //���ӽ����̽� Space1 ������� �ʰڴ�
//
////����Ʈ ����
//namespace Space0
//{
//	namespace Space
//	{
//		int val0;
//	}
//}
//
//
////�Ʒ� �� �Լ��� ���ڰ� �޶� ���� �ٸ� �Լ��̴� : �Լ� �����ε�
//void Add(int x, int y)
//{
//	printf("�Լ�1\n");
//}
//
//void Add(float x, float y)
//{
//	printf("�Լ�2\n");
//}
//
//void main()
//{
//	cout << cls.inin << endl;
//
//	Class1.Print(); //Print ���
//
//
//	Add(1, 1); //�Լ�1 ���
//	Add(1.f, 1.3f); //�Լ�2 ���
//
//	Space0::Space::val0;
//	printf("Hello World\n"); // c,c++ Hello World
//	std::cout << "Hello World" << std::endl; // c++ Hello World
//	cout << "Hello World" << endl; // std ���� (�� ���ӽ����̽�)
//
//	float val = 5.5f;
//	printf("���ڴ� %f�Դϴ�\n", val); //c �������
//	cout << "���ڴ� " << val << "�Դϴ�" << endl; //c++ �������, c�� ���� ������ ����
//	cout << "���ڴ� " << (int)val << "�Դϴ�" << endl; //c++ ����ȯ
//
//	int value;
//	int value2;
//	printf("C �Է��� ���� : ");
//	scanf_s("%d", &value); // c ���� �Է¹ޱ�
//	printf("%d\n", value);
//
//	cout << "C++ �Է��� ���� : ";
//	cin >> value >> value2; // c++ ���� �Է¹ޱ�, >>���̸� ��� �ٸ����� �Է� ����
//	cout << value << " / " << value2 << endl;
//
//	int val1 = 5; // �������� val1
//	Space1::val1 = 10; // Space ���ӽ����̽� ���� val1
//	cout << "Space1�� val1 : " << Space1::val1 << endl;
//	//cout << "Space1�� val1 : " << ::val1 << endl; // ���ӽ����̽��� Space1 ������� �ʾƵ� ���� ����
//	cout << "���������� val1 : " << val1 << endl;
//}