/*Write a program to store 10 roll no. of weak learners of your class and 10 roll no. of advance learners of your class store in different 2 array and display the record */
#include<iostream>
using namespace std;
class Array{
    private: int a[10]={61,62,63,64,65,69,67,70,72,78};
    int b[10]={66,68,94,95,87,81,82,85,90,98};
    public: void display(){
        cout<<"\n array element in array A is"<<endl;
        for(int i=0;i<10;i++)
        {
            cout<<a[i]<<endl;
        }
        cout<<"\n array element in array B is"<<endl;
        for(int i=0;i<10;i++)
        {
            cout<<b[i]<<endl;
        }

    }
};
int main(){
    Array obj;
    obj.display();
    return 0;
}