#include<iostream>
#include<conio.h>
using namespace std;
class fin_nodee
{public:
    struct linlis
    {
        int data;
        linlis *l;
    }*a;
    void create();
    void retnode();
    void display();
};
    void fin_nodee:: create()
    {int n;
    linlis *b,*c;

        cout<<"Num of nodes:";
        cin>>n;
        cout<<"\nEnter the data:\n";
        a=new linlis;
        cin>>a->data;
        a->l=NULL;
        b=a;
        for(int i=0;i<n-1;i++)
        {
            c=new linlis;
            cin>>c->data;
            c->l=NULL;
            b->l=c;
            b=c;


        }

    }
    void fin_nodee::retnode()
    {int k;
        linlis *e,*f;
        e=a;f=a;
        cout<<"\nWhich node is to be retrieved from last?";
        cin>>k;
        for(int i=0;i<k;i++)
        {
           f=f->l;
        }
        while(f!=NULL)
        {e=e->l;
        f=f->l;
            }
            cout<<e->data;
    }
    void fin_nodee::display()
    {
        linlis *d;
        d=a;
        while(d!=NULL)
        {
            cout<<d->data<<"->";
            d=d->l;
        }
cout<<"x";
    }

int main()
{
   fin_nodee f;
   f.create();
   f.display();
   f.retnode();
   getch();
}
