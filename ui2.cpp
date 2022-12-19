#include <iostream>
#include <string> 
using namespace std;

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
    while (e != 1);

}


// menu display for the system 
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
    string company [] , phone[] , stocktype[], date[]; 

    // menu of supplier 
    cout << "            Welcome to Supplier Menu            " << endl;
    cout << "------------------------------------------------" << endl;
    cout << " 1. Check supplier information                  " << endl;
    cout << " 2. Add supplier information                    " << endl; 
    cout << "------------------------------------------------" << endl;
    cout << " Please enter your choice : " ;
    cin >> ans1 ;

    // error check 
    while (ans1 != 1 && ans1 != 2 && ans1 != 3 && ans1 != 4)
    {

    cout << "Invalid input.                                  " << endl;
    cout << "Please enter your choice : " ;
    cin >> ans1;


    }

   
    string company [] = {"Stabilo","Fable", "Castle"};
    string phone [] = {"013-7332598" , "015-8972456" , "019-4359827"};
    string stocktype [] = {"Pen" , "Eraser" ,"Ruler"};
    int date [] = {2, 3 ,3};
    int stockin [] = {150 , 120 , 130 } ; 
    int arrel = sizeof(company) / sizeof (string) ; 

    // 1. Check supplier info 
    if (ans1 == 1)
    {


        
           int ans2; 
           
            cout << "Which product do you want to check with ? " << endl;
            cout << "------------------------------------------" << endl;
            for (int i= 0 ; i < arrel ; i++ )
            {
                cout << i + 1 << ". " << stocktype[i] << endl;
            }

            cout << "------------------------------------------" << endl;
            cout << "Please enter your choice : " ;
            cin >> ans 2 ;
            
            while (ans2 != 1 && ans2 != 2 && ans2 != 3)
            { 
                cout << "Invalid input.                         " << endl;
                cout << "Please enter your choice : " ;
                cin >> ans2;
            }

            if (ans2 == 1)
            {
                cout << "Supplier of " << stocktype [ ans2 - 1 ] << " is " << company[ans2-1] <<endl;
                cout << "Contact no : " << phone [ans2 -1] << endl;
                cout << "Restock at : Every " << date [ans2-1 ] << "months" <<endl;
                cout << "Restock amount : " << stockin [ans2 -1 ] << endl;


            }

            if (ans2 == 2 )
            {
                cout << "Supplier of " << stocktype [ans2 -1] << " is " << company[ans2-1] <<endl;
                cout << "Contact no : " << phone [ans2-1] << endl;
                cout << "Restock at : Every " << date [ans2-1 ] << "months" <<endl;
                cout << "Restock amount : " << stockin [ans2 -1 ] << endl;
            }

            if (ans2 == 3)
            {

                cout << "Supplier of " << stocktype [ans2 -1 ] << " is " << company[ans2-1] <<endl;
                cout << "Contact no : " << phone [ans2-1 ] << endl;
                cout << "Restock at : Every " << date [ans2-1 ] << "months" <<endl;
                cout << "Restock amount : " << stockin [ans2 -1 ] << endl;
            }

    }


    // 2. Add supplier information  
    // only done for adding new type ( one product mant supplier no first)
    if (ans1 == 2)
    {
        cout << " Please add in supplier information " << endl;
        cout << "----------------------------------------------------" <<endl;

        cout << "Supplier Company : " ;
        cin >> company[arrel -1 ] ;
        cout << "Contact no       : " ;
        cin >> phone[arrel -1 ]  ;
        cout << "Product          : " ;
        cin >> stocktype[arrel -1];
        cout << "Restock at       : Every " <<  << "months" ;
        cin >> date[arrel -1] ;
        cout << "Restock amount   : " ;
        cin >> stockin[arrel-1];

        

    }





    

    char anskey;  
    cout << "Do you want to continue ? (y/n) : ";
    cin >> anskey ;

    while (anskey != 'y' && anskey != 'Y' && anskey != 'n' && anskey != 'N')
    {
        cout << "Invalid input. " <<endl;
        cout << "Do you want to continue ? (y/n) : ";
        cin >> anskey ; 
    }

    if (anskey == 'y' || anskey == 'Y' )
    {
        supplierdetails(); 
    }
    else 
    {
        menu();
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
    }
    while (response == "y");
}


// pen ?

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




