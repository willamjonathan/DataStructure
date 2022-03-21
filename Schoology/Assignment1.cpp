//Sir im sorry for my work, I know that it still has many mistakes in it.
//CPP is just still new for me, its hard to understand compared to the other -
//programming languages I've learned.


#include<iostream>
#include<string>
using namespace std;


class cont{
	public:
		string email;
		int age;
    		string name;
    		int telp;
    		string bday;
};
class operation {
	private:
    int x = 0;
    int phonenumb;
    string thename;
    
    public:
    	
        cont full[20];
          void searchContact(){
        	cout << " Enter the name:  ";
            cin >> thename;
            	
            for(int y = 0;y < 20; y++){
                if(thename == full[y].name){
                	cout << "\nThe contact is found!\n"<<endl;
                    cout << "Name: " << full[y].name << endl;
                    cout << "Phone number: " << full[y].telp << endl;
                    cout << "Bday: " << full[y].bday << endl;
                    cout << "Email: " << full[y].email << endl;
                    cout << "\n" <<endl;	
				}
            }
        };
          void removeContact(){
            cout << " Enter the name: ";
            cin >> thename;
            for(int  y= 0;y < 20; y++){
                if(thename == full[y].name){
                    full[y] = full[1+y];
                    cout<<"One contact is deleted \n";
                }
            }

        };
        void createContact(){
            cout << " Enter Contact Details :\n";
            cout << " Name: ";
            cin >> full[x].name;
            cout << " Phone number: ";
            cin >> full[x].telp;
            cout << " Bday: ";
            cin >> full[x].bday;
            cout << "Email: " ;
            cin >> full[x].email;
            x++;
            cout<< " Total Contact = " << x  << endl;
            cout<< " \nContact has been added!"<<endl;
        };




};

int main(){
	
	int n;
	cout<<" Hello! Welcome to PhoneBook program!"<<endl;
	cout<<" \nPlease click 1 to start the program!"<<endl;
	cin>>n;
	while(n==1){

	int z;
	operation mine;
	int key = 1;
	while (key == 1){
		cout<<"== CONTACT BOOK==\n" <<endl;
		cout<<"1. Add a new contact\n"<<endl;
		cout<<"2. Delete a contact\n"<<endl;
		cout<<"3. Search a contact\n"<<endl;
		cout<<"4. Exit\n"<<endl;
		cout<<"What is your choice?"<<endl;
		cin>>z;
		if(z==1){
			mine.createContact();
		}else if (z==2){
			mine.removeContact();
		}else if(z==3){
			mine.searchContact();
		}else if(z==4){
			key = 2;
		}else{
			cout<<"Wrong keystroke."<<endl;
		}
	}
	}
}
