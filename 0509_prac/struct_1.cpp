//1. Rectangle 구조체 만들기
//2. 변수 width, height
//3. 구조체를 이용하여 변수를 생성하고, width와 height 값을 콘솔로 입력 받아서 할당
//4. width와 height 값을 이용해넓이를 계산하여 출력

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Rectangle {
	float width, height;
};

int main()
{
	Rectangle rec;
	cout << "가로, 세로 길이를 입력하세요. : ";
	cin >> rec.width >> rec.height;
	cout << "직사각형 넓이는 : " << rec.width * rec.height << endl;
}
