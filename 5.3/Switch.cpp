#include <iostream>
using namespace std;

main()
{
    cout<<endl<<"thank you for calling Us"<<endl;
     int num , choice;

    cout<<"press 1 for ENGLISH"<<endl;
    cout<<"press 2 for HINDI"<<endl;
    cout<<"press 3 for GUJARATI"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>num;

   
    

    switch(num){
        case 1:
                cout<<"\npress 1 for internet recharge"<<endl;
                cout<<"press 2 for TOP-Up recharge"<<endl;
                cout<<"press 3 for  special recharge"<<endl;
                cout<<"Enter your choice"<<endl;
                cin>>choice;

                    switch (choice)
                    {
                    case 1:
                        cout<<"you have  successfully done a internet recharge "<<endl;
                        break;
                    case 2:
                        cout<<"you have  successfully done a TOP-up recharge "<<endl;
                        break;
                    case 3:
                        cout<<"you have  successfully done a Special recharge "<<endl;
                        break;
                    
                    default:
                    cout<<"invalid choice";
                        break;
                    }

        break;

        case 2:
                cout << "\nInternet Recharge ke liye 1 dabaiye" << endl;
                    cout << "Top-up Recharge ke liye 2 dabaiye" << endl;
                    cout << "Special Recharge ke liye 3 dabaiye" << endl;
                    cin >> choice;
            
                    switch (choice)
                    {
                    case 1:
                        cout << "Aapne safaltapurvak Internet Recharge kar liya he." << endl;
                        break;
                    case 2:
                            cout << "Aapne safaltapurvak Top-up Recharge kar liya he." << endl;
                            break;
                    case 3:
                            cout << "Aapne safaltapurvak Special Recharge kar liya he." << endl;
                            break;

                    default:
                            cout << "Galat vikalp." << endl;
                    }

             break;

        case 3:
                 cout << "\nInternet Recharge mate 1 dabavo" << endl;
                 cout << "Top-up Recharge mate 2 dabavo" << endl;
                 cout << "Special Recharge mate 3 dabavo" << endl;
                 cout << "Enter your choice: ";
                 cin >> choice;

                 switch (choice)
                 {
                 case 1:
                    cout << "Tame safaltapurvak Internet Recharge karyu chhe." << endl;
                    break;
                case 2:
                   cout << "Tame safaltapurvak Top-up Recharge karyu chhe." << endl;
                    break;
                
              case 3:
                    cout << "Tame safaltapurvak Special Recharge karyu chhe." << endl;
                    break;
                    
                  default:
                    cout << "Amanyak vikalp." << endl;
                 }
        break;
        default:
        cout<<"invalid choice";
    }
}