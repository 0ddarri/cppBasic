#include <iostream>

using namespace std;


//parents
//부모 클래스
class Unit
{
public: //캡슐화 : 캡슐처럼 하나로 묶어두는 것
	Unit();
	~Unit();

	int x;
	int y;
	int speed;
	int attack;

	virtual void draw() = 0;//가상함수, 자식 클래스에서도 변경 가능하게 해줌, 보호수준은 꼭 같은 곳에 다시 써줄 것 , = 0 붙여주면 순수 가상함수가 됨.
	// 순수 가상함수 : 안이 비어있음, 자식계층에서 무조건 구현해야 함, Unit에선 함수 안에 내용 적으면 안됨, 자식에서 적을 것
	//
	//void draw() override;  -> 2번 방법

private:

protected: // 상속된 클래스에서만 사용 가능
	int a;
};


Unit::Unit()
{
	x = 5;
	y = 5;
	speed = 1;
	attack = 1;
	cout << "Unit 생성자" << endl;

}

Unit::~Unit()
{
	cout << "Unit 소멸자" << endl;
}

//children
//자식 클래스
class Hero : public Unit // Hero가 Unit 상속, 변수 뿐만 아니라 다 받아옴
{
public:
	Hero();
	~Hero();

	virtual void draw();

private:

};

void Hero::draw()
{
	//Unit::draw(); //함수 오버라이드(재정의), 순수가상함수일때 이것도 없애줘야함
	cout << "Override" << endl;
}

Hero::Hero()
{
	cout << "Hero 생성자" << endl;
}

Hero::~Hero()
{
	cout << "Hero 소멸자" << endl;
}

Hero hero; // Hero 선언

//Unit unit; // 이것도 안됨

//상속
//상속을 사용하는 이유 : 코드 줄이기 제일 용이함, 프로그램 구조를 잡아갈 때 클래스 계층구조 만들 때 가장 많이 쓰임

int main()
{
	hero.draw();
	//unit.draw();
}