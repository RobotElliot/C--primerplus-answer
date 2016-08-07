#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar
{
    char brand[30];
    double weight;
    int heat;
};
void set(CandyBar & cb, const char * brand="Millennium Munch", double weight=2.85, int heat=350)
{
	strcpy(cb.brand, brand);
	cb.weight = weight;
	cb.heat = heat;
}
void show(const CandyBar & cb)
{
	cout << "Brand: " << cb.brand << endl;
	cout << "Weight: " << cb.weight << endl;
	cout << "Heat: " << cb.heat << endl;
}
int main()
{
	CandyBar cb;
	char brand[] = "Munch";
	double weight = 4.85;
	int heat = 650;
	set(cb);
	cout << "Original Bar: " << endl;
	show(cb);
	// fill struct
	set(cb, brand, weight, heat);
	// show struct
	cout << "New Bar: " << endl;
	show(cb);

	return 0;
}
