#include <iostream>
using namespace std;

class AnimalClass{
	public:
		string name;
		string type;
		bool backbone;
		bool brain;
		
		AnimalClass(string a, string b, bool c, bool d){
			name = a;
			type = b;
			backbone = c;
			brain = d;
		}
};

int main(){
	AnimalClass Obj1("Blue Jay", "Bird", 1, 1);
	AnimalClass Obj2("Pembroke Corgi", "Dog", 1, 1);
	
	cout<<"Name of Animal: "<<Obj1.name<<" ""\n"<<"Type of Animal: "<<Obj1.type<<" ""\n"<<"Has a backbone (0-No, 1-Yes): "<<Obj1.backbone<<" ""\n"<<"Has a brain (0-No, 1-Yes): "<<Obj1.brain<<"\n";
	cout<<"\n";
	cout<<"Name of Animal: "<<Obj2.name<<" ""\n"<<"Type of Animal: "<<Obj2.type<<" ""\n"<<"Has a backbone (0-No, 1-Yes): "<<Obj2.backbone<<" ""\n"<<"Has a brain (0-No, 1-Yes): "<<Obj2.brain<<"\n";
	
	return 0;
}

