//Insertio, deletion and traversing in array
#include<iostream>
#include<conio.h>
using namespace std;

int traversing (int*,int);
int searching  (int*,int,int);
int insertion  (int*,int,int,int);
int  deletion   (int*,int,int);

int main()
{
  int array[30],choice,location,item,i,length,position;
  cout<<"\nEnter length of array : ";
  cin>>length;
  cout<<"Enter element of array \n";
  for(i=0;i<=length-1;i++)
     { cin>>array[i];
     }
  again:
  cout<<"Travers= 1\nSearch = 2\nInsert = 3\nDelete = 4\nExit   = 5 \n";
  cout<<"Enter choice: ";
  cin>>choice;
  switch(choice)
        { case 1:       traversing(array,length);
          goto again;
   case 2:       searching(array,item,length);
          goto again;
   case 3:       cout<<"Enter Item and Position to add \n";
          cin>>item>>position;
          insertion(array,length,item,position);
          for(i=0;i<=length;i++)
          {cout<<array[i]<<endl;
          }

          goto again;
   case 4:       cout<<"Enter position to delete \n";
          cin>>position;
          length =deletion(array,length,position);
          cout<<"New array after delete \n";
          for(i=0;i<length;i++)
      {cout<<array[i]<<"\n";}
          goto again;
   case 5:       break;
   default:       cout<<"wrong value\n";
    goto again;
        }
getch();
}

int traversing(int array[],int length)
       {  for(int i=0;i<=length-1;i++)
      {cout<<array[i]<<"  ";}
       }

int searching(int array[],int item,int length)
      { int i;
        cout<<"\nEnter item to search \n";
        cin>>item;
        int location =-1;
        for( i=0;i<=length-1;i++)
   { if ( array[i]==item)
        { location=i;
        }
   }
   if (location==-1)
        {cout<<"\nItem not found ";
         }
   else{cout<<" \nItem is present at (index value): "<<location;
       }
      }

int insertion(int array[],int length,int item,int position)
      { int j=length-1;
        while(j>=position)
      {  array[j+1]=array[j];
        j=j-1;
      }
      array[position]=item;
      length=length+1;
      }

int deletion(int array[],int length,int position)
     {
        while(position<length)
     { array[position]=array[position+1];
       position=position+1;
     }
        length=length-1;
        return length;

      }
