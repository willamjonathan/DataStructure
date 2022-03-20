//Sir im sorry for my work, I know that it still has many mistakes in it.
//CPP is just still new for me, its hard to understand compared to the other -
//programming languages I've learned.


#include<iostream>
#include<string>
using namespace std;


class cont{
	public:
    	string name;
    	int telp;
    	string bday;
    	int age;
};
class operation {
	private:
    int x = 0;
    int phonenumb;
    string thename;
    
    public:
    	int d = 20;
        cont full[20];
          void search(){
        	cout << " Enter the name:  ";
            cin >> thename;
            	
            for(int y = 0;y < 20; y++){
                if(thename == full[y].name){
                	cout << "\nThe contact is found!\n"<<endl;
                    cout << "Name: " << full[y].name << endl;
                    cout << "Phone number: " << full[y].telp << endl;
                    cout << "Bday: " << full[y].bday << endl;
                    cout << "\n" <<endl;	
				}
            }
        };
          void remove(){
            cout << " Enter the name: ";
            cin >> thename;
            for(int  y= 0;y < 20; y++){
                if(thename == full[y].name){
                    full[y] = full[1+y];
                    cout<<"One contact is deleted \n";
                }
            }

        };
        void insert(){
            cout << " Enter Contact Details :\n";
            cout << " Name: ";
            cin >> full[x].name;
            cout << " Phone number: ";
            cin >> full[x].telp;
            cout << " Bday: ";
            cin >> full[x].bday;
            x++;
            cout<< " Total Contact = " << x  << endl;
        };




};

int main(){
	
	
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
			mine.insert();
		}else if (z==2){
			mine.remove();
		}else if(z==3){
			mine.search();
		}else if(z==4){
			key = 2;
		}else{
			cout<<"Wrong keystroke."<<endl;
		}
	}	
}
