# include <iostream>

using namespace std;

int main( ) 
{ 
    float PI = 3.14;                // variables can be initialized during declaration 
    int rad; 
    double a;
    double b;
    double c;
    cout<< "Enter the radius"; 
    cin>>rad; 
    cout<< "Area of the circle is: "<< PI * rad * rad<<endl; 
    
    cout<< "Enter a"; 
    cin>>a;
    cout<< "Enter b"; 
    cin>>b;
    cout<< "Enter c"; 
    cin>>c;
 
    cout<< "Perimeter of the triangle is: "<< a+b+c;

return 0;

} 
