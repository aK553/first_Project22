//Check the password strong or weak
#include<iostream>//Header file include the all input and output library  files
#include<string>//Header file include the all string commnets and manipulation 
#include<cctype>// declares a set of funtions to classify and transform individual characters
using namespace std;
bool isStrong(string)//Create a bool function for return strong or weak

int main()
{
 string password; // create a variables and  store the string
 cout<<"Enter the password:"; 
 getline(cin,password);// get the input from user
 if(isStrong(password))//check is the  password is strong
  cout<<"The given password is strong!";//if password is strong,print password is  strong
 else
  cout<<"The given password is weak";//else password is weak, print password is weak

    return 0;
}

bool isStrong(string password) // name of the main program 
{
 bool uppercase = false, numeric = false, special = false;
  
  for(auto c :password)// converted the string to char
  {
   if(isupper(c))//if password contains uppercase then, return true
     uppercase = true;
   if(ispunct(c))//if password contains punct then, return true
    special = true;
   if(isdigit(c))//if password contains digital then, return true
    numeric = true;
  }

  if(uppercase && numeric && special && password.size()>=8)//if password contains
{ 
  return true;// if all the conditon is passed then output return true, strong password 
  return false;// if any one condition fails then return is false , weak password 
}
}



