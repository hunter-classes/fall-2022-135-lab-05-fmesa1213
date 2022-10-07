#pragma once

// TASK A//
#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d)
{
if(d==0)return false;
if(n%d==0)
{
return true;
}
else
{
return false;
}
}

int main()
{

  int num,div;

cout<<"Enter the value of dividend"<<endl;
cin>>num;

cout<<"Enter the value of divisor"<<endl;
cin>>div;

bool ans = isDivisibleBy(num,div);

if(ans)
{
cout<<"Yes";
}
else
{
cout<<"No";
}
return 0;
}

//TASK B// 
#include <iostream>
using namespace std;
bool isPrime(int n)
{
	int count = 0;
	for(int i = 2; i<=n-1; i++)
	{
		if(n % i == 0)
		{
			count++;
		}
	}
	if(count == 0 && n%1 == 0 && n%n == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	bool res = isPrime(num);
	if(res == true)
	{
		cout<<"The number "<<num<<" is prime."<<endl;
	}
	else
	{
		cout<<"The number "<<num<<" is not prime."<<endl;
	}
  return 0;
}

//TASK C//
#include <iostream>
int nextPrime(int n);  
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Next prime = %d", nextPrime(n));    
  return 0;
}

int nextPrime(int n)
{
int flag;
    for(int i = (n + 1); ; i++)
{
  flag = 0;
  for(int j = 2; j < (i)/2; j++)
{
  if((i % j) == 0)
{
  flag = 1;   
  break;      
  }
  }
  if(flag == 0 && i > n)
{
   return i;   
}
}
  return 0;
}

//TASK D//

#include <iostream>

bool isDivisibleBy(int n, int d);
bool isPrime(int n);
int nextPrime(int n);
int countPrimes(int num1, int num2);
int main()
{
int num1, num2;
std::cout << "Calculate the number of primes in the given range:\n";
std::cout << "Enter Number1:";
std::cin >> num1;
std::cout << "Enter Number2:";
std::cin >> num2;
std::cout << "The count of prime numbers between " << num1 << " and " << num2 << " is " << countPrimes(num1, num2);
}
bool isDivisibleBy(int n, int d) 
{
return !(bool)(n % d);
}

bool isPrime(int n) 
{
for (int i = 2; i < n/2; ++i) 
{
if (n % i == 0) 
{
return false;
}
}
return true;
}

int nextPrime(int n) 
{
int i = n;
do {
i++;
} while (isPrime(i));
return i;
}
int countPrimes(int num1, int num2) 
{
int count = 0;
if (num2 < 2) 
{
return 0;
}
int temp = num1;
if (temp == 2) 
{
count++;
}
if (temp % 2 == 0) 
{
temp++;
}
for (int i = temp; i <= num2; i = i + 2) 
{
  if (isPrime(i)) 
  {
  count++;
  }
}
return count;
}

//TASK E//

#include <iostream>
using namespace std;
bool isTwin(int n)
{
for(int i=2;i<n;i++)
{
if(n%i==0)
{
return false;
}
}
bool prime = true;
for(int i=2;i<n-2;i++)
{
if((n-2)%i==0)
{
prime = false;
break;
}
}

  if(prime)
{
return true;
}

for(int i=2;i<n+2;i++)
{
  if((n+2)%i==0)
{
return false;
}
}
return true;
}

int main()
{
int n;

cout<<"Enter an integer: ";
cin>>n;

if(isTwin(n)){
cout<<n<<" is a twin prime.";
}
else{
cout<<n<<" is not a twin prime.";
}

return 0;
}

//TASK F//

#include <iostream>
using namespace std;
int nextTwinPrime(int n)
{
while(1)
{
n++;
if(n%2==1)
{
bool flag = true;
for(int i = 2; i <= n/2+1; ++i)
{
if(n%i == 0 || (n+2)%i == 0)
{
flag = false;
break;
}
}
if(flag)
{
return n;
}
}
}
return 0;
}

int main()
{
int tPrime = nextTwinPrime(100);
cout<<"The twin primes are: "<<tPrime<<" and "<<tPrime+2;

return 0;
}

//TASK G//
#include <iostream>
using namespace std;
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}


int largestTwinPrime(int a, int b) {
   int flag = 0;
   int primes[100], k = 0;


   while (a <= b) {
        flag = 0;
        for(int i = 2; i <= a/2; ++i) {
            if(a % i == 0) {
                flag = 1;
                break;
            }
        }
      if(flag == 0) {
         primes[k] = a;
         k++;
      }
        ++a;
    }
   for(int i = k-1; i >= 0; i--) {
      if(isPrime(primes[i]-2) || isPrime(primes[i]+2)) {
         return primes[i];
      }
   }

   return -1;
}
int main() {

   cout << largestTwinPrime(5, 18) << endl;
   cout << largestTwinPrime(1, 31) << endl;
   cout << largestTwinPrime(14, 16) << endl;

   return 0;
}
