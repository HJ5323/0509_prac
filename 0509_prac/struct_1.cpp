//1. Rectangle ����ü �����
//2. ���� width, height
//3. ����ü�� �̿��Ͽ� ������ �����ϰ�, width�� height ���� �ַܼ� �Է� �޾Ƽ� �Ҵ�
//4. width�� height ���� �̿��س��̸� ����Ͽ� ���

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
	cout << "����, ���� ���̸� �Է��ϼ���. : ";
	cin >> rec.width >> rec.height;
	cout << "���簢�� ���̴� : " << rec.width * rec.height << endl;
}
