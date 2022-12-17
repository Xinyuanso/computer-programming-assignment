#include <iostream>
using namespace std;

void logo(int e);
void menu();
void supplierdetails();
void managestock();
void exit();
void managestock();
void displaystock();

void exit()
    {
    cout << "\n\nTHANKS FOR USING CODING GEEKS STORE MANAGEMENT SYSTEM"<<endl;
    }

void logo(int e)
{
    do{
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

cout<<"\n\n\n\n\n\n\n\t\t\t\t\t Press 1 to continue. "<< endl;
cin>> e;

system("cls");
}while (e != 1);
}

void menu()
{
    int choice_1;
    int input;
    cout<<"========================================================================================================================"<<endl;
    cout<<" "<<endl;
    cout<<"                               CODING GEEKS STORE MANAGEMENT SYSTEM MENU                                       "<<endl;
    cout<<" "<<endl;
    cout<<"========================================================================================================================"<<endl;
    cout<<"\n\n\t\t 1. To add new products\n\n      ";
    cout<<"\t\t 2. Supplier Details\n\n ";
    cout<<"\t\t 3. Exit\n\n ";
	cout<<"\n\n========================================================================================================================\n";
	cout<<"\n\nEnter Your Choice:";
	cin>>choice_1;

	switch(choice_1)
	{
    case 1:
        system("cls");
        managestock();
        break;
    case 2:
        system("cls");
        supplierdetails();
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

int main(){
    int e;

    int choice_1;
    const int model_num=3;
    const int stock_num=2;
    int addstock[model_num][stock_num],t;
    string stock[model_num]={"Pen","Eraser","Ruler"};
    string model[stock_num]={"A","B"};
    string response,ds;
    logo(e);
    menu();
    exit();
    return 0;
}

void supplierdetails()
{
    cout << "In progress" << endl;
    return ;
}

void managestock(){
    const int model_num=3;
    const int stock_num=2;
    int addstock[model_num][stock_num],t;
    string response,ds;

    do{
    string stock[model_num]={"Pen","Eraser","Ruler"};
    string model[stock_num]={"A","B"};

    for (int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
    cout << "Please add stock for "<< stock[i]<< " model "<< model[j] << ":" ;
    cin >> addstock[i][j];
    if (addstock[i][j] < 0  )
        {
            cout << "Please enter the correct product number :" << endl;
            cin >> addstock[i][j];
        }
        }
    }
    cout << "\nDo u want to display the stock avialable (yes/no) ? :";
    cin >> ds;
    if (ds == "yes")
    {
    cout << "\n\n----------Stock Available----------" << endl;
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout << "\nThe stock for "<< stock[i]<< " model " <<model[j]<<" is " << addstock[i][j] ;
        }
    }
    }else if (ds == "no")
    {
            cout << "\n\n\n-------------------------------------------------\n";
            cout << "\nThank you for add new product." << endl;
            system("cls");
            menu();
    }else if (ds != "yes" || ds != "no")
    {
        cout << "Invalid answer please redo!!!"<<endl;
        managestock();
    }
    cout << "\n\nDo u want to change the quantity of product (y/n) : " ;
    cin >> response;
       while ( response != "y" && response != "n" )
        {
            cout << "Incorrect responce." << endl;
            cout << "Please re-enter your answer (y/n): ";
            cin >> response;
        }
        if ( response == "n" )
        {
            cout << "\n\n-------------------------------------------------\n";
            cout << "\nThank you for add new product." << endl;
            menu();
        }
    }while (response == "y");
}

void pen()
{
    cout<<"Pen model A:         0.5\n";
    cout<<"Pen model B:         0.7\n";
}

void eraser()
{
    cout<<"Eraser model A: 2 x 3 cm\n";
    cout<<"Eraser model B: 4 x 6 cm\n";
}

void ruler()
{
    cout<<"Ruler model A:       15cm\n";
    cout<<"Ruler model B:       30cm\n";
}





