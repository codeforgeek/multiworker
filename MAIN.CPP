#include"s2v.h"
int arr[4][4]={{1,4,15,7},{8,10,2,11},{4,3,6,13},{2,9,5,0}};
static char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
int color;
class mw
{
	private:
		 int user;
	public:
		 void ch_pass();
		 void admin_standard();
		 void admin_scientific();
		 void normal_temp_credit();
		 void temp_calc();
		 void welcome();
		 void open_door();
		 void close_door();
		 void select_user();
		 void inventory();
		 void normal_temp(int color);
		 void temp_cal();
		 void cal_temp(int yr,int mo,int fd,int da);
		 void credit();
		 void normal();
		 void normal_inv_msg();
		 void normal_calc();
		 void admin_calc();
		 void admin();
		 void border();
		 void admin_login();
		 void admin_boot();
		 void normal_menu();
		 void time();
		 void game();
		 void game1();
		 void admin_game();
		 void check();
		 void display();
		 void boxes();
		 int  getkey();
		 void msgbox(char title[20],char message[100]);
		 void calender();
		 void cal(int yr,int mo,int fd,int da);
		 void calender_admin();
		 void cal_admin(int yr,int mo,int fd,int da);
		 void admin_menu(int cl);
};
struct pass
{
		 char name[40];
		 char pass[10];
		 char or[30];
}e;
void mw::normal_temp_credit()
{
		cleardevice();
		settextstyle(4,0,7);
		setcolor(RED);
		setbkcolor(WHITE);
		outtextxy(40,30,"Programmed by..");
		settextstyle(4,0,6);
		setcolor(8);
		outtextxy(80,140,"Shahid");
		outtextxy(80,220,"Azim");
		outtextxy(80,300,"Imaad");
}
void mw::game1()
{
		int r=3,c=3,t,ch;
		cleardevice();
		mw::boxes();
		mw::display();
		while(1)
		{
			ch=getkey();
			switch(ch)
			{
				case 80:
					if(r==0)
						{
							printf("\a");
							break;
						}
					t=arr[r][c];
					arr[r][c]=arr[r-1][c];
					arr[r-1][c]=t;
					r--;
					mw::display();
					break;
				case 77:
					if(c==0)
					 {
						  printf("\a");
						  break;
					 }
					 t=arr[r][c];
					 arr[r][c]=arr[r][c-1];
					 arr[r][c-1]=t;
					 c--;
					 mw::display();
					 break;
			      case 72:
				       if(r==3)
				       {
						 printf("\a");
						 break;
				       }
				       t=arr[r][c];
				       arr[r][c]=arr[r+1][c];
				       arr[r+1][c]=t;
				       r++;
				       mw::display();
				       break;
			      case 75:
					   if(c==3)
					   {
					     printf("\a");
					     break;
					   }
					   t=arr[r][c];
					   arr[r][c]=arr[r][c+1];
					   arr[r][c+1]=t;
					   c++;
					   mw::display();
					   break;
			       case 1:
					   mw::normal_temp(color);
		   }
		   mw:: check();
	     }
}
void mw::temp_calc()
{
		 long double x,y;
		 char ch;
		 do
		 {
			cleardevice();
			mw::border();
			gotoxy(10,4);
			setbkcolor(0);
			setcolor(RED);
			outtextxy(50,40,"This is a Calculator containing the following functions:-");
			setcolor(BLUE);
			rectangle(50,70,300,180);
			gotoxy(10,6);
			cout<<"->          Addition:";
			gotoxy(10,7);
			cout<<"->          substraction:";
			gotoxy(10,8);
			cout<<"->          Multiplication:";
			gotoxy(10,9);
			cout<<"->          Division:";
			gotoxy(10,10);
			cout<<"->          Percentage:";
			gotoxy(10,11);
			cout<<"->          Power";
			rectangle(350,70,600,180);
			gotoxy(48,6);
			cout<<"1:>Type [+] for Addition";
			gotoxy(48,7);
			cout<<"2:>[-] for Subtraction";
			gotoxy(48,8);
			cout<<"3:>[*]for Multiplication";
			gotoxy(48,9);
			cout<<"4:>[/] for Division";
			gotoxy(48,10);
			cout<<"5:>[%] for Percentage";
			gotoxy(10,13);
			rectangle(50,220,600,400);
			ch=getche();
			if(ch=='+')
			{
				gotoxy(10,15);
				cout<<"You are using Addition\n";
				gotoxy(10,17);
				cout<<"Enter First Number=";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Second Number= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is \n";
				gotoxy(10,20);
				cout<<x+y;
				getch();
			}
			if(ch=='-')
			{
				gotoxy(10,15);
				cout<<"You are using Subtraction";
				gotoxy(10,17);
				cout<<"Enter First Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Second Number= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<x-y;
				getch();
			}
			if(ch=='*')
			{
				gotoxy(10,15);
				cout<<"You are using Multiplication\n";
				gotoxy(10,17);
				cout<<"Enter First Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Second Number= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<x*y;
				getch();
			}
			if(ch=='/')
			{
				gotoxy(10,15);
				cout<<"You are using Division ";
				gotoxy(10,17);
				cout<<"Enter First Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Second Number= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<x/y;
				getch();
			}
			if(ch=='%')
			{
				gotoxy(10,15);
				cout<<"You are using Percentage ";
				gotoxy(10,17);
				cout<<"Enter Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Percentage= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<y/100*x;
				getch();
			}
			if(ch=='q')
			{
			       mw::normal_temp(color);
			}

		}
		while(1);

}
void mw::cal_temp(int yr,int mo,int fd,int da)
{
		  int i,r,c;
		  char a;
		  cleardevice();
		  setbkcolor(0);
		  rectangle(20,40,550,400);
		  rectangle(22,38,552,398);
		  line(20,65,550,65);
		  line(20,100,550,100);
		  line(20,250,550,250);
		  line(20,350,550,350);
		  gotoxy(25,4);
		  cout<<months[mo-1]<<yr;
		  gotoxy(10,6);
		  cout<<" Mon  Tue   Wed   Thu   Fri   sat   Sun";
		  r=9;
		  c=11+6*fd;
		  for(i=1;i<=da;i++)
		  {
			    gotoxy(c,r);
			    cout<<i;
			    if(c<=41)
			    c=c+6;
			    else
			    {
				     c=11;
				     r=r+1;
			    }
		  }
		  gotoxy(11,18);
		  cout<<"UP-Next year           DOWN-prev. year" ;
		  gotoxy(11,19);
		  cout<<"RIGHT-Next month       Left-prev months";
		  gotoxy(26,21);
		  cout<<"ESC-Go Back To Main Screen";
		  gotoxy(14,24);
		  cout<<"This is The Calender of "<<months[mo-1]<<" "<<yr;
}
void mw::admin_scientific()
{
		 long double x,y;
		 char ch;
		 do
		 {
			cleardevice();
			mw::border();
			gotoxy(10,4);
			setbkcolor(0);
			setcolor(RED);
			outtextxy(50,40,"This is a Calculator containing the following functions:-");
			setcolor(BLUE);
			rectangle(50,70,300,180);
			gotoxy(10,6);
			cout<<"->          sin:";
			gotoxy(10,7);
			cout<<"->          cos:";
			gotoxy(10,8);
			cout<<"->          tan:";
			gotoxy(10,9);
			cout<<"->          Power:";
			gotoxy(10,10);
			cout<<"->          abs:";
			gotoxy(10,11);
			cout<<"->          Log:";
			rectangle(350,70,600,180);
			gotoxy(48,6);
			cout<<"1:>Type S for Sin Operation";
			gotoxy(48,7);
			cout<<"2:>Type c for cos Operation";
			gotoxy(48,8);
			cout<<"3:>Type t for tan operation";
			gotoxy(48,9);
			cout<<"4:> Type P for Power operation";
			gotoxy(48,10);
			cout<<"5:>Type a  for Absoloute Value";
			gotoxy(48,11);
			cout<<"6:>Type l for log operation";
			gotoxy(10,13);
			rectangle(50,220,600,400);
			ch=getche();
			if(ch=='s')
			{
				gotoxy(10,15);
				cout<<"You are using Sin Function";
				gotoxy(10,17);
				cout<<"Enter Value";
				gotoxy(10,18);
				cin>>x;
				gotoxy(10,19);
				cout<<"Your answer is \n";
				gotoxy(10,20);
				cout<<sin(x);
				getch();
			}
			if(ch=='c')
			{
				gotoxy(10,15);
				cout<<"You are using Cos function";
				gotoxy(10,17);
				cout<<"Enter Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<cos(x);
				getch();
			}
			if(ch=='t')
			{
				gotoxy(10,15);
				cout<<"You are using Tan operation\n";
				gotoxy(10,17);
				cout<<"Enter  Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<tan(x);
				getch();
			}
			if(ch=='p')
			{
				gotoxy(10,15);
				cout<<"You are using Power Function ";
				gotoxy(10,17);
				cout<<"Enter First Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Power";
				gotoxy(10,19);
				cin>>y;
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<pow(x,y);
				getch();
			}
			if(ch=='a')
			{
				gotoxy(10,15);
				cout<<"You are using Absolute ";
				gotoxy(10,17);
				cout<<"Enter Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Your answer is \n";
				gotoxy(10,20);
				cout<<abs(x);
				getch();
			}
			if(ch=='l')
			{
				gotoxy(10,15);
				cout<<"You are using Log";
				gotoxy(10,17);
				cout<<"Enter Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<log(x);
				getch();
			}
			if(ch=='q')
			{
				mw::admin_calc();
			}

		}
		while(1);
}
void mw::admin_standard()
{
		 long double x,y;
		 char ch;
		 do
		 {
			cleardevice();
			mw::border();
			gotoxy(10,4);
			setbkcolor(0);
			setcolor(RED);
			outtextxy(50,40,"This is a Calculator containing the following functions:-");
			setcolor(BLUE);
			rectangle(50,70,300,180);
			gotoxy(10,6);
			cout<<"->          Addition:";
			gotoxy(10,7);
			cout<<"->          substraction:";
			gotoxy(10,8);
			cout<<"->          Multiplication:";
			gotoxy(10,9);
			cout<<"->          Division:";
			gotoxy(10,10);
			cout<<"->          Percentage:";
			gotoxy(10,11);
			cout<<"->          Power";
			rectangle(350,70,600,180);
			gotoxy(48,6);
			cout<<"1:>Type [+] for Addition";
			gotoxy(48,7);
			cout<<"2:>[-] for Subtraction";
			gotoxy(48,8);
			cout<<"3:>[*]for Multiplication";
			gotoxy(48,9);
			cout<<"4:>[/] for Division";
			gotoxy(48,10);
			cout<<"5:>[%] for Percentage";
			gotoxy(10,13);
			rectangle(50,220,600,400);
			ch=getche();
			if(ch=='+')
			{
				gotoxy(10,15);
				cout<<"You are using Addition\n";
				gotoxy(10,17);
				cout<<"Enter First Number=";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Second Number= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is \n";
				gotoxy(10,20);
				cout<<x+y;
				getch();
			}
			if(ch=='-')
			{
				gotoxy(10,15);
				cout<<"You are using Subtraction";
				gotoxy(10,17);
				cout<<"Enter First Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Second Number= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<x-y;
				getch();
			}
			if(ch=='*')
			{
				gotoxy(10,15);
				cout<<"You are using Multiplication\n";
				gotoxy(10,17);
				cout<<"Enter First Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Second Number= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<x*y;
				getch();
			}
			if(ch=='/')
			{
				gotoxy(10,15);
				cout<<"You are using Division ";
				gotoxy(10,17);
				cout<<"Enter First Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Second Number= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<x/y;
				getch();
			}
			if(ch=='%')
			{
				gotoxy(10,15);
				cout<<"You are using Percentage ";
				gotoxy(10,17);
				cout<<"Enter Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Percentage= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<y/100*x;
				getch();
			}
			if(ch=='q')
			{
			       mw::admin_calc();
			}

		}
		while(1);
}
void mw::welcome()
{
		mw::open_door();
		cleardevice();
		mw::border();
		setcolor(BLUE);
		settextstyle(4,0,6);
		outtextxy(100,100,"Welcome");
		outtextxy(90,160,"In Multiworker");
		setcolor(WHITE);
		settextstyle(0,0,2);
		outtextxy(100,350,"Press Enter To Continue....");
		getch();
		mw::admin_boot();
}
void mw::open_door()
{

	rectangle(300,20,300,470);
	int a=300;
	int b=340;
	for(int i=1;i<300;i++)
	{
		delay(4);
		cleardevice();
		rectangle(a,20,b,470);
		a++;
		b--;
	}
	cleardevice();
}
void mw::close_door()
{
	int a=599;
	int b=41;
	setbkcolor(0);
	setcolor(WHITE);
	rectangle(a,20,b,470);
	for(int j=1;j<280;j++)
	{
		delay(4);
		cleardevice();
		rectangle(a,20,b,470);
		a--;
		b++;
	}
}
void mw::inventory()
{
		FILE *fp,*ft;
		char another,choice;
		struct emp
		{
		int id;
		char name[40];
		int age;
		float bs;
		char dept[40];
		};
		struct emp e;
		char empname[40];
		int temp_id;
		long int recsize;
		fp=fopen("EMP.DAT","rb+");
		if(fp==NULL)
		{
			   fp=fopen("EMP.DAT","wb+");
			   if(fp==NULL)
			   {
			    puts("Cannot open file");
			    exit(1);
			}
		  }
	  recsize=sizeof(e);
	  while(1)
	  {
		 cleardevice();
		 setbkcolor(0);
		 mw::border();
		 rectangle(130,90,450,358);
		 rectangle(132,88,452,360);
		 line(130,115,450,115);
		 line(130,117,450,117);
		 gotoxy(30,7);
		 printf("Menu of Database:");
		 gotoxy(30,10);
		 printf("1.Add Records");
		 gotoxy(30,12);
		 printf("2.List Records");
		 gotoxy(30,14);
		 printf("3.Modify Records");
		 gotoxy(30,16);
		 printf("4.Delete records");
		 gotoxy(30,18);
		 printf("5.Make Report");
		 gotoxy(30,20);
		 printf("6.Search");
		 gotoxy(30,22);
		 printf("0.exit");
		 fflush(stdin);
		 choice=getche();
		 switch(choice)
		 {
			case '1':
			{
				fseek(fp,0,SEEK_END);
				another='y';
				cleardevice();
				mw::border();
				gotoxy(20,3);
				printf("Enter Record of employee.");
				while(another=='y')
				{
					gotoxy(20,8);
					cout<<"Enter Id";
					scanf("%d",&e.id);
					gotoxy(20,10);
					printf("Enter name:\n");
					gotoxy(20,12);
					scanf("%s",e.name);
					gotoxy(20,14);
					printf("Enter age:\n");
					gotoxy(20,16);
					scanf("%d",&e.age);
					gotoxy(20,18);
					printf("Enter basic sallery:\n");
					gotoxy(20,20);
					scanf("%f",&e.bs);
					gotoxy(20,22);
					cout<<"Enter Department:";
					gotoxy(20,24);
					scanf("%s",e.dept);
					fwrite(&e,recsize,1,fp);
					gotoxy(20,26);
					printf("Add Another records:[Y/N]\n");
					fflush(stdin);
					another=getche();
				}
			 break;
			}
		case '2':
		  {
					rewind(fp);
					int i=9;
					cleardevice();
					mw::border();
					gotoxy(20,3);
					printf("Record in the database is:");
					gotoxy(20,6);
					printf("id              Name");
					gotoxy(20,7);
					cout<<"---------------------------------";
					while(fread(&e,recsize,1,fp)==1)
					{
						 gotoxy(20,i);
							printf("%d              %s",e.id,e.name);
						i++;
					}
					getche();
					break;
		  }
		case '3':
			{
					another='y';
					gotoxy(20,3);
					cleardevice();
					printf("Modify The Record");
					while(another=='y')
					{
					  cleardevice();
					  mw::border();
					  gotoxy(20,8);
					  printf("Enter ID of Employee to modify:\n");
					  gotoxy(20,10);
					  scanf("%d",&temp_id);
					  rewind(fp);
					  while(fread(&e,recsize,1,fp)==1)
					  {
						 if(temp_id==e.id)
						 {
							gotoxy(20,12);
							cout<<"Enter new id";
							gotoxy(20,14);
							scanf("%d",&e.id);
							gotoxy(20,16);
							printf("Enter new name:\n");
							gotoxy(20,18);
							scanf("%s",e.name);
							gotoxy(20,20);
							printf("Enter new age:\n");
							gotoxy(20,22);
							scanf("%d",&e.age);
							gotoxy(20,24);
							printf("Enter new basic sallery:\n");
							gotoxy(20,26);
							scanf("%f",&e.bs);
							gotoxy(20,28);
							cout<<"Enter Department:";
							scanf("%s",e.dept);
							fseek(fp,-recsize,SEEK_CUR) ;
							fwrite(&e,recsize,1,fp);
							break;
						}
					  }
				  gotoxy(20,29);
				  printf("Modify another records:[Y/N]\n");
				  fflush(stdin);
				  another=getche();
				}
				break;
			 }
	  case '4':
		  {
						 another='y';
						 cleardevice();
						 mw::border();
						 gotoxy(20,3);
						 printf("Delete an Employee");
						 while(another=='y')
						 {
							  gotoxy(20,8);
							  printf("Enter id of employee to delete:\n");
							  gotoxy(20,10);
							  scanf("%d",&temp_id);
							  ft=fopen("TEMP.DAT","wb");
							  rewind(fp);
							  while(fread(&e,recsize,1,fp)==1)
							  {
								 if(temp_id!=e.id)
								 fwrite(&e,recsize,1,ft);
							  }
							fclose(fp);
							fclose(ft);
							remove("EMP.DAT");
							rename("TEMP.DAT","EMP.DAT");
							fp=fopen("EMP.DAT","rb+");
							gotoxy(20,12);
							printf("Delete another Records[Y/N]:\n");
							fflush(stdin);
							another=getche();
						  }
					 break;
				      }
		  case '5':
			  {
					cleardevice();
					rectangle(6,20,639,471);
					rewind(fp);
					int i=5;
					while(fread(&e,recsize,1,fp)==1)
					{
						gotoxy(5,i);
						 cout<<e.id<<setw(18)<<e.name<<setw(18)<<e.age<<setw(12)<<e.bs<<setw(16)<<e.dept;
						 i=i++;
					}
					setcolor(RED);
					line(86,20,86,471);
					setcolor(GREEN);
					line(300,20,300,471);
					setcolor(BLUE);
					line(350,20,350,471);
					setcolor(WHITE);
					line(450,20,450,471);
					setcolor(YELLOW);
					line(6,51,639,51);
					setcolor(WHITE);
					gotoxy(4,3);
					cout<<"EMP-ID";
					gotoxy(18,3);
					cout<<"EMP-NAME";
					gotoxy(40,3);
					cout<<"AGE";
					gotoxy(46,3);
					cout<<"EMP-SALARY";
					gotoxy(59,3);
					cout<<"EMP-DEPARTMENT";
					getch();
					break;
				  }
		  case '6':
			{
					cleardevice();
					mw::border();
					gotoxy(10,10);
					cout<<"Enter EMP-ID to search:";
					gotoxy(10,12);
					cin>>temp_id;
					rewind(fp);
					int i=15;
					gotoxy(12,13);
					cout<<"ID"<<setw(10)<<"Name"<<setw(15)<<"Age"<<setw(15)<<"Salary"<<setw(15)<<"Department";
					gotoxy(12,14);
					cout<<"------------------------------------------------------------";
					while(fread(&e,recsize,1,fp)==1)
					{
						if(temp_id==e.id)
						{
							gotoxy(12,i);
							cout<<e.id<<setw(10)<<e.name<<setw(15)<<e.age<<setw(15)<<e.bs<<setw(15)<<e.dept;
							i++;
						}
					}
					getch();
					break;

			}
		  case '0':
			   {
					fclose(fp);
					admin_menu(color);
			   }
		      }
		 }
}
void mw::ch_pass()
{
		FILE *fp;
		long int recsize;
		char cpass[40],cfpass[40];
		cleardevice();
		mw::border();
		setbkcolor(0);
		rectangle(90,400,500,100);
		rectangle(88,398,502,102);
		line(88,123,502,123);
		outtextxy(100,110,"Password Setting Wizard:");
		recsize=sizeof(e);
		fp=fopen("c:\\windows\\password.DAT","rb+");
		gotoxy(15,10);
		cout<<"Enter Current Password:";
		rectangle(300,140,450,160);
		gotoxy(40,10);
		cin>>cpass;
		rewind(fp);
		while(fread(&e,recsize,1,fp)==1)
		{
			if(strcmp(e.pass,cpass)==0)
			{
				gotoxy(15,13);
				printf("Enter New Password:");
				rectangle(300,185,450,209);
				gotoxy(40,13);
				cin>>e.pass;
				gotoxy(15,16);
				printf("Confirm Password:");
				rectangle(300,230,450,258);
				gotoxy(40,16);
				char cpass[40];
				cin>>cpass;
				if(strcmp(e.pass,cpass)!=0)
				{
					cleardevice();
					mw::border();
					mw::msgbox("Error","Password Not Match");
					getch();
					mw::ch_pass();
				}
				fseek(fp,-recsize,SEEK_CUR) ;
				fwrite(&e,recsize,1,fp);
			}
			else
			{
				mw::msgbox("Error","Wrong Password !!!");
				mw::ch_pass();
			}
		}
}
void mw::temp_cal()
{
		  static int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		  long int ndays,ldays,tydays,tdays;
		  int d,i,m,fday,y;
		  char ch;
		  cleardevice();
		  setbkcolor(0);
		  gotoxy(2,2);
		  cout<<"Enter Year (1900) onwards."<<"\n";
		  cin>>y;
		  cout<<"Enter months (number):"<<"\n";
		  cin>>m;
		  if((y<1900)||(m>12))
		  {
			    msgbox("Error","Enter Correct Value");
			    getch();
			    mw::temp_cal();
		  }
		  else
		  {
			  while(1)
			  {
				    ndays=(y-1)*365l;
				    ldays=(y-1)/4-(y-1)/100+(y-1)/400;
				    tdays=ndays+ldays;
				    if((y%100==0&&y%400==0)||(y%400==0&&y%100!=0))
				    days[1]=29;
				    else
				    days[1]=28;
				    d=days[m-1];
				    tydays=0;
				    for(i=0;i<=m-2;i++)
				    tydays=tydays+days[i];
				    tdays=tydays+tdays;
				    fday=tdays%7;
				    mw::cal_temp(y,m,fday,d);
				    ch=mw::getkey();
				    switch(ch)
				    {
				      case 77:
						  if(m==12)
						  {
							   y++;
							   m=1;
						  }
						  else
						  m++;
						  break;
				     case 72:
						      y++;
						      continue;
				     case 75:
						    if(m==1)
						    {
						       y--;
						       m=12;
						    }
						    else
						    m--;
						    break;
				     case 80:
						     y--;
						     continue;
				     case 1:
						   mw::normal_temp(color);
		     }
	      }
	 }
}
void mw::normal_temp(int color)
{
		 cleardevice();
		 mw::border();
		 int c;
		 c=color;
		 setbkcolor(c);
		 int ch,ch1;
		 rectangle(15,30,495,64);
		 rectangle(15,75,120,105);
		 rectangle(125,75,240,105);
		 rectangle(245,75,370,105);
		 rectangle(375,75,495,105);
		 rectangle(500,75,630,105);
		 rectangle(500,30,630,64);
		 gotoxy(5,6);
		 printf("1.Menu %c",799);
		 gotoxy(18,6);
		 printf("2.Help");
		 gotoxy(33,6);
		 printf("3.Credit");
		 gotoxy(50,6);
		 printf("4.Setting");
		 gotoxy(67,6);
		 printf("5.Exit");
		 settextstyle(1,0,4);
		 outtextxy(100,23,"Normal_User");
		 settextstyle(0,0,0);
		 rectangle(580,410,626,379);
		 mw::time();
		 gotoxy(75,25);
		 cin>>ch;
		 switch(ch)
		 {
			case 1:
				{
					   rectangle(14,115,180,315);
					   gotoxy(5,9);
					   cout<<"1.Calculator";
					   gotoxy(5,11);
					   cout<<"2.Calender";
					   gotoxy(5,13);
					   cout<<"3.Inventory";
					   gotoxy(5,15);
					   cout<<"4.Games";
					   gotoxy(5,17);
					   cout<<"5.Main menu";
					   rectangle(110,285,170,305);
					   gotoxy(7,19);
					   cout<<"Choice";
					   gotoxy(16,19);
					   cin>>ch1;
					   if(ch1==4)
					   {
						      mw::game1();
					   }
					   if(ch1==1)
					   {
						       mw::temp_calc();
					   }
					   if(ch1==5)
					   {
							mw::normal_temp(color);
					   }
					   if(ch1==3)
					   {
							mw::normal_inv_msg();
							mw::normal_temp(color);
					   }
					   if(ch1==2)
					   {
							mw::temp_cal();
					   }
				}
			case 2:
				{
					   rectangle(125,115,250,315);
					   gotoxy(18,9);
					   cout<<"1.Calculator";
					   gotoxy(18,11);
					   cout<<"2.Calender";
					   gotoxy(18,13);
					   cout<<"3.Inventory ";
					   gotoxy(18,15);
					   cout<<"4.Games";
					   gotoxy(18,17);
					   cout<<"5.Main menu";
					   rectangle(200,285,240,305);
					   gotoxy(18,19);
					   cout<<"Choice";
					   gotoxy(27,19);
					   int sch6;
					   cin>>sch6  ;
					   if(sch6==1)
					   {
						cleardevice();
						rectangle(6,20,639,471);
						settextstyle(1,0,1);
						setbkcolor(GREEN);
						outtextxy(100,80,"Calculator Help");
						gotoxy(10,10);
						cout<<char(16)<<"To perform calculation:";
						gotoxy(10,12);
						cout<<char(16)<<"goto	menu-->select 1-->You can see the calculator";
						gotoxy(10,14);
						cout<<"How to use";
						gotoxy(10,16);
						cout<<"1.          First select the operation (+,-,*,/,^,%)";
						gotoxy(10,18);
						cout<<"2.          Input First Number,second number";
						gotoxy(10,20);
						cout<<"3.          you will see your result";
						gotoxy(10,22);
						cout<<"for example:			for Addition of two Number";
						gotoxy(10,24);
						cout<<"		Enter First number	12";
						gotoxy(10,25);
						cout<<"		Enter Second number	13";
						gotoxy(10,26);
						cout<<"		Result is:		25";
						getch();
						mw::normal_temp(color);
					}
				   if(sch6==2)
				   {
						cleardevice();
						rectangle(6,20,639,471);
						settextstyle(1,0,1);
						setbkcolor(GREEN);
						outtextxy(100,80,"Calender Help");
						gotoxy(10,10);
						cout<<char(16)<<"To See calender:";
						gotoxy(10,12);
						cout<<char(16)<<"goto	menu-->select 2-->You can see the Calender";
						gotoxy(10,14);
						cout<<"1.	Enter Year within the range (1900 onwards)";
						gotoxy(10,16);
						cout<<"2.	Enter month (in number) like(8 for august)";
						gotoxy(10,18);
						cout<<"3.	You will see the calender of specific year";
						getch();
						mw::normal_temp(color);
				   }
			   if(sch6==3)
			   {
						cleardevice();
						rectangle(6,20,639,471);
						settextstyle(1,0,1);
						setbkcolor(GREEN);
						outtextxy(100,80,"Inventory Help");
						gotoxy(10,10);
						cout<<char(16)<<"Sorry you cant access this utility:";
						gotoxy(10,12);
						cout<<char(16)<<"Because of some security purpose:";
						gotoxy(10,14);
						cout<<"If you want to use this utility :";
						gotoxy(10,16);
						cout<<"Kindly goto setting in main menu";
						gotoxy(10,18);
						cout<<"Select log out:";
						gotoxy(10,20);
						cout<<"Log on with administrator";
						getch();
						mw::normal_temp(color);
			   }
			if(sch6==4)
			{
						cleardevice();
						rectangle(6,20,639,471);
						settextstyle(1,0,1);
						setbkcolor(GREEN);
						outtextxy(100,80,"GAME Help");
						gotoxy(10,10);
						cout<<char(16)<<"To Open game:";
						gotoxy(10,12);
						cout<<char(16)<<"Goto	menu-->select 4-->You will Enjoy the game";
						gotoxy(10,10);
						cout<<"This is Shuffle Game";
						gotoxy(10,12);
						cout<<"1.	Use  arrow keys to move the number";
						gotoxy(10,14);
						cout<<"2.	UP ARROW:- move the number Upward";
						gotoxy(10,16);
						cout<<"3.	DOWN ARROW:- Move the number downward";
						gotoxy(10,18);
						cout<<"4.	LEFT ARROW:- Move the left";
						gotoxy(10,20);
						cout<<"5.	RIGHT ARROW:- Move the Right";
						getch();
						mw::normal_temp(color);
				}
				if(sch6==5)
				{
						mw::normal_temp(color);
				}
			}
			case 3:
				{
						mw::normal_temp_credit();
						getch();
						mw::normal_temp(color);
				}
			case 4:
				{
						rectangle(375,115,540,260);
						gotoxy(49,9);
						cout<<"1.Color Setting.";
						gotoxy(49,11);
						cout<<"2.Logout.";
						gotoxy(49,13);
						cout<<"3.Main Menu.";
						gotoxy(49,15);
						cout<<"Your Choice";
						rectangle(480,220,526,240);
						gotoxy(62,15);
						int sch;
						cin>>sch;
						if(sch==2)
						 {
							 cleardevice();
							 mw::select_user();
						 }
						if(sch==1)
						{
							cleardevice();
							setbkcolor(0);
							rectangle(6,20,639,471);
							settextstyle(3,0,5);
							setcolor(RED);
							outtextxy(40,30,"Color Setting:");
							gotoxy(10,8);
							cout<<"List of colors:";
							gotoxy(10,10);
							cout<<"Color names"<<"              Code.";
							gotoxy(12,12);
							cout<<char(16)<<" Black"<<"                  0";
							gotoxy(12,13);
							cout<<char(16)<<" Blue"<<"                   1";
							gotoxy(12,14);
							cout<<char(16)<<" Green"<<"                  2";
							gotoxy(12,15);
							cout<<char(16)<<" Cyan" <<"                   3";
							gotoxy(12,16);
							cout<<char(16)<<" Red"<<"                    4";
							gotoxy(12,17);
							cout<<char(16)<<" Magenta"<<"                5";
							gotoxy(12,18);
							cout<<char(16)<<" Light Gray"<<"             7";
							gotoxy(12,19);
							cout<<char(16)<<" Brown"<<"                 6";
							gotoxy(12,20);
							cout<<char(16)<<" Dark Gray"<<"             8";
							gotoxy(12,21);
							cout<<char(16)<<" Light Blue"<<"            9";
							gotoxy(12,22);
							cout<<char(16)<<" Light Green"<<"           10";
							gotoxy(12,23);
							cout<<char(16)<<" Light Cyan"<<"            11";
							gotoxy(12,24);
							cout<<char(16)<<" Light Red"<<"             12";
							gotoxy(12,25);
							cout<<char(16)<<" Light Magenta"<<"         13";
							gotoxy(12,26);
							cout<<char(16)<<" Yellow"<<"                14";
							gotoxy(12,27);
							cout<<char(16)<<" White"<<"                 15";
							rectangle(330,170,500,300);
							gotoxy(44,13);
							cout<<"Enter color code:";
							rectangle(345,220,435,240);
							int color;
							gotoxy(47,15);
							cin>>color;
							mw::normal_temp(color);
						}
					if(sch==3)
					{
							mw::normal_temp(color);
					}
				}
			case 5:
				{
					mw::msgbox("Alert","Are you sure?");
					outtextxy(220,200,"Press Y/N");
					char ans;
					ans=getche();
					if(ans=='y')
					{
						textmode(4);
						gotoxy(8,8);
						printf("Exiting From Program\n\n\n       Thanks for using application");
						getch();
						exit(0);
					}
					else
					{
						mw::normal_temp(color);
					}
				 }
		 }
}
void mw::credit()
{
		cleardevice();
		settextstyle(4,0,7);
		setcolor(RED);
		setbkcolor(WHITE);
		outtextxy(40,30,"Programmed by..");
		settextstyle(4,0,6);
		setcolor(8);
		outtextxy(80,140,"Shahid");
		outtextxy(80,220,"Azim");
		outtextxy(80,300,"Imaad");
}
void mw::normal_inv_msg()
{
		rectangle(190,180,480,350);
		rectangle(188,178,482,352);
		line(188,202,482,202);
		line(188,204,482,204);
		int a=204;
		int b=204;
		for(int i=1;i<147;i++)
		{
			setcolor(7);
			line(191,a,479,b);
			a++;
			b++;
		}
		setcolor(WHITE);
		outtextxy(200,187,"MESSAGE");
		outtextxy(200,240,"This Utility is Only For Admin");
		outtextxy(200,260,"For More information:");
		outtextxy(200,280,"Goto -> HELP -> Select 3");
		getch();
}
void mw::admin_calc()
{
		 cleardevice();
		 mw::border();
		 setbkcolor(0);
		 setcolor(GREEN);
		 rectangle(150,158,470,340);
		 gotoxy(21,11);
		 cout<<"Enter Type Of Calculator:";
		 rectangle(150,180,470,340);
		 gotoxy(28,14);
		 cout<<"1.     Standard Calculator.";
		 gotoxy(28,16);
		 cout<<"2.     Scientific Calculator.";
		 gotoxy(28,18);
		 cout<<"3.     Back To Main menu";
		 gotoxy(28,20);
		 cout<<"Enter Choice:	";
		 int ch;
		 cin>>ch;
		 switch(ch)
		 {
			case 1:
				{
					mw::admin_standard();
				}
			case 2:
				{
					mw::admin_scientific();
				}
			case 3:
				{
					mw::admin_menu(color);
				}
		 }
}
void mw::normal_calc()
{
		 long double x,y;
		 char ch;
		 do
		 {
			cleardevice();
			mw::border();
			gotoxy(10,4);
			setbkcolor(0);
			setcolor(RED);
			outtextxy(50,40,"This is a Calculator containing the following functions:-");
			setcolor(BLUE);
			rectangle(50,70,300,180);
			gotoxy(10,6);
			cout<<"->          Addition:";
			gotoxy(10,7);
			cout<<"->          substraction:";
			gotoxy(10,8);
			cout<<"->          Multiplication:";
			gotoxy(10,9);
			cout<<"->          Division:";
			gotoxy(10,10);
			cout<<"->          Percentage:";
			gotoxy(10,11);
			cout<<"->          Power";
			rectangle(350,70,600,180);
			gotoxy(48,6);
			cout<<"1:>Type [+] for Addition";
			gotoxy(48,7);
			cout<<"2:>[-] for Subtraction";
			gotoxy(48,8);
			cout<<"3:>[*]for Multiplication";
			gotoxy(48,9);
			cout<<"4:>[/] for Division";
			gotoxy(48,10);
			cout<<"5:>[%] for Percentage";
			gotoxy(48,11);
			cout<<"6:>[^] forPower";
			gotoxy(10,13);
			rectangle(50,220,600,400);
			ch=getche();
			if(ch=='+')
			{
				gotoxy(10,15);
				cout<<"You are using Addition\n";
				gotoxy(10,17);
				cout<<"Enter First Number=";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Second Number= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is \n";
				gotoxy(10,20);
				cout<<x+y;
				getch();
			}
			if(ch=='-')
			{
				gotoxy(10,15);
				cout<<"You are using Subtraction";
				gotoxy(10,17);
				cout<<"Enter First Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Second Number= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<x-y;
				getch();
			}
			if(ch=='*')
			{
				gotoxy(10,15);
				cout<<"You are using Multiplication\n";
				gotoxy(10,17);
				cout<<"Enter First Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Second Number= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<x*y;
				getch();
			}
			if(ch=='/')
			{
				gotoxy(10,15);
				cout<<"You are using Division ";
				gotoxy(10,17);
				cout<<"Enter First Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Second Number= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<x/y;
				getch();
			}
			if(ch=='%')
			{
				gotoxy(10,15);
				cout<<"You are using Percentage ";
				gotoxy(10,17);
				cout<<"Enter Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Percentage= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<y/100*x;
				getch();
			}
			if(ch=='^')
			{
				gotoxy(10,15);
				cout<<"You are using Power";
				gotoxy(10,17);
				cout<<"Enter Number= ";
				cin>>x;
				gotoxy(10,18);
				cout<<"Enter Power= ";
				cin>>y;
				gotoxy(10,19);
				cout<<"Your answer is ";
				gotoxy(10,20);
				cout<<pow(x,y);
				getch();
			}
			if(ch=='q')
			{
				normal_menu();
			}

		}
		while(1);
}
void mw::admin_menu(int cl)
{
		 cleardevice();
		 mw::border();
		 setbkcolor(cl);
		 int ch,ch1;
		 rectangle(15,30,495,64);
		 rectangle(15,75,120,105);
		 rectangle(125,75,240,105);
		 rectangle(245,75,370,105);
		 rectangle(375,75,495,105);
		 rectangle(500,75,630,105);
		 rectangle(500,30,630,64);
		 gotoxy(5,6);
		 printf("1.Menu %c",799);
		 gotoxy(18,6);
		 printf("2.Help");
		 gotoxy(33,6);
		 printf("3.Credit");
		 gotoxy(50,6);
		 printf("4.Setting");
		 gotoxy(67,6);
		 printf("5.Exit");
		 settextstyle(1,0,4);
		 outtextxy(100,23,e.or);
		 settextstyle(0,0,0);
		 rectangle(580,410,626,379);
		 mw::time();
		 gotoxy(75,25);
		 cin>>ch;
		 switch(ch)
		 {
			case 1:
				{
					   rectangle(14,115,180,315);
					   gotoxy(5,9);
					   cout<<"1.Calculator";
					   gotoxy(5,11);
					   cout<<"2.Calender";
					   gotoxy(5,13);
					   cout<<"3.Inventory";
					   gotoxy(5,15);
					   cout<<"4.Games";
					   gotoxy(5,17);
					   cout<<"5.Main menu";
					   rectangle(110,285,170,305);
					   gotoxy(7,19);
					   cout<<"Choice";
					   gotoxy(16,19);
					   cin>>ch1;
					   if(ch1==4)
					   {
						      mw::admin_game();
					   }
					   if(ch1==1)
					   {
						       mw::admin_calc();
					   }
					   if(ch1==5)
					   {
							mw::admin_menu(color);
					   }
					   if(ch1==3)
					   {
							mw::inventory();
					   }
					   if(ch1==2)
					   {
							mw::calender_admin();
					   }
				}
			case 2:
				{
					   rectangle(125,115,250,315);
					   gotoxy(18,9);
					   cout<<"1.Calculator";
					   gotoxy(18,11);
					   cout<<"2.Calender";
					   gotoxy(18,13);
					   cout<<"3.Inventory ";
					   gotoxy(18,15);
					   cout<<"4.Games";
					   gotoxy(18,17);
					   cout<<"5.Main menu";
					   rectangle(200,285,240,305);
					   gotoxy(18,19);
					   cout<<"Choice";
					   gotoxy(27,19);
					   int sch6;
					   cin>>sch6  ;
					   if(sch6==1)
					   {
						cleardevice();
						rectangle(6,20,639,471);
						settextstyle(1,0,1);
						setbkcolor(GREEN);
						outtextxy(100,80,"Calculator Help");
						gotoxy(10,10);
						cout<<char(16)<<"To perform calculation:";
						gotoxy(10,12);
						cout<<char(16)<<"goto	menu-->select 1-->You can see the calculator";
						gotoxy(10,14);
						cout<<"How to use";
						gotoxy(10,16);
						cout<<"1.          First select the Type of Calculator.";
						gotoxy(10,18);
						cout<<"2.          According to Your Choice the calculato is open.";
						gotoxy(10,20);
						cout<<"3.          Select The operation and see the result:--> 'q'for Exit";
						gotoxy(10,22);
						cout<<"for example:			for Addition of two Number";
						gotoxy(10,24);
						cout<<"		Enter First number	12";
						gotoxy(10,25);
						cout<<"		Enter Second number	13";
						gotoxy(10,26);
						cout<<"		Result is:		25";
						getch();
						mw::admin_menu(color);
					}
				   if(sch6==2)
				   {
						cleardevice();
						rectangle(6,20,639,471);
						settextstyle(1,0,1);
						setbkcolor(GREEN);
						outtextxy(100,80,"Calender Help");
						gotoxy(10,10);
						cout<<char(16)<<"To See calender:";
						gotoxy(10,12);
						cout<<char(16)<<"goto	menu-->select 2-->You can see the Calender";
						gotoxy(10,14);
						cout<<"1.	Enter Year within the range (1900 onwards)";
						gotoxy(10,16);
						cout<<"2.	Enter month (in number) like(8 for august)";
						gotoxy(10,18);
						cout<<"3.	You will see the calender of specific year";
						getch();
						mw::admin_menu(color);
				   }
			   if(sch6==3)
			   {
						cleardevice();
						rectangle(6,20,639,471);
						settextstyle(1,0,1);
						setbkcolor(GREEN);
						rectangle(6,20,639,471);
						settextstyle(1,0,1);
						setbkcolor(GREEN);
						outtextxy(100,80,"inventory Help");
						gotoxy(10,10);
						cout<<char(16)<<"To Open inventory:";
						gotoxy(10,12);
						cout<<char(16)<<"Goto	menu-->select 3-->You can see the Inventory";
						gotoxy(10,14);
						cout<<"This inventory Help you to save employees information:";
						gotoxy(10,16);
						cout<<"Press 1 for add the record";
						gotoxy(10,18);
						cout<<"press 2 for list the saved record";
						gotoxy(10,20);
						cout<<"press 3 for update the saved record";
						gotoxy(10,22);
						cout<<"Press 4 for delete record";
						gotoxy(10,24);
						cout<<"Press 5 to Generate the report.";
						gotoxy(10,26);
						cout<<"Press 6 to perform search.";
						gotoxy(10,28);
						cout<<"press ESC To close the inventory";
						getch();
						mw::admin_menu(color);
			   }
			if(sch6==4)
			{
						cleardevice();
						rectangle(6,20,639,471);
						settextstyle(1,0,1);
						setbkcolor(GREEN);
						outtextxy(100,80,"GAME Help");
						gotoxy(10,10);
						cout<<char(16)<<"To Open game:";
						gotoxy(10,12);
						cout<<char(16)<<"Goto	menu-->select 4-->You will Enjoy the game";
						gotoxy(10,10);
						cout<<"This is Shuffle Game";
						gotoxy(10,12);
						cout<<"1.	Use  arrow keys to move the number";
						gotoxy(10,14);
						cout<<"2.	UP ARROW:- move the number Upward";
						gotoxy(10,16);
						cout<<"3.	DOWN ARROW:- Move the number downward";
						gotoxy(10,18);
						cout<<"4.	LEFT ARROW:- Move the left";
						gotoxy(10,20);
						cout<<"5.	RIGHT ARROW:- Move the Right";
						getch();
						mw::admin_menu(color);
				}
				if(sch6==5)
				{
						mw::admin_menu(color);
				}
				}

			case 4:
				{
						rectangle(375,115,540,280);
						gotoxy(49,9);
						cout<<"1.Password Setting:";
						gotoxy(49,11);
						cout<<"2.Color Setting.";
						gotoxy(49,13);
						cout<<"3.Logout.";
						gotoxy(49,15);
						cout<<"4.Main Menu.";
						gotoxy(49,17);
						cout<<"Your Choice";
						rectangle(480,255,526,275);
						gotoxy(62,17);
						int sch;
						cin>>sch;
						if(sch==1)
						{
							mw::ch_pass();
							mw::admin_menu(color);
						}
						if(sch==3)
						 {
							 cleardevice();
							 mw::select_user();
						 }
						if(sch==2)
						{
							cleardevice();
							setbkcolor(0);
							rectangle(6,20,639,471);
							settextstyle(3,0,5);
							setcolor(RED);
							outtextxy(40,30,"Color Setting:");
							gotoxy(10,7);
							cout<<"List of colors:";
							gotoxy(10,9);
							cout<<"Color names"<<"              Code.";
							gotoxy(12,10);
							cout<<char(16)<<" Black"<<"                  0";
							gotoxy(12,11);
							cout<<char(16)<<" Blue"<<"                   1";
							gotoxy(12,12);
							cout<<char(16)<<" Green"<<"                  2";
							gotoxy(12,13);
							cout<<char(16)<<" Cyan" <<"                   3";
							gotoxy(12,14);
							cout<<char(16)<<" Red"<<"                    4";
							gotoxy(12,15);
							cout<<char(16)<<" Magenta"<<"                5";
							gotoxy(12,16);
							cout<<char(16)<<" Light Gray"<<"             7";
							gotoxy(12,17);
							cout<<char(16)<<" Brown"<<"                  6";
							gotoxy(12,18);
							cout<<char(16)<<" Dark Gray"<<"              8";
							gotoxy(12,19);
							cout<<char(16)<<" Light Blue"<<"             9";
							gotoxy(12,20);
							cout<<char(16)<<" Light Green"<<"            10";
							gotoxy(12,21);
							cout<<char(16)<<" Light Cyan"<<"             11";
							gotoxy(12,22);
							cout<<char(16)<<" Light Red"<<"              12";
							gotoxy(12,23);
							cout<<char(16)<<" Light Magenta"<<"          13";
							gotoxy(12,24);
							cout<<char(16)<<" Yellow"<<"                 14";
							gotoxy(12,25);
							cout<<char(16)<<" White"<<"                  15";
							rectangle(330,170,500,300);
							gotoxy(44,13);
							cout<<"Enter color code:";
							rectangle(345,220,435,240);
							gotoxy(47,15);
							int cl;
							cin>>cl;
							color=cl;
							mw::admin_menu(color);
						}
					if(sch==4)
					{
							mw::admin_menu(color);
					}
				}
			case 3:
				{
						mw::credit();
						getch();
						mw::admin_menu(color);
				}
			case 5:
				{
					mw::msgbox("Alert","Are you sure?");
					outtextxy(220,200,"Press Y/N");
					char ans;
					ans=getche();
					if(ans=='y')
					{
						mw::close_door();
						textmode(4);
						gotoxy(8,8);
						printf("Exiting From Program\n\n\n       Thanks for using application");
						getch();
						exit(0);
					}
					else
					{
						mw::admin_menu(color);
					}
				 }
		 }
}
void mw::cal_admin(int yr,int mo,int fd,int da)
{
		  int i,r,c;
		  char a;
		  cleardevice();
		  setbkcolor(0);
		  mw::border();
		  rectangle(20,40,550,400);
		  rectangle(22,38,552,398);
		  line(20,65,550,65);
		  line(20,100,550,100);
		  line(20,250,550,250);
		  line(20,350,550,350);
		  gotoxy(25,4);
		  cout<<months[mo-1]<<yr;
		  gotoxy(10,6);
		  cout<<" Mon  Tue   Wed   Thu   Fri   sat   Sun";
		  r=9;
		  c=11+6*fd;
		  for(i=1;i<=da;i++)
		  {
			    gotoxy(c,r);
			    cout<<i;
			    if(c<=41)
			    c=c+6;
			    else
			    {
				     c=11;
				     r=r+1;
			    }
		  }
		  gotoxy(11,18);
		  cout<<"UP-Next year           DOWN-prev. year" ;
		  gotoxy(11,19);
		  cout<<"RIGHT-Next month       Left-prev months";
		  gotoxy(26,21);
		  cout<<"ESC-Go Back To Main Screen";
		  gotoxy(14,24);
		  cout<<"This is The Calender of "<<months[mo-1]<<" "<<yr;
}
void mw::cal(int yr,int mo,int fd,int da)
{
		  int i,r,c;
		  char a;
		  cleardevice();
		  setbkcolor(0);
		  rectangle(20,40,550,400);
		  rectangle(22,38,552,398);
		  line(20,65,550,65);
		  line(20,100,550,100);
		  line(20,250,550,250);
		  line(20,350,550,350);
		  gotoxy(25,4);
		  cout<<months[mo-1]<<yr;
		  gotoxy(10,6);
		  cout<<" Mon  Tue   Wed   Thu   Fri   sat   Sun";
		  r=9;
		  c=11+6*fd;
		  for(i=1;i<=da;i++)
		  {
			    gotoxy(c,r);
			    cout<<i;
			    if(c<=41)
			    c=c+6;
			    else
			    {
				     c=11;
				     r=r+1;
			    }
		  }
		  gotoxy(11,18);
		  cout<<"UP-Next year           DOWN-prev. year" ;
		  gotoxy(11,19);
		  cout<<"RIGHT-Next month       Left-prev months";
		  gotoxy(26,21);
		  cout<<"ESC-Go Back To Main Screen";
		  gotoxy(14,24);
		  cout<<"This is The Calender of "<<months[mo-1]<<" "<<yr;
}
void mw::calender_admin()
{
		  static int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		  long int ndays,ldays,tydays,tdays;
		  int d,i,m,fday,y;
		  char ch;
		  cleardevice();
		  setbkcolor(0);
		  gotoxy(2,2);
		  cout<<"Enter Year (1900) onwards."<<"\n";
		  cin>>y;
		  cout<<"Enter months (number):"<<"\n";
		  cin>>m;
		  if((y<1900)||(m>12))
		  {
			    msgbox("Error","Enter Correct Value");
			    getch();
			    mw::calender_admin();
		  }
		  else
		  {
			  while(1)
			  {
				    ndays=(y-1)*365l;
				    ldays=(y-1)/4-(y-1)/100+(y-1)/400;
				    tdays=ndays+ldays;
				    if((y%100==0&&y%400==0)||(y%400==0&&y%100!=0))
				    days[1]=29;
				    else
				    days[1]=28;
				    d=days[m-1];
				    tydays=0;
				    for(i=0;i<=m-2;i++)
				    tydays=tydays+days[i];
				    tdays=tydays+tdays;
				    fday=tdays%7;
				    mw::cal(y,m,fday,d);
				    ch=mw::getkey();
				    switch(ch)
				    {
				      case 77:
						  if(m==12)
						  {
							   y++;
							   m=1;
						  }
						  else
						  m++;
						  break;
				     case 72:
						      y++;
						      continue;
				     case 75:
						    if(m==1)
						    {
						       y--;
						       m=12;
						    }
						    else
						    m--;
						    break;
				     case 80:
						     y--;
						     continue;
				     case 1:
						   mw::admin_menu(color);
		     }
	      }
	 }
}
void mw::calender()
{
		  static int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		  long int ndays,ldays,tydays,tdays;
		  int d,i,m,fday,y;
		  char ch;
		  cleardevice();
		  setbkcolor(0);
		  gotoxy(2,2);
		  cout<<"Enter Year (1900) onwards."<<"\n";
		  cin>>y;
		  cout<<"Enter months (number):"<<"\n";
		  cin>>m;
		  if((y<1900)||(m>12))
		  {
			    msgbox("Error","Enter Correct Value");
			    getch();
			    mw::calender();
		  }
		  else
		  {
			  while(1)
			  {
				    ndays=(y-1)*365l;
				    ldays=(y-1)/4-(y-1)/100+(y-1)/400;
				    tdays=ndays+ldays;
				    if((y%100==0&&y%400==0)||(y%400==0&&y%100!=0))
				    days[1]=29;
				    else
				    days[1]=28;
				    d=days[m-1];
				    tydays=0;
				    for(i=0;i<=m-2;i++)
				    tydays=tydays+days[i];
				    tdays=tydays+tdays;
				    fday=tdays%7;
				    mw::cal(y,m,fday,d);
				    ch=mw::getkey();
				    switch(ch)
				    {
				      case 77:
						  if(m==12)
						  {
							   y++;
							   m=1;
						  }
						  else
						  m++;
						  break;
				     case 72:
						      y++;
						      continue;
				     case 75:
						    if(m==1)
						    {
						       y--;
						       m=12;
						    }
						    else
						    m--;
						    break;
				     case 80:
						     y--;
						     continue;
				     case 1:
						   mw::normal_menu();
		     }
	      }
	 }
}
void mw::msgbox(char title[20],char message[100])
{
     rectangle(200,270,420,145);
     floodfill(201,269,WHITE);
     rectangle(200,270,420,120);
     gotoxy(27,9);
     cout<<title;
     setcolor(RED);
     settextstyle(0,0,1);
     outtextxy(204,180,message);
}
int mw::getkey()
{
	 union REGS i,o;
	 while(!kbhit()) ;
	 i.h.ah=0;
	 int86(22,&i,&o);
	 return(o.h.ah);
}
void mw::game()
{
	 int r=3,c=3,t,ch;
    cleardevice();
    mw::boxes();
    mw::display();
    while(1)
    {
     ch=getkey();
     switch(ch)
     {
       case 80:
	  if(r==0)
	  {
	   printf("\a");
	   break;
	  }
	  t=arr[r][c];
	  arr[r][c]=arr[r-1][c];
	  arr[r-1][c]=t;
	  r--;
	  mw::display();
	  break;
      case 77:
	 if(c==0)
	 {
	  printf("\a");
	  break;
	 }
	 t=arr[r][c];
	 arr[r][c]=arr[r][c-1];
	 arr[r][c-1]=t;
	 c--;
	 mw::display();
	 break;
      case 72:
	       if(r==3)
	       {
		 printf("\a");
		 break;
	       }
	       t=arr[r][c];
	       arr[r][c]=arr[r+1][c];
	       arr[r+1][c]=t;
	       r++;
	       mw::display();
	       break;
      case 75:
	   if(c==3)
	   {
	     printf("\a");
	     break;
	   }
	   t=arr[r][c];
	   arr[r][c]=arr[r][c+1];
	   arr[r][c+1]=t;
	   c++;
	   display();
	   break;
      case 1:
	   mw::normal_menu();
      }
   mw:: check();
    }
}
void mw::admin_game()
{
		    int r=3,c=3,t,ch;
		    cleardevice();
		    mw::boxes();
		    mw::display();
		    while(1)
		    {
			     ch=mw::getkey();
			     switch(ch)
			     {
			       case 80:
					  if(r==0)
					  {
						   cout<<"\a";
						   break;
					  }
					  t=arr[r][c];
					  arr[r][c]=arr[r-1][c];
					  arr[r-1][c]=t;
					  r--;
					  mw::display();
					  break;
			      case 77:
					 if(c==0)
					 {
						  cout<<"\a";
						  break;
					 }
					 t=arr[r][c];
					 arr[r][c]=arr[r][c-1];
					 arr[r][c-1]=t;
					 c--;
					 mw::display();
					 break;
			     case 72:
					 if(r==3)
					 {
						 cout<<"\a";
						 break;
					 }
				       t=arr[r][c];
				       arr[r][c]=arr[r+1][c];
				       arr[r+1][c]=t;
				       r++;
				       mw::display();
				       break;
			      case 75:
					   if(c==3)
					   {
					     cout<<"\a";
					     break;
					   }
					   t=arr[r][c];
					   arr[r][c]=arr[r][c+1];
					   arr[r][c+1]=t;
					   c++;
					   mw::display();
					   break;
			      case 1:
					   mw::admin_menu(color);
			}
		   mw:: check();
	}
}
void mw::time()
{
		 struct  time t;
		 struct date d;
		 while(!kbhit())
		 {
			gettime(&t);
			getdate(&d);
			gotoxy(64,3);
			printf("Time:%d: %d: %d",t.ti_hour, t.ti_min, t.ti_sec);
			gotoxy(64,4);
			printf("Date:%d: %d: %d",d.da_day,d.da_mon,d.da_year);
		 }
}
void mw::normal_menu()
{
		 cleardevice();
		 mw::border();
		 setbkcolor(RED);
		 int ch,ch1;
		 rectangle(15,30,495,64);
		 rectangle(15,75,120,105);
		 rectangle(125,75,240,105);
		 rectangle(245,75,370,105);
		 rectangle(375,75,495,105);
		 rectangle(500,75,630,105);
		 rectangle(500,30,630,64);
		 gotoxy(5,6);
		 printf("1.Menu %c",799);
		 gotoxy(18,6);
		 printf("2.Help");
		 gotoxy(33,6);
		 printf("3.Credit");
		 gotoxy(50,6);
		 printf("4.Setting");
		 gotoxy(67,6);
		 printf("5.Exit");
		 settextstyle(1,0,4);
		 outtextxy(100,23,"Normal_User");
		 settextstyle(0,0,0);
		 rectangle(580,410,626,379);
		 mw::time();
		 gotoxy(75,25);
		 cin>>ch;
		 switch(ch)
		 {
			case 1:
				{
					   rectangle(14,115,180,315);
					   gotoxy(5,9);
					   cout<<"1.Calculator";
					   gotoxy(5,11);
					   cout<<"2.Calender";
					   gotoxy(5,13);
					   cout<<"3.Inventory";
					   gotoxy(5,15);
					   cout<<"4.Games";
					   gotoxy(5,17);
					   cout<<"5.Main menu";
					   rectangle(110,285,170,305);
					   gotoxy(7,19);
					   cout<<"Choice";
					   gotoxy(16,19);
					   cin>>ch1;
					   if(ch1==4)
					   {
						      mw::game();
					   }
					   if(ch1==1)
					   {
						       mw::normal_calc();
					   }
					   if(ch1==5)
					   {
							mw::normal_menu();
					   }
					   if(ch1==3)
					   {
							mw::normal_inv_msg();
							mw::normal_menu();
					   }
					   if(ch1==2)
					   {
							mw::calender();
					   }
				}
			case 2:
				{
					   rectangle(125,115,250,315);
					   gotoxy(18,9);
					   cout<<"1.Calculator";
					   gotoxy(18,11);
					   cout<<"2.Calender";
					   gotoxy(18,13);
					   cout<<"3.Inventory ";
					   gotoxy(18,15);
					   cout<<"4.Games";
					   gotoxy(18,17);
					   cout<<"5.Main menu";
					   rectangle(200,285,240,305);
					   gotoxy(18,19);
					   cout<<"Choice";
					   gotoxy(27,19);
					   int sch6;
					   cin>>sch6  ;
					   if(sch6==1)
					   {
						cleardevice();
						rectangle(6,20,639,471);
						settextstyle(1,0,1);
						setbkcolor(GREEN);
						outtextxy(100,80,"Calculator Help");
						gotoxy(10,10);
						cout<<char(16)<<"To perform calculation:";
						gotoxy(10,12);
						cout<<char(16)<<"goto	menu-->select 1-->You can see the calculator";
						gotoxy(10,14);
						cout<<"How to use";
						gotoxy(10,16);
						cout<<"1.          First select the operation (+,-,*,/,^,%)";
						gotoxy(10,18);
						cout<<"2.          Input First Number,second number";
						gotoxy(10,20);
						cout<<"3.          you will see your result";
						gotoxy(10,22);
						cout<<"for example:			for Addition of two Number";
						gotoxy(10,24);
						cout<<"		Enter First number	12";
						gotoxy(10,25);
						cout<<"		Enter Second number	13";
						gotoxy(10,26);
						cout<<"		Result is:		25";
						getch();
						mw::normal_menu();
					}
				   if(sch6==2)
				   {
						cleardevice();
						rectangle(6,20,639,471);
						settextstyle(1,0,1);
						setbkcolor(GREEN);
						outtextxy(100,80,"Calender Help");
						gotoxy(10,10);
						cout<<char(16)<<"To See calender:";
						gotoxy(10,12);
						cout<<char(16)<<"goto	menu-->select 2-->You can see the Calender";
						gotoxy(10,14);
						cout<<"1.	Enter Year within the range (1900 onwards)";
						gotoxy(10,16);
						cout<<"2.	Enter month (in number) like(8 for august)";
						gotoxy(10,18);
						cout<<"3.	You will see the calender of specific year";
						getch();
						mw::normal_menu();
				   }
			   if(sch6==3)
			   {
						cleardevice();
						rectangle(6,20,639,471);
						settextstyle(1,0,1);
						setbkcolor(GREEN);
						outtextxy(100,80,"Inventory Help");
						gotoxy(10,10);
						cout<<char(16)<<"Sorry you cant access this utility:";
						gotoxy(10,12);
						cout<<char(16)<<"Because of some security purpose:";
						gotoxy(10,14);
						cout<<"If you want to use this utility :";
						gotoxy(10,16);
						cout<<"Kindly goto setting in main menu";
						gotoxy(10,18);
						cout<<"Select log out:";
						gotoxy(10,20);
						cout<<"Log on with administrator";
						getch();
						mw::normal_menu();
			   }
			if(sch6==4)
			{
						cleardevice();
						rectangle(6,20,639,471);
						settextstyle(1,0,1);
						setbkcolor(GREEN);
						outtextxy(100,80,"GAME Help");
						gotoxy(10,10);
						cout<<char(16)<<"To Open game:";
						gotoxy(10,12);
						cout<<char(16)<<"Goto	menu-->select 4-->You will Enjoy the game";
						gotoxy(10,10);
						cout<<"This is Shuffle Game";
						gotoxy(10,12);
						cout<<"1.	Use  arrow keys to move the number";
						gotoxy(10,14);
						cout<<"2.	UP ARROW:- move the number Upward";
						gotoxy(10,16);
						cout<<"3.	DOWN ARROW:- Move the number downward";
						gotoxy(10,18);
						cout<<"4.	LEFT ARROW:- Move the left";
						gotoxy(10,20);
						cout<<"5.	RIGHT ARROW:- Move the Right";
						getch();
						mw::normal_menu();
				}
				if(sch6==5)
				{
						mw::normal_menu();
				}
			}
			case 3:
				{
						mw::credit();
						getch();
						mw::normal_menu();
				}
			case 4:
				{
						rectangle(375,115,540,260);
						gotoxy(49,9);
						cout<<"1.Color Setting.";
						gotoxy(49,11);
						cout<<"2.Logout.";
						gotoxy(49,13);
						cout<<"3.Main Menu.";
						gotoxy(49,15);
						cout<<"Your Choice";
						rectangle(480,220,526,240);
						gotoxy(62,15);
						int sch;
						cin>>sch;
						if(sch==2)
						 {
							 cleardevice();
							 mw::select_user();
						 }
						if(sch==1)
						{
							cleardevice();
							setbkcolor(0);
							rectangle(6,20,639,471);
							settextstyle(3,0,5);
							setcolor(RED);
							outtextxy(40,30,"Color Setting:");
							gotoxy(10,8);
							cout<<"List of colors:";
							gotoxy(10,10);
							cout<<"Color names"<<"              Code.";
							gotoxy(12,12);
							cout<<char(16)<<" Black"<<"                  0";
							gotoxy(12,13);
							cout<<char(16)<<" Blue"<<"                   1";
							gotoxy(12,14);
							cout<<char(16)<<" Green"<<"                  2";
							gotoxy(12,15);
							cout<<char(16)<<" Cyan" <<"                   3";
							gotoxy(12,16);
							cout<<char(16)<<" Red"<<"                    4";
							gotoxy(12,17);
							cout<<char(16)<<" Magenta"<<"                5";
							gotoxy(12,18);
							cout<<char(16)<<" Light Gray"<<"             7";
							gotoxy(12,19);
							cout<<char(16)<<" Brown"<<"                 6";
							gotoxy(12,20);
							cout<<char(16)<<" Dark Gray"<<"             8";
							gotoxy(12,21);
							cout<<char(16)<<" Light Blue"<<"            9";
							gotoxy(12,22);
							cout<<char(16)<<" Light Green"<<"           10";
							gotoxy(12,23);
							cout<<char(16)<<" Light Cyan"<<"            11";
							gotoxy(12,24);
							cout<<char(16)<<" Light Red"<<"             12";
							gotoxy(12,25);
							cout<<char(16)<<" Light Magenta"<<"         13";
							gotoxy(12,26);
							cout<<char(16)<<" Yellow"<<"                14";
							gotoxy(12,27);
							cout<<char(16)<<" White"<<"                 15";
							rectangle(330,170,500,300);
							gotoxy(44,13);
							cout<<"Enter color code:";
							rectangle(345,220,435,240);
							gotoxy(47,15);
							cin>>color;
							mw::normal_temp(color);
						}
					if(sch==3)
					{
							mw::normal_menu();
					}
				}
			case 5:
				{
					mw::msgbox("Alert","Are you sure?");
					outtextxy(220,200,"Press Y/N");
					char ans;
					ans=getche();
					if(ans=='y')
					{
						mw::close_door();
						textmode(4);
						gotoxy(8,8);
						printf("Exiting From Program\n\n\n       Thanks for using application");
						getch();
						exit(0);
					}
					else
					{
						mw::normal_menu();
					}
				 }
		 }
}
void mw::select_user()
{
	cleardevice();
	mw::border();
	setbkcolor(0);
	setcolor(GREEN);
	settextstyle(0,0,2);
	outtextxy(150,120,"Select User To Proceed");
	rectangle(150,158,470,320);
	rectangle(150,180,470,320);
	gotoxy(21,11);
	cout<<"Enter User:";
	gotoxy(32,14);
	cout<<"1.       Normal";
	gotoxy(32,16);
	cout<<"2.       admin";
	gotoxy(32,18);
	cout<<"Enter User:	";
	cin>>user;
	switch(user)
	{
		case 1:
			mw::normal();
			break;
		case 2:
			mw::admin();
			break;
		default:
			gotoxy(22,27);
			mw::msgbox("Error!!!","Invalid User");
			getch();
			mw::select_user();
	}
}
void mw::admin_boot()
{
	 cleardevice();
	 setbkcolor(0);
	 settextstyle(1,0,6);
	 outtextxy(167,190,"Multiworker");
	 setcolor(RED);
	 rectangle(162,302,478,337);
	 gotoxy(20,23);
	 cout<<" LOADING . . .";
	 int y1=308;
	 int y2=331;
	 for (int x1=171,x2=171;x1<470,x2<470;x1++,x2++)
	 {
		setcolor(1);
		delay(30);
		line (x1,y1,x2,y2);
		int  p;
		p=(x1-170)/3;
		gotoxy(34,23);
		p++;
		cout<<p<<" %";
	 }
	 mw::select_user();
}
void mw::border()
{
	setcolor(WHITE);
	rectangle(6,20,639,471);
}
void mw::normal()
{
	cleardevice();
	mw::normal_menu();
}
void mw::admin()
{
	cleardevice();
	mw::admin_login();
}
 void mw::check()
 {
	  static int move=0;
  int k=1,i,j;
  move++;
  gotoxy(30,24);
  printf("No. of moves=%d",move);
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=3;j++)
    {
     if(arr[i][j]==0)
     continue;
     else
     if(arr[i][j]==k)
     k++;
     else
     return;
    }
  }
  exit(0);
 }
 void mw::boxes()
 {
		int r1,c1;
		cleardevice();
		setbkcolor(0);
		for(c1=30;c1<=42;c1++)
		{
			for(r1=8;r1<=16;r1+=2)
			{
				gotoxy(c1,r1);
				cout<<char(196);
			}
		}
		for(r1=8;r1<=16;r1++)
		{
			for(c1=30;c1<=42;c1+=3)
			{
				gotoxy(c1,r1);
				cout<<char(179);
			}
		}
		for(c1=33;c1<=39;c1+=3)
		{
			gotoxy(c1,8);
			cout<<char(194);
			gotoxy(c1,16);
			cout<<char(193);
		}
		for(r1=10;r1<=14;r1+=2)
		{
			gotoxy(30,r1);
			cout<<char(195);
			gotoxy(42,r1);
			cout<<char(180);
		}
		for(r1=10;r1<=14;r1+=2)
		{
			for(c1=33;c1<=39;c1+=3)
			{
				gotoxy(c1,r1);
				cout<<char(197);
			}
		}
		gotoxy(30,8);
		cout<<char(218);
		gotoxy(42,8);
		cout<<char(191);
		gotoxy(30,16);
		cout<<char(192);
		gotoxy(42,16);
		cout<<char(217);
 }
 void mw::display()
 {
		rectangle(6,20,639,471);
		int r1=9,c1=31,i,j;
		for(i=0;i<=3;i++)
		{
			for(j=0;j<=3;j++)
			{
				if(arr[i][j]==0)
				{
					gotoxy(c1,r1);
					cout<<"  ";
				}
				else
				{
					gotoxy(c1,r1);
					cout<<arr[i][j];
				}
			c1=c1+3;
		}
		r1=r1+2;
		c1=31;
	}
 }
