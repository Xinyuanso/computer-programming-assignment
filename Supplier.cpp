#include<iostream>
using namespace std;

int main()
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