#include<iostream>
using namespace std;

class items
{
private:
    int itemcode[50];
    float itemprice[50];
    int count;
public:
    void cnt(){count=0;}
    void getitem();
    void displaysum();
    void removeitem();
    void displayitem();
};

void items :: getitem()
{
    cout<<"enter item code :";
    cin>>itemcode[count];
    cout<<"enter item price :";
    cin>>itemprice[count];
    count++;
}

void items :: displaysum()
{
    float sum=0;
    for(int i=0; i<count; i++)
        sum=sum+itemprice[i];
    cout<<"\n total sum :"<<sum<<endl;
}

void items ::removeitem()
{
    int a;
    cout<<"enter item code : \n";
    cin>>a;

    for(int i=0; i<count; i++)
    if(itemcode[i]==a)
        itemprice[i]=0;
}
void items::displayitem()
{
    cout<<"\n code price\n";
    for(int i=0;i<count;i++)
    {
        cout<<"\n"<<itemcode[i];
        cout<<" "<<itemprice[i];
    }
    cout<<"\n";
}

int main()
{
    items order;
    order.cnt();
    int x;
    do
    {
        cout<<"\nyou can do the following";
        cout<<"\nenter appropriate number";
        cout<<"\n 1. add an item";
        cout<<"\n 2. display total value";
        cout<<"\n 3. delete an items";
        cout<<"\n 4. display all items";
        cout<<"\n 5. quit";

        cin>>x;

        switch(x)
        {
            case 1 : order.getitem();break;
            case 2 : order.displaysum();break;
            case 3 : order.removeitem();break;
            case 4 : order.displayitem();break;
            case 5 : break;
            default : cout<<"\n enter valid input";
        }
    }while(x!=5);
return 0;
}
