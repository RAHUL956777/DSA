#include<bits/stdc++.h>
using namespace std;

//pairs
void explainPair(){
    pair<int,int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;

    //nested pairs
    pair<int,pair<int,int>>p={1,{3,4}}
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second

    //pair array
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    // {{0},{1},{2} this should be index of pair array
}

//vectors

/*
vector is a dynamic array we can always change the size of vector container
when you dont know the size of a particular data structure then you can use vector
*/
void explainVector(){
        vector<int>varibalename;//it creates an empty container {}
        verialbeName.push_back(1);//{1}
        varibalename.emplace_back(2);//{1,2}  // it is similar to the push_back but emplace_back is faster than push_back 

        //you can also use vector as a pair
        vector<pair<int,int>>vec;

        v.push_back({1,2});
        v.emplace_back(1,2); //in emiplice back we can pass the arguments directly

        vector<int>v(5,100);//{100,100,100,100,100} //it creates a vector of size 5 and all the elements are 100

        vector<int>v2(5);//{0,0,0,0,0} //it creates a vector of size 5 and all the elements are 0

        vector<int>v1(5,20);
        vector<int>v2(v1);//{20,20,20,20,20} //it creates a copy of v1

        //access data from vector
        vector<int>::iterator it = v.begin();//it points to the first element of the vector
        it++;
        cout<<*(it)<<" "; 

        //more iterators
        vector<int>::iterator it = v.end();//it points to the last element of the vector

        vector<int>::iterator it = v.rend();//it points to the last element of the vector

        cout<<v[0]<<" "<<v.at(0)<<endl;//both are same

        cour<<v.back()<<" "<<v.front()<<endl;//it returns the last and first element of the vector

        //print the vector

        for(vetor<int>::iterator it = v.begin(); it != v.end();it++){
            cout<<*(it)<<" ";
        }

//here auto use used for automatically access the dynamic data types
        for(auto it = v.begin()l it != v.end(); it++){
            cout<<*(it) <<" ";
        }

        for(auto it : v){
            cout<<it<<" ";
        }

        //deletion of vector
        v.erase(v.begin()+1); //{10, 20, 30, 40} it will delete the 20

        //{10,20,30,40,50} after deletion it will remains {10,20,50}
        v.erase(v.begin()+2, v.begin()+4); //[start,end] end is not included


        //insert
        vetor<int>v(2,100); //{100,100}
        v.insert(v.begin(),300); //{300,100,100}
        //if i insert 2  no fo 10 {300,10,10,100,100} 
        v.insert(v.begin()+1,2,10)//[starting position, howmany data will to insert, the data will to insert]

        vector<int> copy(2,50);//{50,50}
        v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100} [starting,after end]

        cout<<v.size()//it will return the length of the vector

        v.pop_back();//it will popout the last element of the vector

        //v1 => {10,20}
        //v2 => {30,40}
        v1.swap(v2); //v1=>{30,40} v2=>{10,20}

        v.clear();//erase the entire vector

        cout<<v.empty();//it will help to check the vetor is empty or not
}

//*insert in a vector is a vwry costly opration , vwtor works like singly linked list


//*for list doubly linkedlist are maintained
void explainList(){
    list<int>ls;

    ls.push_back(2);//{2}
    ls.emplace_back(4);//{2,4}

    ls.push_front(5); // {5,2,4}
    //rest functions same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap
}

void explainDeque(){
    deque<int>dq;
        dq.push_back(1);//{1}
        dq.emplace_back(2);//{1,2}
        dq.push_front(4);//{4,1,2}
        dq.emplace_front(3);//{3,4,1,2}


        dq.pop_back();//{3,4,1}
        dq.pop_front();//{4,1}

        dq.back();
        dq.front();

        //rest function same as vector
        //begin,end,ebegin,rend,clear,insert,size,swap
}

void explainStack(){
    //stack follows LIFO operations
    stack<int>st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(4);//{4,3,2,1}
    st.emplace(5);//{5,4,3,2,1}

    cout<<st.top(); //parints 5 "** st[2] is invalid **"

    st.pop();//{4,3,2,1}

    cout<<st.top();//3

    cout<<st.size();//4

    cout<<st.empty();//false

    //swap
    stack<int>st1,st2;
    st1.swap(st2);

}

void explainQuesu(){
    //it follows FIFO
    queue<int>q;

    q.push(1);//{1}
    q.push(2);//{1,2}
    q.aplice(4);//{1,2,4}

    q.back() += 5

    cout<<q.back(); // prints 9

    cout<<q.front();//prints 1

    q.pop();// {2,9}

    cout<<q.front(); // prints 2

    //size swap empty same as stack

}

//*in priority queue tree data structure are maintained it not stored data like linear manner
void explainPQ(){
    priority_queue<int>pq;

//max heap 
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emiplice(10); // {10,8,5,2}

    cout<<pq.top(); //prints 10

    pq.pop();// {8,5,2}

    cout<<pq.top(); //print 8

    //size swap empty function same as others

 //*note == push and pop operations time complexicity is lon n abd top = O(1)

    //min heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.emplice(10); //{2,5,8,10}

    cout << pq.top(); //prints 2
}

// * set always unique and stored in sorted order
void explainSet(){
    set<int>set;
    set.insert(1); //{1}
    set.emplice(2);//{1,2}
    set.emplice(2);//{1,2} //set should be unique thats why it 
}


int main(){



    return 0;
}