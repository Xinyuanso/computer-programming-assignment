#include <iostream>
#include <string>

using namespace std;

void logo(string e);
void menu();
void exit();


void exit()
{
    cout << "\n\nTHANKS FOR USING CODING GEEKS STORE MANAGEMENT SYSTEM"<<endl;
}

void logo(string e)
{

        cout<<"                 _______ _______ ______   ___ __    _ _______      _______ _______ _______ ___   _ _______            "<<endl;
        cout<<"                |       |       |      |_|   |  |  | |       |    |       |       |       |   | | |       |           "<<endl;
        cout<<"                |   ____|   _   |  _     |   |   |_| |    ___|    |    ___|    ___|    ___|   |_| |  _____|           "<<endl;
        cout<<"                |  |       | |  | | |    |   |       |   | __     |   | __|   |___|   |___|      _| |_____            "<<endl;
        cout<<"                |  |____   |_|  | |_|    |   |  _    |   ||  |    |   ||  |    ___|    ___|     |_|_____  |           "<<endl;
        cout<<"                |       |       |       _|   | | |   |   |_| |    |   |_| |   |___|   |___|    _  |_____| |           "<<endl;
        cout<<"                |_______|_______|______| |___|_|  |__|_______|    |_______|_______|_______|___| |_|_______|           "<<endl;

        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<"========================================================================================================================"<<endl;
        cout<<" "<<endl;
        cout<<"                               WELCOME TO CODING GEEKS STORE MANAGEMENT SYSTEM !                                        "<<endl;
        cout<<" "<<endl;
        cout<<"========================================================================================================================"<<endl;

        cout<<"\n\n\n\n\n\n\n\t\t\t\t\t Please enter the password :  \n"<< endl;
        cin>> e;

        while (e != "codinggeeks123")
        {
            cout << "\n\t\t\t\t\t\tInvalid password" ;
            cout<<"\n\n\n\t\t\t\t\t Please enter the password :  \n"<< endl;
            cin >> e ; 

        }


        system("cls");
 
}

void menu()
{
     system("cls");
    int choice_1;
    int input;
    cout<<"========================================================================================================================"<<endl;
    cout<<" "<<endl;
    cout<<"                               CODING GEEKS STORE MANAGEMENT SYSTEM MENU                                       "<<endl;
    cout<<" "<<endl;
    cout<<"========================================================================================================================"<<endl;
    cout<<"\n\n\t\t 1. Product Details \n\n";
    cout<<"\t\t 2. Supplier Details \n\n ";
    cout<<"\t\t 3. Exit \n\n ";

	cout<<"\n\n========================================================================================================================\n";
	cout<<"\n\nEnter Your Choice:";
	cin>>choice_1;

	switch(choice_1)
	{
    case 1:
        system("cls");
       
        break;
    case 2:
        system("cls");
       
        break;
    case 3:
        system("cls");
        exit();
        break;
        
    default:
        cout << "Invalid input.Please enter again : " << endl;
        menu();
        break;
	}
}

int main()
{
    string e;
    



    logo(e);
    menu();
    exit();
    return 0;
}



