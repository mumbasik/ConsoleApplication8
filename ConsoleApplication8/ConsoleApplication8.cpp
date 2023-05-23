

#include <iostream>
using namespace std;

int main()
{
      //N1!
        int 
        first, 
        second, 
        f1, 
        s2;

        cout << "Enter first number: \n";
        cin >> first;
        cout << "Enter second number:  \n";
        cin >> second; 
        f1 = (first / 10) % 10;
        s2 = (second / 10) % 10;
        cout << "First:  \n";
        cout << first - (f1 * 10) + (s2 * 10) << "\n";
        cout << "Second: \n";
        cout <<  second - (s2 * 10) + (f1 * 10) << "\n";
    //N2!
        int x;
        cout << " Your numbers: \n";
        cin >> x;
        cout << "First number: " << x / 1000 << "\n";
        cout << "Second number: " << (x / 100) % 10 << "\n"; // посчитать сумму каждого числа!!!
        cout << "third number: " << (x / 10) % 100 << "\n";
        cout << "Fourth number: " << x % 10 << "\n";
    //N3!
        int p;
        int y;
        int i;
        cout << "Number: \n";
        cin >> p;
        cout << "Overall: ";
        i = p % 10;                        // как удалить среднюю цифру из трехзначимого числа
        y = p / 100;
        cout << y * 10 + i << "\n";
    //N4!
        int firstbet;
        double percents;
        cout << "Your bet which you put \n";
        cin >> firstbet;
        cout << "Percents of bank \n"; 
        cin >> percents;
        cout << "Overall: \n";
        cout << firstbet * (percents / 12) << '\n';
    //N5!
        int n;
        int m;
        int discount;
        cout << "How big your amount of the money \n";
        cin >> m;
        cout << "What the price your  products \n";
        cin >> n;
        cout << " Discount : ";
        cin >> discount;     
        cout << "Overall result: \n";
        cout << (m / n) + (n * discount) / 100<< "\n";
    //N6!

        const double funts = 405.9;
         double kg1 = 2.20462;
        cout << "Result \n";
        cout << funts * 405.9 << "\n";
        cout << "From kilograms to pounds: \n";
        cout << kg1 * 2.20462 << "\n";

    //N8!
        int b;
        cout << "Numbers: \n";
        cin >> b;
        

    //N9!
        double mercury = 0.055;
        int neptune = 17 ;
        double venus = 0.815;
        int uranus = 14;
        int jupiter = 317;
        int earth = 1;
        double mars = 0.107;
        int saturn = 95;
        cout << "Total weight of all this planets /n";
        cout << mercury + neptune + venus + uranus + jupiter + earth + mars + saturn << "\n";
        cout << "Average \n";
        cout << (mercury + neptune + venus + uranus + jupiter + earth + mars + saturn) / 8 << "\n";
        cout << " Well, we are know that total weight of all planets = 128.997 weights of Earth: \n";
        cout << "Also we know that the biggest planet its Jupiter, it weight = 317";
        cout << 317 - 128.997 << "\n";
        





            




       

        
     
        
           
        
        


            
       
    
}