void mw::admin_login()
{
	FILE *fp;
	char *password,username[10];
	long int recsize;
	cleardevice();
	fp=fopen("c:\\windows\\password.DAT","rb+");
	if(fp==NULL)
	{
		mw::border();
		setbkcolor(BROWN) ;
		recsize=sizeof(e);
		fp=fopen("c:\\windows\\password.DAT","wb+");
		gotoxy(10,8);
		cout<<"Security Wizard:";
		gotoxy(10,9);
		cout<<"This wizard Helps you to protect your Data.";
		gotoxy(10,10);
		cout<<"Enter Your name,password,organistion name.";
		gotoxy(10,25);
		cout<<"NOTE:This wizard is one time run only,so be careful about password.";
		gotoxy(10,12);
		cout<<"Enter name:";
		cin>>e.name;
		gotoxy(10,14);
		cout<<"Enter password:";
		cin>>e.pass;
		gotoxy(10,16);
		cout<<"Enter oragnisation name:";
		cin>>e.or;
		fwrite(&e,recsize,1,fp);
		exit(0);
	}
if(fp!=NULL)
{
		rewind(fp);
		setcolor(WHITE);
		rectangle(6,20,639,471);
		setcolor(1);
		bar3d(150,150,450,350,10,1);
		setcolor(1);
		line(150,151,450,151);
		int a=151;
		int b=151;
		for(int j=1;j<200;j++)
		{
			line(150,a,450,b);
			a++;
			b++;
		}
		setbkcolor(0);
		settextstyle(4,0,5);
		setcolor(WHITE);
		outtextxy(172,92,"Login");
		settextstyle(0,0,1);
		outtextxy(172,198,"Enter User name:");
		gotoxy(40,13);
		cin>>username;
		gotoxy(25,14);
		outtextxy(172,240,"Enter Password:");
		password=getpass("");
		rewind(fp);
		while(fread(&e,recsize,1,fp)==1)
		{
			if(strcmp(e.pass,password)==0)
			{
				gotoxy(10,10);
				msgbox("Message","Succesfully Log in");
				getch();
			}
		}
			if(strcmp(e.pass,password)!=0)
			{
				msgbox("Error","Invalid password");
				getch();
				mw::admin_login();
			}
		}
		mw::admin_menu(color);
}
void main()
{
	int g=0,d;
	mw a;
	detectgraph(&g,&d);
	initgraph(&g,&d,"graphic");
	a.welcome();
	a.select_user();
	getch();
	closegraph();
	restorecrtmode();
}