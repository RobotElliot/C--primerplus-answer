#include <iostream>
using namespace std;

struct Box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void display(const Box box);
void get_volume(Box* pbox);
int main()
{
	Box x = {"chenjiale", 2.0, 3.0, 3.5, 0.0};

	// output
	display(x);

	// modify volume
	get_volume(&x);

	// output again
	display(x);

	return 0;
}

void display(const Box box)
{
	cout << "maker " << box.maker << endl;
	cout << "height " << box.height << endl;
	cout << "width " << box.width << endl;
	cout << "length " << box.length << endl;
	cout << "volume " << box.volume << endl;
}

void get_volume(Box* pbox)
{
	pbox->volume = pbox->height * pbox->length * pbox->width;
}
