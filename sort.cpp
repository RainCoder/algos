#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
void InsertionSort(auto& data);//prototype


int main()
{
  vector<string> inputs;
  string input;


   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;

    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
  
    
  InsertionSort(inputs);
    
    for(int i = 0; i < inputs.size(); i++)
    {
		cout << inputs[i];
		}
    
   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;

    return 0;
}

void InsertionSort(auto& data){
	 int i, j, minIndex , tmp;
	
	for(i = 0; i < data.size()-1; i++){
	 minIndex = i;
	 
		for (j = i + 1; j < data.size(); j++)
		{
			if (data[j] < data[minIndex])
				minIndex = j;
			}
		if (minIndex !=i)
		{
			tmp = data[i];
			data[i] = data[minIndex];
			data[minIndex] = tmp;
			}
		
		}
		
		return;
	
	}

