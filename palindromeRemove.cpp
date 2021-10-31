// Remove palindromes words from the given sentence


#include <bits/stdc++.h>

using namespace std;

/* Palindrome check */


bool checkPalindrome(string str){

     int i, j;
     i = 0;
     j = str.size()-1;
     
     while(i<j){
     
          if(str[i++] != str[j--])	// check from front and back
              return false;		// not a palindrome
    
     }    
    return true;

}


/* Remove the Palindromes from the string now */

string removingPalindromesFromSentence(string str){

	string outputStr = "", words = "";
	
	//formation of the new string
	str = str + " ";


	int strSize = str.size();

	
	// string traversal
	for(int i = 0; i < strSize; i++){
	
		// check if the string is not empty
		if(str[i] != ' '){
	
			words = words + str[i];		// assigning the words to the sentence
		} 
		else{
			
			//palindrome check then add it to the sentence
			if(!(checkPalindrome(words)))
				outputStr += words + " ";	// adding the output words
			
			// reassigning
			words = "";
			
		}
	}

	return outputStr;

}



int main(){

    string str ="I am good" ;  	//declaring string
    
    //getline(cin,str); //take input of the sentence

    cout<<"Output String: "<<removingPalindromesFromSentence(str);	

    return 0;
}
