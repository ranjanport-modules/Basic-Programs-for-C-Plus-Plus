//============================================================================
// Name        : cpp-code-challenge-constructor_default().cpp
// Author      : Aman Ranjan
// Version     :
// Copyright   : This code is freeware and can be used without prior notice.
// Description : Program to apply constructor of type default.
//============================================================================

#include <iostream>
using namespace std;

class Dog
{
public:

	string name;
	string breed;
	string color;
	int age;
	int id=1;

	Dog()								//default constructor defination & declaration
	{
		cout <<"Dog object created"<<endl;
	}


	string nickname()				//Method with definition and declaration
	{
		string nick = name + breed;
		return nick;
	};

		void Printdetail();		//Method  declaration
};

void Dog :: Printdetail()
	{
		cout <<"Identity: "<<id<< "\nName "						//Method definition
				"of the Dog: "<<name<< "\nT"
						"he breed is: "<<breed<<""
								"\n colour of the D"
								"og is : "<<color<<""
										"\nThe age "
										"is: "<<age<<endl;
		++id;
	//	while((getchar()='\n'));
	}

int main()
{
	setbuf(stdout,NULL);
	{
	 Dog dog1;
	 dog1.name = "stiffen";
	 dog1.breed = "javen";
	 dog1.color = "white";
	 dog1.age = 3;

	// while((getchar()='\n'));

	 dog1.Printdetail();

	 string name= dog1.nickname();

	 cout <<"Nickname: "<<name<<endl;

	///////////////////////			//////////////////////////
			cout<<endl<<endl<<endl<<endl;
	///////////////////////////////////////////////////////////////////////////

			Dog dog2;
			dog2.name = "James";
			dog2.breed = "loren";
			dog2.color = "spoty white";
			dog2.age = 7;

		//	while((getchar()='\n'));

			dog2.Printdetail();

			string name2= dog2.nickname();

					cout <<"Nickname: "<<name2<<endl;
	}

return 0;
}
