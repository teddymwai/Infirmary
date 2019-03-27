#include<iostream>
#include<string>

using namespace std;

int main()
	{
		
		/*The following are variables hence will be PRIVATE once using classes*/
		string firstName;		/*patient's first name*/
		string lastName;		/*patient's last name*/
		int yearsOld;			/*patient's age in years*/
		float patientMass;		/*patient's mass in kilograms*/
		float patientHeight;	/*patient's height in metres*/
		double bodyMassIndex;	/*patient'sbody mass index*/
		int symptomDuration;	/*Duration the patient has been having the symptoms*/
				/*
				 *The following are the variables to take in the patient's symptoms
				 *They will be replaced with an array 
				*/
		string symptomOne;
		string symptomTwo;
		string symptomThree;
		string symptomFour;
		
		
	
		
		/*This is the introductory part of the program*/
		cout<<"Hello, welcome to this medical facility"<<endl;/*Can be changed to suit the retailer's branding needs*/
		
		/*This is the data clerk*/
		cout<<"Please provide the following details for identification purposes"<<endl;
		/*Get the fName*/
		cout<<"What is your first name?"<<endl;
		cin>>firstName;
		/*Get the lName*/
		cout<<"What is your last name?"<<endl;
		cin>>lastName;
		/*Get the age*/
		cout<<"Okay "<<firstName<<" "<<lastName<<" how old are you: "<<endl;
		cin>>yearsOld;
		/*Get the mass and height for calculating BMI*/
		cout<<"Another thing "<<firstName<<endl;
		cout<<"Now provide your mass and height respectivley: "<<endl;
		cout<<"Enter your mass in kilograms"<<endl;
		cin>>patientMass;
		cout<<"Enter your height in metres"<<endl;
		cin>>patientHeight;
		cout<<"This are for calulating your BMI"<<endl;
		bodyMassIndex=patientMass/(patientHeight*patientHeight);
		
		/*
		 *Body Mass Index is a simple calculation using a person's height and weight. 
		 *The formula is BMI = kg/m2 where kg is a person's weight in kilograms and m2 is their height in metres squared. 
		 *A BMI of 25.0 or more is overweight. 
		 *While the healthy range is 18.5 to 24.9.
		 *18.4 and lower is an underweight
		*/ 
		
		if(bodyMassIndex>=25.0)
			{
				cout<<"You are overweight "<<lastName<<endl;
				
			}
			else if(bodyMassIndex>=18.5)
					{
						cout<<"You are on the healthy Body Mass Index (BMI) range "<<lastName<<endl;
						
					}
					else if (bodyMassIndex<=18.4)
							{
								cout<<"You are underweight "<<lastName<<endl;
							}
			
		cout<<"What are your symptoms ?"<<endl;
		cin>>symptomOne;
		cin>>symptomTwo;
		cin>>symptomThree;
		cin>>symptomFour;
		
		/*All the above records will be saved to a file */
		/*The file will be available at the doctor's room , to which the patient will be sent*/
		
		/*The section below is at the doctor's room*/
		cout<<"Hi "<<firstName<<" "<<lastName<<endl;
		cout<<"How long have you been having this symptoms? "<<endl;
		cin>>symptomDuration;
		
		
		
		return 0;
		
	}
	
	
	
	
	
