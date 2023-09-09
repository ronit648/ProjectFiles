#include<iostream>
using namespace std;

// function that helps to start the Quiz game 
int playQuiz()
{
    char c,option;
    playinsidefunction:
    int Score=0;
    cout<<"------------ Welcome to Quiz Game -------------"<<endl;
    cout<<"------------ Please Follow The Instruction -------------"<<endl;
    cout<<"Instruction 1 : This Quiz Contains Total 10 Questions "<<endl;
    cout<<"Instruction 2 : There Will Be 4 Options Like - (a,b,c,d) "<<endl;
    cout<<"Instruction 3 : You Will Given 1 Marks For Each Correct Answer "<<endl;
    cout<<"Instruction 4 : There Will Be No Negative Marking "<<endl;
    cout<<"Instruction 5 : You Have to score at least7 marks and above to Win Quiz Game "<<endl;
    cout<<"Instruction 6 : Please Press 'S' To Start The Quiz Game "<<endl;

    cin>>c;

    if(c=='s' || c=='S')
    {
        cout<<"Q1. What is the capital of India ?"<<endl;
        cout<<" (a) Delhi"<<endl;
        cout<<" (b) Mumbai"<<endl;
        cout<<" (c) Kolkata"<<endl;
        cout<<" (d) Chennai"<<endl;
        cin>>option;
        if(option=='A' || option=='a')
        Score+=1;
        else
        Score+=0;
        cout<<endl;
        cout<<"Q2. Who is the prime minister of India ?"<<endl;
        cout<<" (a) Narender Modi"<<endl;
        cout<<" (b) Arvind Kejriwal"<<endl;
        cout<<" (c) Rahul Gandhi"<<endl;
        cout<<" (d) Mohit Sharma"<<endl;
        cin>>option;
        if(option=='A' || option=='a')
        Score+=1;
        else
        Score+=0;
        cout<<endl;
        cout<<"Q3. What is the National Bird of India ?"<<endl;
        cout<<" (a) Peacock"<<endl;
        cout<<" (b) Hen"<<endl;
        cout<<" (c) Crow"<<endl;
        cout<<" (d) Pegion"<<endl;
        cin>>option;
        if(option=='A' || option=='a')
        Score+=1;
        else
        Score+=0;
        cout<<endl;
        cout<<"Q4. What is the National Animal of India ?"<<endl;
        cout<<" (a) Tiger"<<endl;
        cout<<" (b) Dog"<<endl;
        cout<<" (c) Lion"<<endl;
        cout<<" (d) Zebra"<<endl;
        cin>>option;
        if(option=='A' || option=='a')
        Score+=1;
        else
        Score+=0;
        cout<<endl;
        cout<<"Q5. What is the National Flower of India ?"<<endl;
        cout<<" (a) Lotus"<<endl;
        cout<<" (b) Rose"<<endl;
        cout<<" (c) lilly"<<endl;
        cout<<" (d) Sunflower"<<endl;
        cin>>option;
        if(option=='A' || option=='a')
        Score+=1;
        else
        Score+=0;
        cout<<endl;
        cout<<"Q6. Who is the Cheif Minister of Delhi ?"<<endl;
        cout<<" (a) Arvind kejriwal"<<endl;
        cout<<" (b) Rohit Sharma"<<endl;
        cout<<" (c) Abhishek"<<endl;
        cout<<" (d) Minu Devi"<<endl;
        cin>>option;
        if(option=='A' || option=='a')
        Score+=1;
        else
        Score+=0;
        cout<<endl;
        cout<<"Q7. What is the Capital of Bihar ?"<<endl;
        cout<<" (a) Patna"<<endl;
        cout<<" (b) Biahr"<<endl;
        cout<<" (c) Mumbai"<<endl;
        cout<<" (d) GorakhPur"<<endl;
        cin>>option;
        if(option=='A' || option=='a')
        Score+=1;
        else
        Score+=0;
        cout<<endl;
        cout<<"Q8. What is the Capital of Delhi ?"<<endl;
        cout<<" (a) Delhi"<<endl;
        cout<<" (b) Biahr"<<endl;
        cout<<" (c) Mumbai"<<endl;
        cout<<" (d) GorakhPur"<<endl;
        cin>>option;
        if(option=='A' || option=='a')
        Score+=1;
        else
        Score+=0;
        cout<<endl;
        cout<<"Q9. What is the National Sweets of India ?"<<endl;
        cout<<" (a) Jalebi"<<endl;
        cout<<" (b) Barphi"<<endl;
        cout<<" (c) Rasgolla"<<endl;
        cout<<" (d) Kaju Katli"<<endl;
        cin>>option;
        if(option=='A' || option=='a')
        Score+=1;
        else
        Score+=0;
        cout<<endl;
        cout<<"Q10. Who is the Father of  Our Nation ?"<<endl;
        cout<<" (a) Mahatma Gandhi"<<endl;
        cout<<" (b) Lalu Yadav"<<endl;
        cout<<" (c) Nitish Kumar"<<endl;
        cout<<" (d) Ritesh Deshmukh"<<endl;
        cin>>option;
        if(option=='A' || option=='a')
        Score+=1;
        else
        Score+=0;

        return Score;
        


    }
    else
    cout<<"You have enterd Wrong Value. Plaese Enter Correct Values"<<endl;
    

}

int main()
{
   p:
   playinsidefunction:
   int final_score=playQuiz();
   char play;
   cout<<"Your Final Score is : "<<final_score<<endl;
   if(final_score >=7)
   {
      cout<<"Congratulations ! You Have Passed The Quiz Game "<<endl;
      cout<<"Do you want to play again (Y or N) ?"<<endl;
      cin>>play;
      if(play=='y' || play=='Y')
      goto p;

      else
      cout<<"Thankyou For Playing The Quiz Game "<<endl;

    }
    else
    {
       cout<<"oops ! You don't Passed the Quiz Game "<<endl;
       cout<<"Do you want to play again (Y or N) ?"<<endl;
       cin>>play;
       if(play=='y' || play=='Y')
       goto playinsidefunction;

       else
       cout<<"Thankyou For Playing The Quiz Game "<<endl;
    }
   
    return 0;
}