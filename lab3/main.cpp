#include <iostream>
using namespace std;
int main()
{
		
	int i,count,exp,coef;

	char arr[256];
	cin.getline(arr,256);
	while(arr[0]!='$')
	{
		/// count
		count = 0
		while(arr[i]>='0'&& arr[i]<='9')
			{ 
	
				count = (count +(arr[i]-'0'))*10;
				i++;
			}
			count = count/10;
			cout<<count<<endl;
			while(count>0)
			{
				coef = 0;
				exp = 0;			
				while(arr[i]>='0'&& arr[i]<='9')
				{ 
	
				//	coef = (coef +(arr[i]-'0'))*10;
					i++;
				}
				coef = coef/10;
				cout<<coef<<endl;
				while(arr[i]<='0'|| arr[i]>='9')
				{ 
	
					
					i++;
				}
		
				while(arr[i]>='0'&& arr[i]<='9')
				{ 
	
				//	exp = (exp +(arr[i]-'0'))*10;
					i++;
				}
				exp = exp/10;	
				cout<<exp<<endl;				
				count--;
			}*/
		cin.getline(arr,256);
	}
}
