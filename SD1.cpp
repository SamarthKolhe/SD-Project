#include<iostream>
using namespace std;
int s1[50],s2[50],n1,n2;

void insert()
{
int ch,val;
cout<<"Enter set no 1 or 2 - \n";
cin>>ch;
if(ch==1)
	{
	cout<<"Enter ur element\n";
	cin>>val;

	s1[n1]=val;
    n1++;
    }
  else if(ch==2)
   {
	cout<<"Enter ur element\n";
	cin>>val;

	s1[n2]=val;
    n2++;
    }

}
void display()
{
cout<<"Elements of set1\n"<<endl;
for(int i=0;i<n1;i++)
	cout<<s1[i]<<" ";

cout<<"Elements of set2\n"<<endl;
for(int i=0;i<n2;i++)
	cout<<s2[i]<<" ";

}
void remove()
{
int ch,key,i,count=0;
cout<<"Enter set no 1 or 2 - \n";
cin>>ch;
if(ch==1)
	{
		cout<<"Enter element\n";
		cin>>key;

		for (i=0;i<n1;i++)
			if (s1[i]==key)
			break;

		if(i<n1)
		{
		n1=n1-1;
		for(int j=i;j<n1;j++)
		s1[j]=s1[j+1];
		}


	}
else if(ch==2)
	{
		cout<<"Enter element\n";
		cin>>key;

		for (i=0;i<n2;i++)
			if (s2[i]==key)
			break;

		if(i<n2)
		{
		n2=n2-1;
		for(int j=i;j<n2;j++)
		s2[j]=s2[j+1];
		}


	}
}
void contains()
{
int ch,key,f=0;
cout<<"Enter set no 1 or 2 - \n";
cin>>ch;
cout<<"Enter the element to be found\n";
cin>>key;
if(ch==1)
{
	for(int i=0;i<n1;i++)
	{
		if(s1[i]==key)
		{
		f=1;
        	}
     	}
		if(f==0)
		cout<<"Element not found\n Element is "<<key<<"\n";
		if (f==1)
		cout<<"Element found\n Element is "<<key<<"\n";




}
else if(ch==2)
{
	for(int i=0;i<n2;i++)
	{
		if(s2[i]==key)
		{
		f=1;

		}
    }
		if(f==0)
		cout<<"Element not found\n Element is "<<key<<"\n";
		if (f==1)
		cout<<"Element found\n Element is "<<key<<"\n";






}
}
void size()
{
int ch,cnt=0;
cout<<"Enter set no 1 or 2 -\n ";
cin>>ch;
if(ch==1)
{
	for(int i=0;i<n1;i++)
		cnt++;
	cout<<"Size of set 1 is "<<cnt;
}
else if(ch==2)
{
	for(int i=0;i<n2;i++)
		cnt++;
	cout<<"Size of set 2 is "<<cnt;
}

}

void intersection()
{
    int i,j,s3[50];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(s1[i]==s2[j])
            {
                s3[i]=s1[i];
                cout<<s3[i]<<" ";
            }
        }
    }

}

void uni()
{
   int i,j,s3[50];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(s1[i]!=s2[j])
            {
                s3[i]=s2[j];

            }

        }
        cout<<s1[i]<<" ";
    }

}
int main()
{

cout<<"Enter size of set 1 and set 2 - ";
cin>>n1;
cin>>n2;
cout<<"Enter elements of set1"<<endl;
for(int i=0;i<n1;i++)
	cin>>s1[i];

cout<<"Enter elements of set2"<<endl;
for(int i=0;i<n2;i++)
	cin>>s2[i];
int ch;
while(1)
{
cout<<"\n1.Insert\n2.Remove\n3.Contains\n4.Size\n5.Display\n6.Intersection\n7.Union\n";
cout<<"Enter your choice - \n";
cin>>ch;
switch(ch)
{
	case 1:
		insert();
		break;
	case 2:
		remove();
		break;
	case 3:
		contains();
		break;
	case 4:
		size();
		break;
	case 5:
		display();
		break;
    case 6:
		intersection();
		break;
    case 7:
		uni();
		break;


	default:
		cout<<"Enter correct choice";
}
}
return 0;

}

