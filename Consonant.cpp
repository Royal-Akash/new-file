#include<iostream>
using namespace std;

int main(){
    
    char c;
    cin>>c;
cout<<"Hello world"<<endl;

    // char a,e,i,o,u;
 
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        cout<<c<<" is a vowel";
        
    }
    else
    {
        cout<<c<<" is a consonant";
    }
    
    
    
    return 0;
}