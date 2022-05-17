#include <iostream>
#include <string>
using namespace std;

// Dear MR.Tri, Sorry the last part of the code which is for removing is a messy.
// I found so many struggles in finding the right solution until now.
// The best I found is stated there. The other are my trial and error attempts.
// To check my attempts you can delete the "/*" and the "*/", (reminder : don't forget to addback the sign)

//other than removing, it works.

class Node{
	public:
	string code;
	string title;
	string description;
    string platform;
    string publisher;
	int price;
	int sold;
	Node *next;
	Node *link = NULL;
};

class List{
	public:	
		Node* head;
		int count = 0;
		List(){
			head = NULL;}
		void add(){
			string ans;
			int input;
			Node* addnode = new Node();
			cout << "Enter game code: ";
			cin >> ans;                   
			addnode->code = ans;
			cout << "Enter title: "; 
			cin>> ans;
			addnode->title = ans;
			cout << "Enter description: ";
			cin >> ans;
			addnode->description = ans;
            cout << "Enter the platform: ";
            cin>> ans;
            addnode->platform = ans;
            cout<< "Enter the publisher: ";
            cin>>ans;
            addnode->publisher = ans;
			cout << "Enter the price: ";
			cin >> input;
			addnode->price = input;
			cout << "Enter the number of game sold: ";
			cin >> input;
			addnode->sold = input;
		    addnode->next = head;
		    head = addnode;
		    count++;
		};
	
		void display(){
			Node* displayNode = head;
			for(int i = 0; i < count;i++){
			cout << "code = " << displayNode->code << endl;
			cout << "title = " << displayNode->title << endl;
			cout << "description = " << displayNode->description << endl;
            cout << "platform = " << displayNode->platform << endl;
            cout << "publisher = " << displayNode->publisher << endl;
			cout << "price = " << displayNode->price << endl;
			cout << "sold = " << displayNode->sold << endl;
			displayNode = displayNode->next;
			cout << endl;
		};
		};
		
		void sell(){
			string input;
            int totalprice = 0;
            int n;
			Node* sell = head;
			cout << "Please enter the game code: ";
			cin >> input;
			for(int i = 0; i < count; i++){
				if(input == sell->code){
					cout << "code = " << sell->code << endl;
					cout << "title = " << sell->title << endl;
					cout << "description = " << sell->description << endl;
                    cout << "platform = " << sell->platform << endl;
                    cout << "publisher = " << sell->publisher << endl;
					cout << "price = " << sell->price << endl;
					cout << "sold = " << sell->sold << endl;
				};
			
			cout << "How many game you want to sell: ";
			cin >> n;
			if(n < 4){        
				totalprice =  n * sell->price;
                if(totalprice>2000000){
                    totalprice = totalprice * 90/100;
                    cout<<"The total price is "<<totalprice<<endl;
					sell->sold = sell->sold + n;
                }else if((totalprice<=2000000)&&(totalprice>800000)){
                    totalprice = totalprice *95/100;
                    cout<<"The total price is "<<totalprice<<endl;
					sell->sold = sell->sold + n;
        		}else if(totalprice<800000){
                    cout<<"The total price is "<<totalprice<<endl;
					sell->sold = sell->sold + n;
                }
	        }else{
                cout<<"The game sell can't be more than 3."<<endl;
        	}
			};		
			sell = sell->next;
		};
	
