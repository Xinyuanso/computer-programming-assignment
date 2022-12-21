#include <iostream>
#include <string>

using namespace std;

// function declaration
void logo(int e);
void menu();
void supplierdetails();
void managestock();
void exit();
void displaystock();


// exit (option 3)
void exit()
{
    cout << "\n\nTHANKS FOR USING CODING GEEKS STORE MANAGEMENT SYSTEM"<<endl;
}

//logo for first time login display
void logo(int e)
{
    do
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
    while (e != 1);// error checking

}


// menu display for the system
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


// main
int main()
{
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


//supplier datails
void supplierdetails()
{
   int ans1;
    string company [4] = {"Stabilo","Fable", "Castle"};
    string phone [4] = {"013-7332598" , "015-8972456" , "019-4359827", " "};
    string stocktype [4] = {"Pen" , "Eraser" ,"Ruler"," "};
    string date [4] = {"2", "3" ,"3", " "};
    string stockin [4] = {"150" , "120" , "130"," "};

    // menu of supplier
     system("cls");
    cout << endl;
    cout << "            Welcome to Supplier Menu            " << endl;
    cout << endl;
    cout << "------------------------------------------------" << endl;
    cout << " 1. Check supplier information                  " << endl;
    cout << " 2. Add supplier information                    " << endl;
    cout << "------------------------------------------------" << endl;
    cout << " Please enter your choice : " ;
    cin >> ans1 ;

    // error check
    while (ans1 != 1 && ans1 != 2 )
    {
        cout << "Invalid input.                                  " << endl;
        cout << "Please enter your choice : " ;
        cin >> ans1;
    }

    // 1. Check supplier info
    if (ans1 == 1)
    {
       system("cls");
       int ans2 ;

           cout << endl;
            cout << "Which product do you want to check with ? " << endl;
            cout << "------------------------------------------" << endl;




            for (int i= 0 ; i < 3 ; i++ )
            {
                cout << i + 1 << ". " << stocktype[i] << endl;
            }

            cout << "------------------------------------------" << endl;
            cout << "Please enter your choice : " ;
            cin >> ans2 ;

            while (ans2 != 1 && ans2 != 2 && ans2 != 3 && ans2 != 4 )
            {

                cout << "Invalid input.                         " << endl;
                cout << "Please enter your choice : " ;
                cin >> ans2;
            }

            if (ans2 == 1)
            {
                 system("cls");
                cout << endl;
                cout << "Supplier of " << stocktype [ans2-1] << " is " << company[ans2-1] <<endl;

                cout << "Contact no : " << phone [ans2 -1] << endl;
                cout << "Restock at : Every " << date [ans2-1] << "months" <<endl;
                cout << "Restock amount : " << stockin [ans2 -1] << endl;


            }

            if (ans2 == 2 )
            {
                 system("cls");
                 cout << endl;
                cout << "Supplier of " << stocktype [ans2 -1] << " is " << company[ans2-1] <<endl;

                cout << "Contact no : " << phone [ans2-1] << endl;
                cout << "Restock at : Every " << date [ans2-1 ] << "months" <<endl;
                cout << "Restock amount : " << stockin [ans2 -1] << endl;
            }

            if (ans2 == 3)
            {
                 system("cls");
                 cout << endl;

                cout << "Supplier of " << stocktype [ans2 -1 ] << " is " << company[ans2-1] <<endl;

                cout << "Contact no : " << phone [ans2-1 ] << endl;
                cout << "Restock at : Every " << date [ans2-1 ] << "months" <<endl;
                cout << "Restock amount : " << stockin [ans2 -1] << endl;
            }
            if (ans2 == 4)
            {
                 system("cls");
                 cout << endl;
                cout << "Supplier of " << stocktype [ans2-1] << " is " << company[ans2-1] <<endl;
                cout << "Contact no : " << phone [ans2 -1] << endl;
                cout << "Restock at : Every " << date [ans2-1] << "months" <<endl;
                cout << "Restock amount : " << stockin [ans2 -1] << endl;

            }

    }

    // 2. Add supplier information
    if (ans1 == 2)
    {
         system("cls");
        string comname, phoneno, type, redate, amount;

        cout << endl;
        cout << " Please add in supplier information " << endl;
        cout << "----------------------------------------------------" <<endl;
        cout << endl;

        cout << "Supplier Company : " ;
        cin >> company[3];

        cout << "Contact no       : " ;
        cin >> phoneno;
        phone[3] = phoneno;

        cout << "Product          : " ;
        cin >>  type ;
        type = stocktype[3] ;

        cout << "Restock at       : Every ? months : " ;
        cin >> redate ;
        date[3] = redate;

        cout << "Restock amount   : " ;
        cin >> amount;
        stockin[3] = amount;


        cout << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "Thank you. " << endl;
        cout << endl;

    }

    // checking for continue or exit
    char anskey;
     cout << endl;
    cout << "Do you want to continue ? (y/n) : ";
    cin >> anskey ;

    // error checking
    while (anskey != 'y' && anskey != 'Y' && anskey != 'n' && anskey != 'N')
    {
        cout << "Invalid input. " <<endl;
        cout << "Do you want to continue ? (y/n) : ";
        cin >> anskey ;
    }

    if (anskey == 'y' || anskey == 'Y' ) // continue
    {
        supplierdetails();
    }
    else //exit
    {
        menu();
        system("cls");
    }

}


// management of stock
void managestock()
{
    const int model_num=3;
    const int stock_num=2;
    int addstock[model_num][stock_num],t;
    string response,ds;

    do
    {
        string stock[model_num]={"Pen","Eraser","Ruler"};
        string model[stock_num]={"A","B"};

        // Add amount of stock
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

        //display amount of stock
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
        }
        else if (ds == "no")
        {
            cout << "\n\n\n-------------------------------------------------\n";
            cout << "\nThank you for add new product." << endl;
            system("cls");
            menu();
        }
        else if (ds != "yes" || ds != "no")
        {
            cout << "Invalid answer please redo!!!"<<endl;
            managestock();
        }


       // change the quantity of the stock
        cout << "\n\nDo u want to change the quantity of product (y/n) : " ;
        cin >> response;

        //error checking
        while ( response != "y" && response != "n" )
        {
            cout << "Incorrect responce." << endl;
            cout << "Please re-enter your answer (y/n): ";
            cin >> response;
        }

        //exit
        if ( response == "n" )
        {
            cout << "\n\n-------------------------------------------------\n";
            cout << "\nThank you for add new product." << endl;
            menu();
        }
    }
    while (response == "y");
}





