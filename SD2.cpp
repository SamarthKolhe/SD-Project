#include<iostream>
#include<stdlib.h>
using namespace std;
class TBT
{
	private:
		int data;
		int lbit,rbit;
		TBT*lchild,*rchild;
	public:
		TBT*create_TBT(TBT*,TBT*);
		void inorder_TBT(TBT*,TBT*);
		void preorder_TBT(TBT*,TBT*);
};
void TBT::inorder_TBT(TBT*root,TBT*header)
{
	int flag=0;
	TBT*trav;
	trav=root;

	while(trav!=header)
	{
		while(trav->lbit!=1&&flag==0)
		{
			trav=trav->lchild;  // go to left
		}

		cout<<" "<<trav->data;   // ptint leftmost data

		if(trav->rbit==0)
		{
			trav=trav->rchild;
			flag=0;
		}
		else
		{
			trav=trav->rchild;
			flag=1;
		}
	}
}

TBT*TBT::create_TBT(TBT*root,TBT*header)
{
	TBT*trav,*temp,*p;
	int attached_flag=0;
	char ans;

	while(1)
	{
	trav=root;
	if(root==NULL)
	{
		temp=new TBT();
		cout<<"\nEnter the data ";
		cin>>temp->data;
		temp->lbit=1;
		temp->rbit=1;
		temp->lchild=header;
		temp->rchild=header;
		root=temp;
	}
	else
	{
			temp=new TBT();
			cout<<"\nEnter the data ";
			cin>>temp->data;
			temp->lbit=1;
			temp->rbit=1;
			attached_flag=0;

			trav=root;
			while(attached_flag==0)
			{
				if(trav->data<temp->data&&trav->rbit==0)
				{
					trav=trav->rchild;
				}
				else
				if(trav->data<temp->data&&trav->rbit==1)
				{
					trav->rbit=0;
					p=trav->rchild;
					trav->rchild=temp;
					temp->rchild=p;
					temp->lchild=trav;
					attached_flag=1;
				}

				if(trav->data>temp->data&&trav->lbit==0)
				{
					trav=trav->lchild;
				}
				else
				if(trav->data>temp->data&&trav->lbit==1)
				{
					trav->lbit=0;
					p=trav->lchild;
					trav->lchild=temp;
					temp->lchild=p;
					temp->rchild=trav;
					attached_flag=1;
				}
			}

			attached_flag=0;
	}
	cout<<"\nDo you want to attach more nodes [y/n] ";
	cin>>ans;
	if(ans=='n'||ans=='N')
	break;
	}
	return root;
}
int main()
{
	int choice;
	TBT*root=NULL,obj,*header=NULL;
	do
	{
		cout<<"\n1.Create TBT";
		cout<<"\n2.Inorder TBT";
		cout<<"\n3.Exit";
		cout<<"\nEnter your choice :";
		cin>>choice;
		switch(choice)
		{
			case 1: root=obj.create_TBT(root,header);
				break;
			case 2: obj.inorder_TBT(root,header);
				break;
            case 3: exit(0);
                break;
            default:
                cout<<"Invalid Choice..\n";

		}
	}
	while(choice!=0);
}