	void removing(){
		/*string input;
		int n;
		int checker;
		Node *remove = head;
		cout << "Please enter the game code you want to delete: ";
		cin >> input;
		for(int i = 0;i < count;i++){
			if(input == remove->code){
				cout << "code = " << remove->code << endl;
				cout << "title = " << remove->title << endl;
				cout << "description = " << remove->description << endl;
				cout << "platform = " << remove->platform << endl;
				cout << "publisher = " << remove->publisher << endl;
				cout << "price = " << remove->price << endl;
				cout << "sold = " << remove->sold << endl;
				cout<<remove->code<<" has been deleted."<<endl;
				head = head->link;
				delete (remove);
				return;
			};
			//deleteNode(remove->)
		};
		count = count - 1;*/
		

		//works for 1 element only ------------------------------
		string myinput;
		int a;
		int b;
		int checker;
		Node* remove = head;
		cout << "Please enter the game code you want to delete: ";
		cin >> myinput;
		for(int i = 0;i <count;i++){
			a++;
			if(myinput==remove->code){
				cout << "code = " << remove->code << endl;
				cout << "title = " << remove->title << endl;
				cout << "description = " << remove->description << endl;
				cout << "platform = " << remove->platform << endl;
				cout << "publisher = " << remove->publisher << endl;
				cout << "price = " << remove->price << endl;
				cout << "sold = " << remove->sold << endl;
				cout<<remove->code<<" has been deleted."<<endl;

				checker = i;
				cout<<"position of the code "<< checker<<endl;}
				
			remove = remove->next;
			
		};
		b = count-checker;

		//________________________________________________________________________________
		//third attempt(failed but works.)
		//explanation : the program stops after inserting input.
		if(checker == 1){
			
			remove->code = remove->next->code;
			remove->title = remove->next->title;
			remove->description = remove->next->description;
			remove->platform = remove->next->platform;
			remove->publisher = remove->next->publisher;
			remove->price = remove->next->price;
			remove->sold = remove->next->sold;
			head = remove->next;
			free(remove);
			return;
			
		}
		b = count-checker;
		for(int i=0; i<b; i++){
			remove->code = remove->next->code;
			remove->title = remove->next->title;
			remove->description = remove->next->description;
			remove->platform = remove->next->platform;
			remove->publisher = remove->next->publisher;
			remove->price = remove->next->price;
			remove->sold = remove->next->sold;
			remove= remove->next;
				
			Node* remove2 = remove->next;
			remove->next = remove2->next;
			free(remove2);
		}
		//________________________________________________________________________________
		

		

		// OTHER ATTEMPTS:
		// please remove the comment sign /* and */  //if you want to see the other attempts.
		/*
		first attempt. (failed)
		//________________________________________________________________________________
		//logic from youtube = 
		int nomor = 1;
		Node *before;
		Node *del;
		while( nomor <= checker){
			if(nomor == checker-1){
				before = remove;
			}
			if(nomor == checker){
				del = remove;
			}
			remove = remove->next;
			nomor++;
			
		}
		before->next = remove;
		delete del;
		// end of youtube logic
		//________________________________________________________________________________
		*/

		/*
		//16-05________________________________________________________________________________
		second attempt(failed). - my logic learn from youtube.
		//the element you add first in the list or you could say it is the most under one
		if (b == 1){
			count = count-1;
		}else if(b != 1){
			for(int i=0;i<checker;i++){} //count???
				remove->code = remove->next->code;
				remove->title = remove->next->title;
				remove->description = remove->next->description;
				remove->platform = remove->next->platform;
				remove->publisher = remove->next->publisher;
				remove->price = remove->next->price;
				remove->sold = remove->next->sold;
				remove->next = remove->next->next;
		}
		//________________________________________________________________________________
		*/

		
		
		/*
		//________________________________________________________________________________
		//if the element is in the first position of the linked list or in other words it is the last element you add
		if (checker == 1){
			remove->code = remove->next->code;
			remove->title = remove->next->title;
			remove->description = remove->next->description;
			remove->platform = remove->next->platform;
			remove->publisher = remove->next->publisher;
			remove->price = remove->next->price;
			remove->sold = remove->next->sold;
			head = remove->next;
			free(remove);
			return;
		}else{
			b = count-a;
			for(int i=0;i<b;i++){
				remove->code = remove->next->code;
				remove->title = remove->next->title;
				remove->description = remove->next->description;
				remove->platform = remove->next->platform;
				remove->publisher = remove->next->publisher;
				remove->price = remove->next->price;
				remove->sold = remove->next->sold;
				remove= remove->next;
				
				Node* remove2 = remove->next;
				remove->next = remove2->next;
				free(remove2);
		
			}
		}
		remove = remove->next;
		count --;
		//________________________________________________________________________________
		*/

		/*
		//__________________________________________________ 
		//another trial
				//if the remove position is the first element:
				//failed program stop after it is run, the while loop break
				if(checker == 1){
					
					remove->code = remove->next->code;
					remove->title = remove->next->title;
					remove->description = remove->next->description;
					remove->platform = remove->next->platform;
					remove->publisher = remove->next->publisher;
					remove->price = remove->next->price;
					remove->sold = remove->next->sold;
					remove->next = remove->next->next;
					head = remove->next;
					free(remove);
					return;
					
				}
				
				//if we have to trasnverse through the linked list
				for(int i=0; i < checker-2; i++){
					remove->code = remove->next->code;
					remove->title = remove->next->title;
					remove->description = remove->next->description;
					remove->platform = remove->next->platform;
					remove->publisher = remove->next->publisher;
					remove->price = remove->next->price;
					remove->sold = remove->next->sold;
					remove->next = remove->next->next;
				
				Node* remove2 = remove->next->next;
				remove->next->next = remove2->next;
				free(remove2);
				

			};
		//________________________________________________________________________________
		*/


		/*
			//another attempt
			for(int i = 0;i < checker;i++){
				remove->code = remove->next->code;
				remove->title = remove->next->title;
				remove->description = remove->next->description;
				remove->platform = remove->next->platform;
				remove->publisher = remove->next->publisher;
				remove->price = remove->next->price;
				remove->sold = remove->next->sold;
				remove->next = remove->next->next;
				remove = remove->next;
				cout<<remove->code<<endl;
			};
		*/
		
	};
};

