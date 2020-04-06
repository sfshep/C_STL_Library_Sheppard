//Dr_T Unit 2 COSC-1437 Starter 
/* Task -
Student:  Stewart Sheppard

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>
using namespace std; 
typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;

//prototype
bool less_than_7(int);

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};

//Credit https://www.geeksforgeeks.org
// Initializing vector object using initializer list.
class MyClassVector2 
{ 
    vector<int> vec2; 
  
public: 
    MyClassVector2(vector<int> v) : vec2(v) 
    { 
    } 
    void print() 
    { 
        /// print the value of vector 
        for (int i = 0; i < vec2.size(); i++) 
            cout << vec2[i] << " "; 
    } 
}; 
//Credit https://www.geeksforgeeks.org
// To initialize a vector reference.
class MyClassVector3 
{ 
    vector<int>& vec3; 
  
public: 
    // this is the right way to assign 
    // the reference of stl container 
    MyClassVector3(vector<int>& arr) 
        : vec3(arr) 
    { 
    } 
    void print() 
    { 
        /// print the value of vector 
        for (int i = 0; i < vec3.size(); i++) 
            cout << vec3[i] << " "; 
    } 
}; 


int main() 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(55.4); 
    vd.push_back(73.4); // additonal 3
    vd.push_back(8.7);
    vd.push_back(4);

    //add 3 elements to the vi vector
    vi.push_back(17);
    vi.push_back(21);
    vi.push_back(64);

   // add 3 elements to the vs vector
    vs.push_back("cat");
    vs.push_back("Mercedes");
    vs.push_back("H.E.B.");


   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

    //display the 3 elements in the vi vector
    cout << "\nValues in vi: \n"; 
   for(int vals : vi)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vi.size(); i++)
   {
     cout << vi[i] << endl; 
   }

   // display the 3 elements in the vs vector
    cout << "\nValues in vs: \n"; 
   for(string vals : vs)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vs.size(); i++)
   {
     cout << vs[i] << endl; 
   }

    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      //Continue with MyClassVector2  
    cout << "\nVector_Using Initialer List" << endl;
      vector<int> vec2; 
          for (int i = 1; i <= 5; i++) 
              vec2.push_back(i); 
          MyClassVector2 obj2(vec2); 
          obj.print(); 

    //Continue with MyClassVector3
    cout << "\nVector_Reference" << endl;
        vector<int> vec3; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector3 obj3(vec3); 
        obj.print(); 

    /****Section_Name***STL_Iterators*/ 

      vector<int> vint(10); // vector with 10 integer numbers
      vint[0] = 1;
      vint[1] = 2;
      vint[2] = 3;
      vint[3] = 4;
      vint[4] = 5;
      vint[5] = 6;
      vint[6] = 7;
      vint[7] = 8;
      vint[8] = 9;
      vint[9] = 10;

      //Display elements of the vector:
      vector<int>:: iterator it;
      cout<< "\n STL Iterators"<< endl;
          for ( it = vint.begin(); it != vint.end(); ++it)
            {
                cout << " " << *it;    
            }
      
    

    /****Section_Name*** Stack*/
    //Write comments that help one better understand what the code is doing.
    // A stack is a container that permits to insert and extract its elements //only from th top of the container.
        stack<int> st;
        st.push(100);   //push number on the stack
        assert( st.size() ==1); //verify one element is on the stack
        assert( st.top() == 100); //verify element value
        
        st.top() = 456;     // assign new value
        assert( st.top() == 456);

        st.pop();       //Remove element
        assert( st.empty() == true );


    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set
    // A set is a container that holds unique elements.
    // The elements in std::set are always sorted.

        set<int> iset;    //set of unique integer numbers
        iset.insert(11); // populate set with some nValues
        iset.insert(-11);
        iset.insert(55);
        iset.insert(22);
        iset.insert(22);
        if (iset.find(55) != iset.end() ) // is value already stored?
        {
          iset.insert(55);
        }
        assert(iset.size() == 4);  // check
        set<int>::iterator it2;
        cout << "\n\nOutput of \"std::set\" code" << endl;
        for (it2 = iset.begin(); it2 != iset.end(); it2++)
        {
          cout << " " << *it2;
        }


    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure
    //Write comments that help one better understand what the code is doing.
    // THe std::pair structure holds one object of type T1 and another one of // type T2, excaclty two elements.  The <utility> header must be used.

          pair< string, string > strstr;
          strstr.first = "Hello";
          strstr.second = "World";

          pair<int,  string > intstr;
          intstr.first = 1;
          intstr.second = "one";

          pair< string, int > strint( "two", 2);
          assert(strint.first == "two");
          assert(strint.second ==2);


    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert
    //Write comments that help one better understand what the code is doing.
    // The map::insert() is a built in function used to insert elements with // a particular key in the map container.
            MapT amap;
            pair< MapIterT, bool> result = 
                amap.insert( make_pair( "Fred", 45));
            assert( result.second == true );
            assert( result.first->second == 45 );
            result = amap.insert( make_pair( "Fred", 54) );
            //Fred was already in the map, and result.first
            //simply points there now;
            assert (result.second == false);
            assert( result.first -> second == 45);
           
    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary
    //Write comments that help one better understand what the code is doing.
    // A map is a container that holds unique pairs of keys and values.
    // The elements are always sorted by its keys.  Each element of the map // is formed by the combination of th ekey value and a mapped value.
    // Map iterators access both the key and the mapped value at the same //time.

            map< string, string > phone_book;
            phone_book["411"] = "Directory";
            phone_book["911"] = "Emergency";
            phone_book["508-678-2811"] = "BCC";
            if ( phone_book.find("411") != phone_book.end())
            {
              phone_book.insert(
                make_pair(
                  string( "411"),
                  string( "Directory")
                )
              );
            }
            assert( phone_book.size()==3);
            map< string, string >::const_iterator it3;
            cout << "\n\nMap Summary" << endl;
            for ( it3 = phone_book.begin(); it3 != phone_book.end(); ++it3)
            {
              cout << " " << it3->first
                   << " " << it3->second
                   << endl;
            }




    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example
    //Write comments that help one better understand what the code is doing.
    // std::sort - Sorts an array in ascending order

          int arr[100];
          sort(arr, arr + 100);
          vector<int> v1;
          sort(v1.begin(), v1.end() );



    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function
    //Write comments that help one better understand what the code is doing.
    // Counts the number of elements in a range for which a specified //predicate function is true

    bool less_than_7(int value)
    {
        return value < 7;
    }
     vector< int > v2;
     int count_less = std::count_if( v1.begin(), v1.end(), less_than_7);
     

      return 0; 
 }