#include <iostream>
#include <cstdio>
#include <string.h>
#include <cstdlib>
#include <conio.h>
using namespace std;
static int p=0;
class a
{
    char bun[5],driver[10],arrival[5],depart[5],from[10],to[10],eat[8][4][10];
public:
    void intall();
    void allotment();
    void empty();
    void show();
    void avail();
    void poition(int l);
}
bu[10];
void vline(char ch){
    for (int i=80;i>0;i--)
    cout<<ch;
}
void a::intall()
{
    cout<<"enter bu no.";
    cin>>bu[p].bun;
    cout<<"\nenter driver name:";
    cin>>bu[p].driver;
    cout<<"\narrival time";
    cin>>bu[p].arrival;
    cout<<"\ndeparture";
    cin>>bu[p].depart;
    cout<<"\nfrom:\t\t\t";
    cin>>bu[p].from;
    cout<<"\nto:\t\t\t";
    cin>>bu[p].to;
    bu[p].empty();
    p++;
}
void a::allotment()
{
    int eat;
    char number[5];
    top:
    cout<<"bu no.";
    cin>>number;
    int n;
    for(n=0;n<=p;n++)
    {
        if(strcmp(bu[n].bun,number)==0)
        break;
    }
    while(n<=p){
        cout<<"\nseat no.:";
        cin>>eat;
        if(eat>32){
            cout<<"there are only 32 eats";
        }
        else{
            if(strcmp(bu[n].eat[eat/4][(eat%4-1)],"empty")==0){
                cout<<"passanger name:";
                cin>>bu[n].eat[eat/4][(eat%4-1)];
                break;
            }
            else
            cout<<"not available\n";
        }
    }
    if(n>p){
        cout<<"enter crt bu no.:";
        goto top;
    }
}
void a::empty(){
    for(int i=0;i<8;i++){
        for(int j=0;j<4;j++){
            strcpy(bu[p].eat[i][j],"empty");
        }
    }
}
void a::show(){
    int n;
    char number[5];
    cout<<"enter bus no.:";
    cin>>number;
    for(n=0;n<=p;n++){
        if(strcmp(bu[n].bun,number)==0)
          break;  
    }
    while(n<=p){
        vline("*");
        cout<<"bus no."<<bu[n].bun<<"\ndriverer:\t"<<bu[n].driver<<"\t\tarrival time\t"<<bu[n].arrival<<"\tdeparture time"<<bu[n].depart<<"\nfrom\t\t"<<bu[n].from<<"\t\tto\t\t"<<bu[n].to<<"\n";
        vline("*");
        bus[0].poition(n);
        int a=1;
        for(int i=0;i<8;i++){
            for(int j=0;j<4;j++){
                a++;
                if(strcmp(bu[n].eat[i][j],"empty")!=0)
                cout<<"the eat no."<<(a-1)<<"i reaerved for"<<bu[n].eat[i][j]<<".";
            }
        }
       break;
    }
     if(n>p)
        cout<<"enter crt bu no.";
}
void a::poition(int l){
    int s=0;p=0;
    for(int i=0;i<8;i++){
        cout<<"\n";
        for(int j=0;j<4;j++){
            s++;
            if(strcmp(bu[l].eat[i][j],"empty")==0){
                cout.width(5);
                cout.fill("");
                cout<<s<<(".");
                cout.width(10);
                cout.fill("");
                cout<<bu[l].eat[i][j];
                p++;
            }
            else{
                cout.width(5);
                cout.fill("");
                cout<<s<<(".");
                cout.width(10);
                cout.fill("");
                cout<<bus[l].eat[i][j];
            }
        }
    }
    cout<<"\n\nthere are"<<p<<"eat empty in bus no."<<bu[l].bun;
}
void a::avail(){ int n;
    for(int i=0;i<n;i++){
    vline("*");
    cout<<"bus no."<<bu[n].bun<<"\ndriverer:\t"<<bu[n].driver<<"\t\tarrival time\t"<<bu[n].arrival<<"\tdeparture time"<<bu[n].depart<<"\nfrom\t\t"<<bu[n].from<<"\t\tto\t\t"<<bu[n].to<<"\n";
    vline("*");
    vline("_");}
}
int main(){
    system("cls");
    int w;
    while(1){
        cout<<"\n\n\n\n";
        cout<<"\t\t\t1.install\n\t\t\t";
        cout<<"2.reservation\n\t\t\t";
        cout<<"3.show\n\t\t\t";
        cout<<"4.buses available\n\t\t\t";
        cout<<"5.exit";
        cout<<"enter your choice\t";
        cin>>w;
        switch(w){
            case 1:{bu[p].install;
            break;}
            case 2:{bu[p].allotment;
            break;}
            case 3:{bu[p].show;
            break;}
            case 4:{bu[p].avail;
            break;}
            case 5:exit(0);
        
    }
}
return 0;
}
