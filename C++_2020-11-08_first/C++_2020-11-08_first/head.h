#pragma once
struct MyStruct //c ����ü
{
	int n;
	char c;
};

using namespace std;

class MyClass // c++ Ŭ����, ����ü�� �̸� ��ġ�� �ȵȴ�
{
public: // ��� ������ ��� ����
	MyClass(); //������, Ŭ���� �̸� �״��, Ŭ���� ����� ��, ������ public �ȿ�
	~MyClass(); //�Ҹ���, Ŭ���� �̸��� ����, ������ public �ȿ�

	int a; // �������� ����

	void Print();

//��������� public ����
private: // �� Ŭ���� �������� ��� ����, �ܺο��� ����� �� ����

protected:

};

void MyClass::Print() // Ŭ���� �ȿ� ����� Print()
{
	cout << "a : " << a << endl; // Ŭ���� �ȿ� �ִ� a�� ȣ��
}

MyClass::MyClass() //��������� �� �ڵ�ȣ��
{
	cout << "������" << endl;
	a = 10;
}

MyClass::~MyClass() // ���α׷��� �����ų� ��ȯ�� �� ȣ��
{
	cout << "�Ҹ���" << endl;
}


