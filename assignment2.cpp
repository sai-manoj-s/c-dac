//assignment
//patient class

#include<iostream>
#include<string>
using namespace std;

class Patient{
	private:
		string name;
		string address;
		long int phoneNo;
	public:
		Patient(string name, string address, long int phoneNo){
			this->name=name;
			this->address=address;
			this->phoneNo=phoneNo;
		}
		void display(){
			cout<<name<<endl;
			cout<<address<<endl;
			cout<<phoneNo<<endl;
			
		}
};

string getString(string msg){
	string answer;
	cout<<msg<<endl;
	getline(cin,answer);
	return answer;
}

int main(){
	string name=getString("Enter patient's name :\n");
	string address=getString("Enter patient's address :\n");
	 cout<<"Enter patients phone number";
	long int phone;
	cin>>phone;
	Patient* p= new Patient(name,address,phone);
	p->display();


}
