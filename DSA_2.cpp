#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//************************ Global Variables ****************************
int array[5],value=-1;
//**********************************************************************

void input_values()
{
    system("CLS");
    for(int i=0; i<5; i++)
    {
        cout<<"Enter "<<i+1<<" number=";
        cin>>array[i];
    }
}

void display_values()
{
    system("CLS");
    for(int i=0; i<5; i++)
    {
        if(array[i]==0)
        {
            continue;
        }
        else
        {
            cout<<i+1<<". number is="<<array[i]<<endl;
        }
    }
    
    if(array[0]==0 && array[1]==0 && array[2]==0 && array[3]==0 && array[4]==0)
    {
        cout<<"********** Array is Empty!! *************"<<endl;
    }
    cout<<endl<<endl<<endl<<"Press Any Key To Continue...";
    
    getch();
}

void delete_values()
{
    bool flag=true;
    system("CLS");
    cout<<"Enter value to delete=";
    cin>>value;

    for(int i=0; i<5; i++)
    {
        if(array[i]==value)
        {
            array[i]=0;
            cout<<"******** "<<value<<" is deleted from the array successfully!! **********";
            flag=false;
        }
    }

    if(flag)
    { 
        cout<<"************* Ypu enter Invalid value!! **************";
    }

    cout<<endl<<endl<<endl<<"Press Any Key To Continue...";
    getch();    
}

int main()
{
    while(true)
    {
        int user_value=-1;
        system("CLS");
        cout<<endl<<endl<<endl;
        cout<<"Enter '1' to add values in array"<<endl;
        cout<<"Enter '2' to display values in array"<<endl;
        cout<<"Enter '3' to delete value from array"<<endl;
        cout<<endl<<endl<<endl;
        cout<<"Enter your value=";
        cin>>user_value;

        switch (user_value)
        {
        case 1:
            input_values();
        break;
        
        case 2:
            display_values();
        break;

        case 3:
            delete_values();
        break;

        default:
            system("CLS");    
            cout<<"****** Your value is Invalid!! *******"<<endl<<endl;
            cout<<"     Please enter correct value";
            getch();
        break;
        }
    }
    
}