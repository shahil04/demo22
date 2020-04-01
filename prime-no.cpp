#include<iostream>
using namespace  std;
class prime
{   public:
    int i,j,count=0;

    void input()
    {
	
        for(i=1;i<=50;i++)
        { count=0;
            for(j=1;j<=i;j++)
         {
             if(i%j==0)
             {
                 count++;
             }
         }
         if(count==2)
			cout<<i<<",";       
        } 
    }
};

int main()
{
    prime d;
    cout<<"the prime no between 1 to 50\n\n";
    d.input();
    return 0;
}

