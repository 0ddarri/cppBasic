#include <iostream>

using namespace std;


//parents
//�θ� Ŭ����
class Unit
{
public: //ĸ��ȭ : ĸ��ó�� �ϳ��� ����δ� ��
	Unit();
	~Unit();

	int x;
	int y;
	int speed;
	int attack;

	virtual void draw() = 0;//�����Լ�, �ڽ� Ŭ���������� ���� �����ϰ� ����, ��ȣ������ �� ���� ���� �ٽ� ���� �� , = 0 �ٿ��ָ� ���� �����Լ��� ��.
	// ���� �����Լ� : ���� �������, �ڽİ������� ������ �����ؾ� ��, Unit���� �Լ� �ȿ� ���� ������ �ȵ�, �ڽĿ��� ���� ��
	//
	//void draw() override;  -> 2�� ���

private:

protected: // ��ӵ� Ŭ���������� ��� ����
	int a;
};


Unit::Unit()
{
	x = 5;
	y = 5;
	speed = 1;
	attack = 1;
	cout << "Unit ������" << endl;

}

Unit::~Unit()
{
	cout << "Unit �Ҹ���" << endl;
}

//children
//�ڽ� Ŭ����
class Hero : public Unit // Hero�� Unit ���, ���� �Ӹ� �ƴ϶� �� �޾ƿ�
{
public:
	Hero();
	~Hero();

	virtual void draw();

private:

};

void Hero::draw()
{
	//Unit::draw(); //�Լ� �������̵�(������), ���������Լ��϶� �̰͵� ���������
	cout << "Override" << endl;
}

Hero::Hero()
{
	cout << "Hero ������" << endl;
}

Hero::~Hero()
{
	cout << "Hero �Ҹ���" << endl;
}

Hero hero; // Hero ����

//Unit unit; // �̰͵� �ȵ�

//���
//����� ����ϴ� ���� : �ڵ� ���̱� ���� ������, ���α׷� ������ ��ư� �� Ŭ���� �������� ���� �� ���� ���� ����

int main()
{
	hero.draw();
	//unit.draw();
}