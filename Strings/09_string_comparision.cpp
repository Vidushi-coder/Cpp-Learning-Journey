#include <iostream>
using namespace std;

int main() {

    string str1 = "mom";
    string str2 = "mommy";
    
    //comparing characters i.e. only checks same or not
    if(str1==str2){
        cout<<"Both the string are same"<<endl;
    }
    else{
        cout<<"Both the string are not same"<<endl;
    }

    //comparing characters i.e. checks equal?smaller?greater?
    if(str1.compare(str2)==0){
        cout<<"Both the string are same"<<endl;
    }
    else{
        cout<<"Both the string are not same"<<endl;
    }

    //Substring Comparison (Compare a piece of str1 to all of str2)
    if(str1.compare(0,3,str2)==0){
        cout<<"Both the string are same"<<endl;
    }
    else{
        cout<<"Both the string are not same"<<endl;
    }

    //Substring to Substring Comparison (Compare a piece of str1 to a piece of str2)
    if(str1.compare(0,3,str2,0,3)==0){
        cout<<"Both the string are same"<<endl;
    }
    else{
        cout<<"Both the string are not same"<<endl;
    }

    return 0;
}