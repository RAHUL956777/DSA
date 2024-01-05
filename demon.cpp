#include<bits/stdc++.h>

using namespace std;

int main(){
    // std::cout<<"welcome Rahul"<<"\n";
    // cout<<"welcome Rahul" << endl; //it is similar to \n
    // cout<<"welcome Rahul";

    // int x,y;
    // cin>>x>>y;
    // cout<<"The value of x is : "<<x << " and the value of y : "<<y;


    // int
    // int dataType = 10;
    // long - it's gives you to store more wider range for integer
    // long x = 1250;
    // long long - it's gives you to store more wider range compare to long for integer 


    //float,double
    // todo note: --- float and double are both data types used to represent floating-point numbers in programming languages. The main difference between them lies in the precision and size of the numbers they can store.
    // float a=5.10;
    // double b = 154.2541;

    // string and getline
        // string str;
        // cin>> str;
        // cout<<str;
    // string only contains upto a space

    string s;
    // getline(cin,s);  //getline helps to get a entire line as a string
    // cout<<s;

    // character--it takes less memory compare to string
    //todo make sure that character is defined into '' not in double coute ""

    // write a progarm that takes an input of age and prints if you are adult or not
    // int age;
    // cout<<"please enter your age : ";
    // cin>>age;
    // if(age >= 18){
    //     cout<<"Your are an adult and your age is : "<<age;
    // }else{
    //     cout<<"Your are not an adult and your age is : "<<age;
    // }

    /*
    A school ha s following rules for grading system:
    a. Bellow 25 - F
    b. 25 to 44 - E
    c.45 to 49 - D
    d. 50 to 59 - C
    e.60 to 79 - B
    f. 80 to 100 - A

    Ask user to enter marks and print thw corresponding grade
    */

    // int number;
    // cout << "Enter the number";
    // cin>>number;

    // if(number < 25){
    //     cout<<"F";
    // }
    // else if(number <=44){
    //     cout<<"E";
    // }
    // else if( number <=49){
    //     cout<<"D";
    // }
    // else if(number <=59){
    //     cout<<"C";
    // }
    // else if( number <=79){
    //     cout<<"B";
    // }
    // else if( number <=109){
    //     cout<<"A";
    // }


    /*
    Take the age from the user and then decide acordingly
    1.If age < 18,
        print -> not eligible for job
    2.ifage > =18,
        print -> eligible for job
    3.if age >=55 and age <= 57,
        print ->eligible for job but retairment soon
    4.if age > 57
        print -> retirement time
    */

    int age;
    cout<<"Enter age : ";
    cin>>age;
    if(age < 18){
        cout<<"Not eligible for job";
    }
    else if ( age <=54){
        cout<<"You are eligible for job";
        if(age >=57){
            cout<<"eligible for job but retirement soon.";
        }
    }
    else{
        cout<<"Retirement time";
    }



    return 0;
}
