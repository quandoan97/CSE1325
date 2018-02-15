#include "rot13.h"
#include "substitution.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string sentence;
	int crypt_option = 1;																		//Ask fo the users method_option in what to do
	int method_option;																			//Ask for the users method_option in which encryption
	string filename;
	string user_key;
	ifstream user_file;																	//declared the file
	cout<< "What is the filename" <<endl;												//get the filename 
	getline(std::cin, filename);
	user_file.open( filename.c_str() );															//Opened the file
	
	cout<< "Type in 26 letters that you want your key to be ex: bvkloips...." <<endl;	//get the key from the user
	getline(std::cin, user_key);
	cout<< user_key <<endl;
	Substitution user_sub(user_key);													//Substitution object				
	
	Rot13 user_rot;																	//Rot object
	

	cout << "========================"<< endl;
	cout << "  ENCRYPTION MACHINE	 "<< endl;
	cout << "========================"<< endl;
			
	cout << "Choose an crypt option:" << endl;
	cout << "1. Encrypt" << endl;
	cout << "2. Decrypt" << endl;
	cin >> crypt_option;

	if(crypt_option == 1){												//We are encrypting															
		cout << "Which method do you want to use:" << endl;
		cout << "1. Rot13" << endl;	
		cout << "2. Substitution" << endl;
		cin >>method_option;

		if(method_option == 1){				//USE Rot13
			while(!user_file.eof()){
				getline(user_file, sentence);
				cout<< user_rot.decrypt(sentence) <<endl;
			}
			cout << user_rot.chars_processed() <<endl;
		}else if(method_option == 2){
			while(!user_file.eof()){
				getline(user_file, sentence);
				cout<< user_sub.encrypt(sentence) <<endl;
			}
			cout << user_sub.chars_processed() <<endl;
		}else{
			cout<<"No Known Input" <<endl;
		}
	}else if(crypt_option == 2){
		cout << "Which method do you want to use:" << endl;
		cout << "1. Rot13" << endl;	
		cout << "2. Substitution" << endl;
		cin >>method_option;

		if(method_option == 1){				//USE Rot13
			while(!user_file.eof()){
				getline(user_file, sentence);
				cout<< user_rot.decrypt(sentence) <<endl;
			}cout << user_rot.chars_processed() <<endl;
		}else if(method_option == 2){
			while(!user_file.eof()){
				getline(user_file, sentence);
				cout<< user_sub.decrypt(sentence) <<endl;
			}
			cout << user_sub.chars_processed() <<endl;
		}else{
			cout<<"No Known Input" <<endl;
		}
	}
	
	user_file.close();
	return 0;
}
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   