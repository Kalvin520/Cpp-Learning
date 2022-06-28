#include <iostream>
#include<string>
using namespace std;
#define Max 1000 //person array

//menu list
void showMenu()
{	
	cout << "************************************" << endl;
	cout << "*****　1.Add contect person    *****" << endl;
	cout << "*****　2.Show contect person   *****" << endl;
	cout << "*****　3.Del contect person    *****" << endl;
	cout << "*****　4.search contect person *****" << endl;
	cout << "*****　5.Revise contect person *****" << endl;
	cout << "*****　6.Clear contect person  *****" << endl;
	cout << "*****　0.Quit Address book     *****" << endl;
	cout << "************************************" << endl;
}
//

struct person//contect struct
{
	string m_Name;//name

	int m_gender;//sex: 1.male,2.female

	int m_Age;//Age

	string m_Phone;//phone_number

	string m_Addr;//Address
};


struct Addressbooks
{
	struct person personArray[Max];//Addressbook array struct

	int m_Size;//Declare person 
};
//

// 1.add contect person
void addPerson(Addressbooks *abs) 
{
	//Determine whether the address book is full if full not add
	if (abs->m_Size == Max)
	{
		cout << "contect is Full, Unable to add" << endl;
		return;
	}
	else
	{
		//add contect 
		
		//name
		string name;
		cout << "Please Enter name: " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//gender
		cout << "Please Enter gender: " << endl;
		cout << "1---male" << endl;
		cout << "2---female" << endl;
		int sex = 0;
		while (true)
		{	
			//if Enter 1 & 2 can out while because enter correct value
			//if Enter error, again enter
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_gender = sex;
				break;
			}
			cout << "Enter error , please again Enter" << endl;
		}

		//age
		cout << "Please Enter Age: " << endl;
		int age;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//phone
		cout << "Please Enter phone number: " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//address
		cout << "Please Enter address: " << endl;
		string  address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
	

		//renew contect person 
		abs->m_Size++;
		cout << "Add success" << endl;
	}
	system("pause");
	system("cls");
}
//

// 2.show all contect person
void showPerson(Addressbooks* abs)
{
	//judge addressbooks people yes or no ==0, if ==0,print null
	//if not ==0,show contect messenge
	if (abs->m_Size == 0)
	{
		cout << "Current information = Null" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "Name: " << abs->personArray[i].m_Name << "\t";
			cout << "gender: " << (abs->personArray[i].m_gender == 1 ? "male" :"female") << "\t";
			cout << "age: " << abs->personArray[i].m_Age << "\t";
			cout << "phone: " << abs->personArray[i].m_Phone << "\t";
			cout << "address: " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//

// 3.Delete contect peroson
// Check whether the contact exists, if it exists, return the location of the existing array, if it does not exist, then return -1;
//parametr1 contect parameter2 Comparename
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//Find the name entered by the user
		if (abs->personArray[i].m_Name == name)
		{
			return i;//Find , return this people in Array ID
		}
	}
	return -1;//if for end not found,return -1;
}

//3.Delete appoint contect peroson
void deletePerson(Addressbooks* abs)
{
	cout << "Please Enter delete contect person" << endl;
	string name;
	cin >> name;

	//ret=-1,no found
	//ret!=-1,found
	int ret=isExist(abs, name);

	if (ret != -1)
	{
		//found person,conduct delete operate
		for (int i = ret; i < abs->m_Size; i++)
		{
			//data move(<---------)
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//renew Addressbook person quantity
		cout << "delete success" << endl;
	} 
	else
	{
		cout << "No such person found" << endl;
	}
	system("pause");
	system("cls");
}

//

// 4.search Specify contect person 
void findPerson(Addressbooks *abs)
{
	cout << "Please Enter you search the contect person" << endl;
	string name;
	cin >> name;

	//Determine whether the specified contact person exists in Addressbooks
	int ret = isExist(abs, name);

	if (ret != -1)//found contect person
	{
		cout << "Name: " << abs->personArray[ret].m_Name << "\t";
		cout << "sex: " << abs->personArray[ret].m_gender << "\t";
		cout << "age: " << abs->personArray[ret].m_Age << "\t";
		cout << "phone: " << abs->personArray[ret].m_Phone << "\t";
		cout << "Address: " << abs->personArray[ret].m_Addr << endl;
	}
	else //no sound contect person
	{
		cout << "No such person found" << endl;
	}
	system("pause");
	system("cls");
			
}

//

// 5. Revise specify contect person data
void modifyPerson(Addressbooks *abs)
{
	cout << "Please Enter your Revise contect person" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)//no found specify contect person
	{
		//name
		string name;
		cout << "Please Enter name:" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//gender
		cout << "Please Enter gender:" << endl;
		cout << "1---male" << endl;
		cout << "2---female" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				//Enter correct break while input
				abs->personArray[ret].m_gender = sex;
				break;
			}
			cout << "Enter error Please renew Enter" << endl;
		}

		//age
		cout << "Please Enter Age: " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//phone
		cout << "Please Enter phone_number: " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//address
		cout << "Please Enter Address: " << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "Revise success" << endl;
	}
	else//no found contect person
	{
		cout <<  "No such person found" << endl;
	}
	//clear peint
	system("pause");
	system("cls");
}

//

// 6.caler all contecr person
void cleanPerson(Addressbooks *abs)
{
	abs->m_Size = 0;//will present all contect person Reset=0 , Do logic clean operate
	cout << "Addressbooks already Empty" << endl;
	//clear print
	system("pause");
	system("cls");
}

//

int main(){

	//create Addressbooks value
	Addressbooks abs;

	//initialization Addressbooks person 
	abs.m_Size = 0;//Initialize the number of people in the address book


	int select = 0;

	
	while (true)
	{
		//Call Menu 
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1://1.Add contect person
			addPerson(&abs);//use address call can Revise Argument
			break;
		case 2://2.Show contect person
			showPerson(&abs);
			break;
		case 3://3.Del contect person
		/*{
			cout << "Please Enter del contect person name: " << endl;
			string name;
			cin >> name;

			if (isExist(&abs, name) == -1)
			{
				cout << "No such person found" << endl;
			}
			else
			{
				cout << "found it " << endl;
			}
			system("pause");
			system("cls");
		}*/
			deletePerson(&abs);

			break;
		case 4://4.search contect person
			findPerson(&abs);
			break;
		case 5://5.Revise contect person
			modifyPerson(&abs);
			break;
		case 6://6.Clear all contect person
			cleanPerson(&abs);
			break;
		case 0://0.Quit Address bookf
			cout << "welcome to use next time " << endl;
			system("pause");
			return 0;
			break;

		default:
			break;

		}
	}
	

}

