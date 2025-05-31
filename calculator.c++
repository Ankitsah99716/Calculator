#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    cout<<"Available operations\n";
    cout<<"+ for addition\n";
    cout<<"- for sub\n";
    cout<<"* for mult\n";
    cout<<"/ for division\n";
    cout<<"Which operation?\n";
    cin>>op;
    switch(op){
        case '+':cout<<"Enter two no\n";
                  cin>>a;
                  cin>>b;
                  cout<<"result"<<a+b<<endl;
                  break;
        case '-':cout<<"Enter two no\n";
                  cin>>a;
                  cin>>b;
                  cout<<"result"<<a-b<<endl;
                  break; 
         case '*':cout<<"Enter two no\n";
                   cin>>a;
                   cin>>b;
                   cout<<"Result"<<a*b<<endl;
                   break;
          case '/':cout<<"Enter two no\n";
                   cin>>a;
                   cin>>b;
                   cout<<"Result"<<a/b<<endl;
                   break;                          
    } return 0;

}