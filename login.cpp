#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define ENTER 13
#define TAB 9
#define BKSPC 8

struct user{
	char fullName[50];
	char email[50];
	char password[50];
	char username[50];
	char phone[50];
};

void takeinput(char ch[50]){
	fgets(ch,50,stdin);
	ch[strlen(ch) -1] =0;
}

char generateUsername(char email[50], char username[50]){
	//abc123@gmail.com
	for( int i=0;1<strlen(email); i++){
		if (email[i] == '@') break;
		else username[i]=email[i];
	}
}

void takepassword(char pwd[50]){
	int i;
	char ch;
	while(1){
		ch = getch();
		if (ch == ENTER || ch == TAB){
			pwd[i] = '\0';
			break;
		} else if(ch == BCKSPC){
			if(i>0){
				i--;
				print("\b \b"); //abc
			}
		}else {
			pwd[i++] = ch;
			printf("* \b")
		}
	}
}
	
	
int main(){
	system("color 0b");
	FILE *fp;
	int opt;
	struct user user;
	char password[50];
	
	printf("\n\t\t\t\t-------------Authentication in process------------------");
	printf("\nPlease select your operation");
	printf("\n1.Signup");
	printf("\n2.Login");
	printf("\3.Exit");
	
	printf("\n\nYour Choice:\t");
	scanf("%d",&opt);
	fgetc(stdin);
	
	
	switch(opt){
		case 1:
			printf("\nEnter your full name:\t")
			takeinput(user.fullName);
			print("\nEnter your email:\t");
			takeinput(user.email);
			printf("\Enter your contact number:\t");
			takeinput(user.phone);
			printf("\nEnter your password:\t");
			takepassword(user.password);
			printf("confirm your password:\t");
			takepassword(password2);
			
			if(!strcmp(user.password, password2)){
				generateUsername(user.email, user.username);
				fp=fopen("users.dat", "a+");
				fwrite(&user,sizeof(struct user),1,fp);
				if(fwrite !=0) printf("\n User registration succesful, your username is %s" user.username);
				else printf("\User registration failed :");
			}
			else{
				printf("\nPassword mismatch")
			}
	}
}
