#include <iostream>
#include "thegame.cpp"

using namespace std;
class Operator{
    private:
    List gamelist;
    public:
        void addGame(){
            gamelist.add();
        }
        void displayGame(){
            gamelist.display();
        }
        void sellGame(){
            gamelist.sell();
        }
        void deleteGame(){
            gamelist.removing();
        }
        
};
int choose(){
    int choice;
    cout << " " << endl;
    cout << "===OPTION===" << endl;
    cout << "1. Add Game"<< endl;
    cout << "2. Display Game"<< endl;
    cout << "3. Sell Game"<< endl;
    cout << "4. Delete Game"<< endl;
    cout << "5. Exit"<< endl;

    cout << "What is your choice?  " << endl;
    cin >> choice;
    return choice;
}
int main(){
    Operator op;
    string code;
	string title;
	string description;
	string platform;
	string publisher;
	int price;
	int sold;
	int choice;
    int t = 1;
    while(t==1){
        choice = choose();
        if(choice ==1){
            op.addGame();
        }else if(choice == 2){
            op.displayGame();
        }else if(choice==3){
            op.sellGame();
        }else if(choice==4){
            op.deleteGame();
        }else if(choice==5){
            cout<<"Bye bye thank you for using our program.\n"<<endl;
            t=0;
        }else{
            cout<<"Press only 1 to 5."<<endl;
        }
    }
};
