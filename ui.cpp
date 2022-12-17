#include <iostream>
using namespace std;

void logo(int e)
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

cout<<"\n\n\n\n\n\n\n\t\t\t\t\t Press 1 to continue. "<< endl;
cin>> e;

system("cls");
}

void menu(int choice_1){
    cout<<"\n\n\t\t   1. To display products\n\n\t\t   2. To Manage product quantity\n\n\t\t      3. Supplier Details\n\n\t\t ";
	cout<<"\n\n=============================================================\n";
	cout<<"\n\nEnter Your Choice:";
	cin>>choice_1;
    system("cls");
}

void logo(int e);
void menu(int choice_1);


int main(){
    int e;
    int choice_1;
    logo(e);
    menu(choice_1);

    const int model_num=3;
    const int stock_num=2;
    int addstock[model_num][stock_num];
    int * p1;
    p1 = &addstock[model_num][stock_num];
    string response;

    do{
    string stock[model_num]={"Pen","Eraser","Ruler"};
    string model[stock_num]={"A","B"};

    for (int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {

    cout << "Please add stock for "<< stock[i]<< " model "<< model[j] << ":" ;
    cin >> addstock[i][j];


        }

    }

    for (int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout << "\nThe stock for "<< stock[i]<< " model " <<model[j]<<" is " << *p1 <<endl;
        }
    }

    cout << "Do u want to continue add stock (yes/no) : " ;
    cin >> response;
        while ( response != "yes" && response != "no" )
        {
            cout << "Incorrect responce." << endl;
            cout << "Please re-enter your answer (yes/no): ";
            cin >> response;
        }

        if ( response == "no" )
        {
            cout << "\n\n\n-------------------------------------------------\n";
            cout << "\nThank you for add stock." << endl;
        }
    }while (response == "yes"); // have bug in this code cause cannot display the sum of stock
	//have try to use * and & to get the number but fail.
	//if can slove this then we use this loop which answer=yes will continue update
	//else delete;
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





