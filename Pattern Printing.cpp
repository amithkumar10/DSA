//VIDEO: https://www.youtube.com/watch?v=xzstcj3Cuso&t=772s&pp=ygUPcGF0dGVybiBwcm9ncmFt

//Code for Dec Triangle
#include <iostream>
using namespace std;

int main() {
    int sum =5;
    int n = 5;
   for(int i=1; i<=n; i++){
     for(int j=i; j<=n; j++){
       
       cout<<sum<<" ";
       
    }
    cout<<endl;
    sum = sum -1;
   }

    return 0;
}



//Code for Inc Triangle
#include <iostream>
using namespace std;

int main() {
    int sum =5;
    int n = 5;
   for(int i=1; i<=n; i++){
     for(int j=1; j<=i; j++){
       
       cout<<i<<" ";
       
    }
    cout<<endl;
   }

    return 0;
}
