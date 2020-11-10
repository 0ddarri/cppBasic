#pragma once
struct MyStruct //c 구조체
{
	int n;
	char c;
};

using namespace std;

class MyClass // c++ 클래스, 구조체랑 이름 겹치면 안된다
{
public: // 모든 곳에서 사용 가능
	MyClass(); //생성자, 클래스 이름 그대로, 클래스 선언될 때, 무조건 public 안에
	~MyClass(); //소멸자, 클래스 이름에 물결, 무조건 public 안에

	int a; // 변수선언 가능

	void Print();

//여기까지가 public 영역
private: // 이 클래스 내에서만 사용 가능, 외부에서 사용할 시 에러

protected:

};

void MyClass::Print() // 클래스 안에 선언된 Print()
{
	cout << "a : " << a << endl; // 클래스 안에 있는 a를 호출
}

MyClass::MyClass() //변수선언될 시 자동호출
{
	cout << "생성자" << endl;
	a = 10;
}

MyClass::~MyClass() // 프로그램이 꺼지거나 반환할 때 호출
{
	cout << "소멸자" << endl;
}


