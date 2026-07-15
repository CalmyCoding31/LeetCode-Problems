class Solution {
public:
    int gcdOfOddEvenSums(int n) {
     int sumodd=0;
     int sumeven=0;
     int num1=1;
     int num2=2;
     int sum=2;
     while(n--){
     sumodd+=num1;
     num1+=sum;
     sumeven+=num2;
     num2+=sum;
     }
     return __gcd(sumodd,sumeven);
    }
};