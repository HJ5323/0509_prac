//1. Rectangle ����ü �����
//2. ���� width, height
//3. ����ü�� �̿��Ͽ� ������ �����ϰ�, width�� height ���� �ַܼ� �Է� �޾Ƽ� �Ҵ�
//4. width�� height ���� �̿��س��̸� ����Ͽ� ���

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

struct Rectangle {
	float width, height;
};

int main()
{
	Rectangle rec;
	//cout << "����, ���� ���̸� �Է��ϼ���. : ";
	//cin >> rec.width >> rec.height;
	//cout << "���̴� : " << rec.width * rec.height << endl;
	
	string input;
	cout << "����, ���� ���̸� �Է��ϼ���. : ";
	getline(cin, input);
	stringstream ss(input);
	ss >> rec.width >> rec.height;
	cout << "���̴� : " << rec.width * rec.height << endl;

}
