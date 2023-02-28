//Player,name, Team name, Batting average of 10 players
#include<iostream>
#include<string>
using namespace std;
class Player
{
private:
   string player_name;
    string team_name;
    float batting_avg;
public:
    Player() : player_name("Unknown") , team_name("Unknown") , batting_avg(0) {}
    void readData()
    {
        fflush(stdin);
        cout<<"Enter player name : ";
        getline(cin,player_name);
        cout<<"Enter team name   : ";
        getline(cin,team_name);
        cout<<"Batting average   : ";
        cin>>batting_avg;
    }
    inline void displayData()
    {
       cout<<team_name<<"\t\t"<<player_name<<"\t"<<batting_avg<<"\n";
    }
    void sort(Player p[], int size)
    {
        Player temp;
        for(int j=0;j<size-1;j++)
        {
            for(int k=j+1;k<size;k++)
            {
                if(p[j].batting_avg<p[k].batting_avg)
                {
                    temp=p[j];
                    p[j]=p[k];
                    p[k]=temp;
                }
            }
        }
    }
    void teamWiseSort(Player p[], int size)
    {
        Player temp;
        for(int j=0;j<size-1;j++)
        {
            for(int k=j+1;k<size;k++)
            {
                if(!(p[j].team_name.compare(p[k].team_name)))
                {
                        temp=p[j+1];
                        p[j+1]=p[k];
                        p[k]=temp;
                }
            }
        }
    }
};
int main()
{
    int size;
  cout << "Enter number of players : ";
    cin >> size;
    Player p[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter player-"<<i+1<<" data\n";
        p[i].readData();
    }
    
    for(int i=0;i<size;i++)
        p[i].sort(p , size);

   cout<<"Team name\t Player name\t Batting average\n";
    for(int i=0;i<size;i++)
        p[i].displayData();

    for(int i=0;i<size;i++)
        p[i].teamWiseSort(p , size );
    
   cout<<"\n\nTeam name\t Player name\t Batting average\n";
    for(int i=0;i<size;i++)
        p[i].displayData();
}