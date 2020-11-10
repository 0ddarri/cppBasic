////A -> B -> C ->(대혁명)-> C++ -> C#
//
////class, 템플릿, 상속, 캡슐화
////c++맛보기
#include <iostream> //c++ 꺾새 헤더파일 .h 쓸필요 없음
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
//using namespace std; //네임스페이스의 std를 사용하지 않겠다
//
//namespace Space1
//{
//	int val1;
//}
//
//using namespace Space1; //네임스페이스 Space1 사용하지 않겠다
//
////아파트 형태
//namespace Space0
//{
//	namespace Space
//	{
//		int val0;
//	}
//}
//
//
////아래 두 함수는 인자가 달라 전혀 다른 함수이다 : 함수 오버로딩
//void Add(int x, int y)
//{
//	printf("함수1\n");
//}
//
//void Add(float x, float y)
//{
//	printf("함수2\n");
//}
//
//void main()
//{
//	cout << cls.inin << endl;
//
//	Class1.Print(); //Print 출력
//
//
//	Add(1, 1); //함수1 출력
//	Add(1.f, 1.3f); //함수2 출력
//
//	Space0::Space::val0;
//	printf("Hello World\n"); // c,c++ Hello World
//	std::cout << "Hello World" << std::endl; // c++ Hello World
//	cout << "Hello World" << endl; // std 삭제 (위 네임스페이스)
//
//	float val = 5.5f;
//	printf("숫자는 %f입니다\n", val); //c 변수출력
//	cout << "숫자는 " << val << "입니다" << endl; //c++ 변수출력, c에 비해 가독성 증가
//	cout << "숫자는 " << (int)val << "입니다" << endl; //c++ 형변환
//
//	int value;
//	int value2;
//	printf("C 입력한 숫자 : ");
//	scanf_s("%d", &value); // c 변수 입력받기
//	printf("%d\n", value);
//
//	cout << "C++ 입력한 숫자 : ";
//	cin >> value >> value2; // c++ 변수 입력받기, >>붙이면 계속 다른변수 입력 가능
//	cout << value << " / " << value2 << endl;
//
//	int val1 = 5; // 지역변수 val1
//	Space1::val1 = 10; // Space 네임스페이스 안의 val1
//	cout << "Space1의 val1 : " << Space1::val1 << endl;
//	//cout << "Space1의 val1 : " << ::val1 << endl; // 네임스페이스로 Space1 사용하지 않아도 에러 없음
//	cout << "지역변수의 val1 : " << val1 << endl;
//}