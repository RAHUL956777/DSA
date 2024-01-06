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

    // int age;
    // cout<<"Enter age : ";
    // cin>>age;
    // if(age < 18){
    //     cout<<"Not eligible for job";
    // }
    // else if ( age <=54){
    //     cout<<"You are eligible for job";
    //     if(age >=57){
    //         cout<<"eligible for job but retirement soon.";
    //     }
    // }
    // else{
    //     cout<<"Retirement time";
    // }

    // switch 

    // int day;
    // cout<<"Enter days : ";
    // cin>>day;

    // switch(day){
    //     case 1:
    //         cout<<"Monday";
    //         break;
    //     case 2:
    //         cout<<"Tuesday";
    //         break;
    //     case 3:
    //         cout<<"Wednesday";
    //         break;
    //     case 4:
    //         cout<<"Thursday";
    //         break;
    //     case 5:
    //         cout<<"Friday";
    //         break;
    //     case 6:
    //         cout<<"Saturday";
    //         break;
    //     case 7:
    //         cout<<"sunday";
    //         break;
    //     default :
    //         cout<<"Invalid";
    // }


// arrays
// int arr[5];
// cout<<"enter the 4 values to stored it into am array";
// cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>arr[4];

//todo please note that if you declare a integer arry then you  want to store 7.7 like double valu then it trim it first then stored it

// arrays are stord into consucutive memory location 


// 2d array
// int  newArr[3][5];//rows column

// in 2d array if you do not store any value it's store some gurbage value into it

// string

// string s1 ="Rahul";

// int len = s1.size();
// cout<<s1[len-1];

// you can change any position's value but remember one thing when you modify  a string dont use "" use '' because of it a character


// for loop
        // for(int i =1;i<=10;i++){
        //     cout<<"Hello Rahul "<<i<<endl;
        // }


        // while loop

        // int j=1;
        //  while(j<=5){
        //     cout<<"While loop"<<endl;
        //     j++;
        //  }

        //  do-while loop always run first time while condition is false
        int k = 2;
        do{
            cout<<"do while loop "<<endl;
            k++;
        }while(k<1);
    return 0;
}
