/*4.37 (Enforcing Privacy with Cryptography) The explosive
growth of Internet communications and data storage on
Internet-connected computers has greatly increased privacy
concerns. The field of cryptography is concerned with coding
data to make it difficult (and hopefully—with the most advanced
schemes—impossible) for unauthorized users to read. In this
exercise you’ll investigate a simple scheme for encrypting and
decrypting data. A company that wants to send data over the
Internet has asked you to write a program that will encrypt the
data so that it may be transmitted more securely. All the data is
transmitted as four-digit integers.*/

#include<iostream>
using namespace std;

int main(){

    int number(0),first(0),secound(0),third(0),fourth(0);

    cout << "\nEnter number (four-digit integer):";
    cin >> number;

    first = (number/1000) + 7 ;
    secound = ((number/100)%10) + 7 ;
    third = ((number/10)%10) + 7 ;
    fourth = (number%10)+7 ;

    //cout << first  << endl ;
    //cout << secound  << endl ;
    //cout << third  << endl ;
    //cout << fourth  << endl ;

    number = (first*10) + (secound) + (third*1000) + (fourth*100) ;

    cout << "Number after encrypted :" << number << endl ;
    cout << "\nEnter number for decrypting (four-digit integer):" ;
    cin >> number ;

    first = (number/1000) -7 ;
    secound = ((number/100)%10) -7 ;
    third = ((number/10)%10) -7 ;
    fourth = (number%10) -7 ;

    //cout << first  << endl ;
    //cout << secound  << endl ;
    //cout << third  << endl ;
    //cout << fourth  << endl ;

    number = (first*10) + (secound) + (third*1000) + (fourth*100) ;

    cout << "Number after decrypted :" << number << endl ;
}