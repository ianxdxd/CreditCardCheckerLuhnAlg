#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

bool checkNumericString(const string& s){

    int nDigits = s.length();
    int nSum = 0, isSecond = false;

    for(int i = nDigits - 1; i >= 0; --i){

        int d  = s[i] - '0';
        if(isSecond == true)d = d *2;

        // add 2 digits to handle
        //cases that make 2 digits afer doubling
        nSum += d / 10;
        nSum += d % 10;
        isSecond = !isSecond;

    }
    return (nSum % 10 == 0);

}

int main(){

  cout << "Type your credit card number" << endl;
  string creditCardNumber;
  cin >> creditCardNumber;


  if(checkNumericString(creditCardNumber)){
    cout << "VALID!" << endl;
  }else{
    cout << "NOT VALID!" << endl;
  }

  return 0;

}