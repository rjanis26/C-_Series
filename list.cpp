/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    list <float> mylist;
    list<float>:: iterator it;

    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_front(5);
    mylist.push_front(55);
    mylist.push_back(11);

    mylist.reverse();
    cout<<"Size of the list: " << mylist.size() << endl;

    mylist.clear();
    cout<<"Size of the list: " << mylist.size() << endl;


    for(it = mylist.begin(); it != mylist.end(); it++)
    {
        cout<< *it << "\t";
    }  

    return 0;
} */


/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]  = {5, 2, 1, 6, 3};

    list<int> mylist (arr, arr+5);
    list<int>:: iterator it;

    it = find(mylist.begin(), mylist.end(), 1);
    mylist.erase(it);

    //it = mylist.begin();
    //mylist.erase(it);


    //it = find(mylist.begin(), mylist.end(), 3);

    //  if (it == mylist.end()){
    //      cout<< "Not Found" << endl;
    //  }
    //  else{
    //      cout<< "Found" << endl;
    //  }

    //cout<< *it << endl;
    //mylist.insert(it, 7);



    for(it = mylist.begin(); it != mylist.end(); it++)
    {
        cout<< *it << "\t";
    }
    cout<<"\n";

    return 0;
} */



/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 2, 6, 4};
    list<int> mylist(arr, arr+5);
    list<int>:: iterator it;


    cout << mylist.front() << endl;
    cout << mylist.back() << endl;

    mylist.pop_back();
    mylist.pop_front();
    mylist.pop_back();
    mylist.pop_front();


    for(it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << "\t";
    }

    //list<int> mylist;
    // if (mylist.empty()){
    //     cout << "EMPTY" << endl;
    // }
    // else{
    //     cout << "FILLED" << endl;
    // }

    return 0;
}
 */

/* #include<bits/stdc++.h>
using namespace std;

int main() 
{
    list<int> li;
    list<int>::iterator it;
    li.push_back(1);
    li.push_back(3);
    li.push_back(5);
    li.push_front(9);
    li.push_front(11);
 

    // for(it = li.begin(); it != li.end(); ++it) {
    //     cout << *it << " " ;
    // }
    // auto iterator ...    

    // it = li.begin();
    // advance(it, 3); li.insert(it, 2, 0);
    //it = li.begin(); advance(it, 4); li.insert(it, 3, 2);
    


    for(auto it: li) {
        cout << it << " ";
    }
    cout << "\n";

    // cout << "size of list: " << li.size() << endl;
    // li.pop_front();
    // li.pop_back();

    // cout << "Front of list: " << li.front() << endl;
    // cout << "Back of list: " << li.back() << endl;
    // cout << "size of list: " << li.size() << endl;
    // (li.empty()) ? cout << "Yes\n" : cout << "No\n";

    // li.clear();
    // for(auto it:li) {
    //     cout << it << " " ;
    // }

    // cout << "size of list: " << li.size() << endl;
    
    // (li.empty()) ? cout << "Yes\n" : cout << "No\n";


    return 0;
}
 */


/* #include<bits/stdc++.h>
using namespace std;

int main() 
{   
    list<int> li = {1, 2, 4, 6, 8, 10};
    list<int>li2 = {-1, 5, 7, 9, 10};
    list<int>::iterator it;

    li.push_back(1000);
    //it = li.begin(); advance(it, 3); li.erase(it);
    //li.remove(5);
    //li.reverse();
    //li.sort();
    //li.unique();
    li.merge(li2);

    for(auto it : li) {
        cout << it << " ";
    }
    cout << endl;
    cout << "size of second list: " << li2.size() << endl;
     return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int main() 
{


    return 0;
}


