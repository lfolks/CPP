/*
 * Classes - Lloyd Folks
 */
#include <iostream>
#include <string>
using namespace std;

class vertebrates{
	public:
		string backbone = "True";
		string brain = "True";
		void pBB(){
			cout<<"This animal has a backbone: "<<backbone<<endl;
			cout<<"This animal has a brain: "<<brain<<endl;
		}
};

class mammal: public vertebrates{
	public:
		string livebirth;
		string layegg;
		void mLB(){
			cout<<"Does this animal have live births? (Yes/No) ";
			cin>>livebirth;
			cout<<"Does this animal lay an egg? (Yes/No) ";
			cin>>layegg;
			cout<<"Live births? "<<livebirth<<endl;
			cout<<"Lays eggs? "<<layegg<<endl;
			
		}

};

int main(){
	vertebrates animal1;
	animal1.pBB();
	
	mammal animal2;
	animal2.mLB();
	
	if (animal2.layegg == "Yes" || "yes" || "Y" || "y"){
			cout<<"Must be a duck billed platypus! Hello, Perry!"<<endl;
		}

	return 0;
};
