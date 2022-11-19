#include <sstream>
class Solution {
public:
    string multiply(string num1, string num2) 
    {
         int64_t number1 = 0,number2=0;
         int64_t sum=0; 
        int64_t n1 = num1.length(); 
        int64_t n2 = num2.length();
        for (int i = 0; i < n1; i++) 
        {
        number1 =
        }
        for (int i = 0; i < n2; i++) 
        {
        number2 = number2 * 10 + (int64_t(num2[i]) - 48);
        }
      sum = number1*number2;
      int64_t  m = 1000000007;
      sum=sum%m;
        ostringstream str1;
           str1 << sum;
        string geek = str1.str();
        return geek;
    }
};
