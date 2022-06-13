#include<json-c/json.h>
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int choice;
	printf("Welcome to ScriptHUB !\n");
	printf("(Created by Shineeeeeuh)\n\n");
	printf("Choose your category :\n");
	cout << endl <<
		"1 - Java\n" <<
		"2 - IPTables Security\n" <<
		"3 - NodeJS\n" <<
		"4 - Web\n" <<
		"5 - Python\n" <<
		"6 - Database\n\n"
		<< "Your choice: ";
	cin >> choice;
	if (choice == NULL) return 0;
	switch (choice) {
	default:
		printf("The category number %s doesn't exists !", choice);
		break;
	}
	return 0;
}