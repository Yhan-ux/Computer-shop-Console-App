
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;


// class (SRP)
class Item {
protected:
	string name;
	double price;

public: 
	Item(string name, int price)
		: name(name), price(price) { }

	virtual void displayinfo()const = 0;
	virtual double getPrice() const { return price; }
	virtual ~Item(){}

};
class Computer : public Item {
private:
	string processor;
	int ram, rom;
public:
	Computer(string name, int price,string processor,int ram,int rom)
		:Item(name,price),processor(processor),ram(ram),rom(rom){ }

	void displayInfo() const override {
		cout<<"Computer: "<<name<<
	}
};

int main()
{

   
}
