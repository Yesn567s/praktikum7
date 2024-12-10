#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    // this is a comment
    srand(time(0));
    int totalpc=0;
    int totalcc=0;
    string hs;
    string chs;
    vector <int> pc;
    vector <int> cc;
    vector <int> scorepc;
    vector <int> scorecc;
    string again;
    while(true){
        pc.clear();
        cc.clear();
        scorepc.clear();
        scorecc.clear();
        totalcc=0;
        totalpc=0;
        hs="";
        for(int i=0;i<2;i++){
            pc.push_back(rand()%13+1);
        }
        for(int i=0;i<2;i++){
            cc.push_back(rand()%13+1);
        }
        for(int i=0;i<pc.size();i++){
            scorepc.push_back(pc[i]);
            if(scorepc[i]==1 && totalpc<21){
                scorepc[i]=11;
            }
            else if(scorepc[i]==1 && totalpc>21){
                scorepc[i]=1;
            }
            else if(scorepc[i]>10){
                scorepc[i]=10;
            }
            totalpc+=scorepc[i];
        }
        cout<<"------------------------------------------"<<endl;
        cout<<"                 Black jack"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"Your cards: ";
        for(int i=0;i<pc.size();i++){
            cout<<"[";
            if(pc[i]==1){
                cout<<"Ace]";
            }
            else if(pc[i]>1 && pc[i]<11){
                cout<<pc[i]<<"]";
            }
            else if(pc[i]==11){
                cout<<"Jack]";
            }
            else if(pc[i]==12){
                cout<<"Queen]";
            }
            else if(pc[i]==13){
                cout<<"King]";
            }
        }
        cout<<endl<<"Dealer's cards: ";
        for(int i=0;i<cc.size();i++){
            cout<<"[";
            if(i==0){
                if(cc[i]==1){
                    cout<<"Ace]";
                }
                else if(cc[i]>1 && cc[i]<11){
                    cout<<cc[i]<<"]";
                }
                else if(cc[i]==11){
                    cout<<"Jack]";
                }
                else if(cc[i]==12){
                    cout<<"Queen]";
                }
                else if(cc[i]==13){
                    cout<<"King]";
                }
            }
            else{
                cout<<"?]";
            }
        }
        cout<<endl;
        while(true){
            cout<<"Your total points: "<<totalpc<<endl<<endl;
            cout<<" Do you want to [h]it or [s]tand?";
            cin>>hs;
            if(hs=="h"){
                pc.push_back(rand()%13+1);
            }
            else if(hs=="s"){
                break;
            }
            hs="";
            scorepc.clear();
            totalpc=0;
            cout<<"Your cards: ";
            for(int i=0;i<pc.size();i++){
                cout<<"[";
                if(pc[i]==1){
                    cout<<"Ace]";
                }
                else if(pc[i]>1 && pc[i]<11){
                    cout<<pc[i]<<"]";
                }
                else if(pc[i]==11){
                    cout<<"Jack]";
                }
                else if(pc[i]==12){
                    cout<<"Queen]";
                }
                else if(pc[i]==13){
                    cout<<"King]";
                }
            }
            for(int i=0;i<pc.size();i++){
                scorepc.push_back(pc[i]);
                if(scorepc[i]==1 && totalpc<21){
                    scorepc[i]=11;
                }
                else if(scorepc[i]==1 && totalpc>21){
                    scorepc[i]=1;
                }
                else if(scorepc[i]>10){
                    scorepc[i]=10;
                }
                totalpc+=scorepc[i];
            }
            cout<<endl;
            if(totalpc==21){
                cout<<"Your total points: "<<totalpc<<endl;
                cout<<"Blackjack! You win automatically!"<<endl;
                break;
            }
            else if(totalpc>21){
                for(int i=0;i<scorepc.size();i++){
                    if(scorepc[i]==11){
                        scorepc
                        [i]=1;
                    }
                }
                totalpc=0;
                for(int i=0;i<scorepc.size();i++){
                    totalpc+=scorepc[i];
                }
                if(totalpc>21){
                    cout<<"Your total points: "<<totalpc<<endl;
                    cout<<"You busted! Dealer wins."<<endl;
                    break;
                }
                else if(totalpc==21){
                    cout<<"Your total points: "<<totalpc<<endl;
                    cout<<"Blackjack! You win automatically!"<<endl;
                    break;
                }
            }
        }
        if(hs=="s"){
            cout<<"Dealer's turn..."<<endl;
            while(true){
                for(int i=0;i<cc.size();i++){
                    cout<<"[";
                    if(cc[i]==1){
                        cout<<"Ace]";
                    }
                    else if(cc[i]>1 && cc[i]<11){
                        cout<<cc[i]<<"]";
                    }
                    else if(cc[i]==11){
                        cout<<"Jack]";
                    }
                    else if(cc[i]==12){
                        cout<<"Queen]";
                    }
                    else if(cc[i]==13){
                        cout<<"King]";
                    }
                }
            cout<<endl;
                scorecc.clear();
                totalcc=0;
                for(int i=0;i<cc.size();i++){
                    scorecc.push_back(cc[i]);
                    if(scorecc[i]==1 && totalcc<21){
                        scorecc[i]=11;
                    }
                    else if(scorecc[i]==1 && totalcc>21){
                        scorecc[i]=1;
                    }
                    else if(scorecc[i]>10){
                        scorecc[i]=10;
                    }
                    totalcc+=scorecc[i];
                }
                cout<<"Dealer's total points: "<<totalcc<<endl;
                if(totalcc>=17 || totalcc>=totalpc){
                    break;
                }
                else{
                    cout<<"Dealer's chooses to hit..."<<endl<<endl;
                    cc.push_back(rand()%13+1);
                }
            }
            if(totalcc>21){
                cout<<"Dealer lost!"<<endl;
            }
            else if(totalcc>totalpc){
                cout<<"Dealer wins!"<<endl;
            }
            else if(totalcc<totalpc){
                cout<<"Player wins!"<<endl;
            }
            else{
                cout<<"it is a tie"<<endl;
            }
        }
        cout<<"Do you want to play again? (y/n): ";
        cin>>again;
        if(again=="n"){
            break;
        }
    }



    return 0;
}
