//assignment
//patient class

#include<iostream>
#include<string>
using namespace std;




string getString(string msg){
	string answer;
	cout<<msg<<"\n";
	cin.ignore();
	getline(cin,answer);
	return answer;
}

int getNum(string msg){
	cout<<msg<<endl;
	int num;
	cin>>num;
	return num;
}

class Patient{
	private:
		int id;
		string name;
		string address;
		long int phoneNo;
	public:
		Patient():id(0),name(""),address(""),phoneNo(0.0){
		}
		Patient(int id,string name, string address, long int phoneNo){
			
			this->id=id;
			this->name=name;
			this->address=address;
			this->phoneNo=phoneNo;
		}
		void display(){
			cout<<name<<endl;
			cout<<address<<endl;
			cout<<phoneNo<<endl;
			
		}
		string getName(){
			return name;
		}
		string getAddress(){
			return name;
		}
			string getphoneNo(){
			return name;
		}
		int getId(){
			return id;
		}
};

class PatientRepo{
	private:
		Patient* patients;
		int count;
	public:
		PatientRepo(){
		}
		PatientRepo(int size){
			;
			count=size;
			patients= new Patient[size];
		}	
		void addPatient(Patient pat){
			for (int i=0; i<count; i++){
				cout<<count<<endl;
				cout<<patients[i].getName()<<endl;
				if(patients[i].getName()==""){
					
					patients[i]=pat;
					return;
				}
				else continue;
			}
		}
	
};
PatientRepo* pro;

Patient createPatient(){
	int id= getNum("Enter patient's id");
	
	string name=getString("Enter patient's name :\n");
	string address=getString("Enter patient's address :\n");
	cout<<"Enter patients phone number";
	long int phone;
	cin>>phone;
	Patient p(id,name,address,phone);
	return p;		
}





bool processMenu(int option){
		Patient pat;
	
	switch(option){
		case 1:
			pat	=createPatient();
			
			pro->addPatient(pat);
			return true;
			break;
		case 2:
		
			return true;
			break;
		case 3:
		
			return true;
			break;
		case 4:
			
			return true;
			break;
		default :
			return false;
					
			
	}
}

void menu(){
	string msg="************welcome to hospital******************\n";
		  msg+="TO ADD A PATIENT ----------------- PRESS 1 \n";
		  msg+="TO REMOVE A PATIENT -------------- PRESS 2 \n";
		  msg+="TO FIND A PATIENT ---------------- PRESS 3 \n";
		  msg+="TO UPDATE A PATIENT DETAILS ------ PRESS 1 \n";
		  msg+="------PRESS ANY OTHER KEY TO EXIT--------";
		  cout<<msg<<endl;
}
int main(){

	int patient=getNum("Enter the number of patients");
	pro= new PatientRepo(patient);
		bool process = true;
	do{
	menu();
	int option=getNum("");
	process=processMenu(option);
	}while(process);
//	
//p->display();


}
