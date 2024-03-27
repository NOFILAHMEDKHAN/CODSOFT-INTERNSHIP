//calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division.
#include <iostream>
using namespace std;

int main(){
	
    float num1;
    float num2;
    char x;
     while(true){
    cout<<"ENTER FIRST INTEGER:"<<endl;
    
    cin>>num1;
    
    cout<<"ENTER SECOND INTEGER:"<<endl;
    
    cin>>num2;
    
    cout<<"ENTER THE OPERATION YOU WANT TO PERFORM( + , - , * or /):"<<endl;
    
    cin>>x;
    switch(x){
    	
    	case '+':
    		
    		cout<<"THE SUM= "<<num1+num2<<endl;
    		break;
    		
    		case '-':
    			
    			cout<<"THE SUBTRACTION= "<<num1-num2<<endl;
    			break;
				  
    			case '*':
    				
    				cout<<"THE PRODUCT= "<<num1*num2<<endl;
    				break;
    				
    				case '/':
    					
    					cout<<"THE DIVISION= "<<num1/num2<<endl;
    					break;
    					
    					//if the user enter any operator other than +,-,*,/
    					cout<<"INVALID OPERATOR,ENTER VALID OPERATOR"<<endl;
    				}
    			}
return 0;
}
