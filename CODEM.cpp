#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<string>
#include<conio.h>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include<ctime>
#include<iomanip>
using namespace std;
class socialnetwork
{   
    char firstname[20],dob[20],lastname[20],gender[20],password[30];
    char mailid[20];
    int userid;
    public:
    void modify();   
    void create();
    void store();
    void show() const;
    int retacno() const;
    void login(int);
};
void socialnetwork::create()
{   
    system(&quot;cls&quot;);
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;First name:&quot;;cin&gt;&gt;firstname;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Last name:&quot;;cin&gt;&gt;lastname;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;DOB:(dd/mm/yy)&quot;;cin&gt;&gt;dob;
    cout&lt;&lt;endl;

    cout&lt;&lt;&quot;Mail ID:&quot;;cin&gt;&gt;mailid;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Gender:&quot;;cin&gt;&gt;gender;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;User ID(NO):&quot;;cin&gt;&gt;userid;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Password:&quot;;cin&gt;&gt;password;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Agree to the terms and conditions(y/n):&quot;;
    int main();
}
void socialnetwork::show() const
{
    cout&lt;&lt;&quot;First Name : &quot;&lt;&lt;firstname;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Last Name  : &quot;&lt;&lt;lastname;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;DOB      : &quot;&lt;&lt;dob;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Mail ID   : &quot;&lt;&lt;mailid;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Gender  : &quot;&lt;&lt;gender;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
}
void socialnetwork::modify()
{
    cout&lt;&lt;&quot;\n User ID. : &quot;&lt;&lt;userid;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;\nModify Account Mail ID : &quot;;
    cin.ignore();
    cin.getline(mailid,100);
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;\nModify First Name : &quot;;
    cin&gt;&gt;firstname;
    cout&lt;&lt;&quot;\nModify Last Name : &quot;;
    cin&gt;&gt;lastname;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;\nModify Password : &quot;;
    cin&gt;&gt;password;
   
}
int socialnetwork::retacno() const
{
    return userid;
}

void mainscreen();
void computer();
void science();
void jokes();
void facts();
void quotes();
void games();
void guessno();
void jumble();
void guesshelp();
void search(int);
void account(int);
void write_account();
void logo();
void homepage();
void settings();
void logout();
void modify_details(int);
void delete_account(int);

//******************************//
//        MAIN FUNCTION            //
//******************************//

int main()
{   
    socialnetwork cm;
    logo();
{
    char accept=&#39;n&#39;;
    cin&gt;&gt;accept;
    if(accept==&#39;y&#39;||accept==&#39;Y&#39;)
    {    system(&quot;cls&quot;);
        cout&lt;&lt;endl;
        cout&lt;&lt;&quot;        LOADING....&quot;;
        Sleep (3000);
        cout&lt;&lt;&quot;....&quot;;
        Sleep (2000);
        cout&lt;&lt;&quot;.....&quot;;
        Sleep (1000);
        mainscreen();
    }
}
}

void mainscreen()
{
    int num,numb;
    char ch;
    do{
    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
    system(&quot;cls&quot;);
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    SetConsoleTextAttribute(color, 8);
    cout&lt;&lt;&quot;                             WELCOME TO CODEM           &quot;&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Select what you want to see &quot;;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;         1. My Account &quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;         2. Home Page&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;         3. Games&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;         4. Settings&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;         5. Search&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cin&gt;&gt;ch;
    system(&quot;cls&quot;);
    switch(ch)
    {
        case &#39;1&#39;:
        {    cout&lt;&lt;&quot;Enter your userid &quot;;     cin&gt;&gt;num;
            account(num);
            break;
        }
        case &#39;2&#39;:
        {
            homepage();
            break;
        }
        case &#39;3&#39;:
        {
            games();
            break;

        }
        case &#39;4&#39;:
        {
            settings();
            break;
        }
        case &#39;5&#39;:
        {
            cout&lt;&lt;&quot;Enter userid to be searched&quot;;     cin&gt;&gt;numb;
            search(numb);
            break;
        }
    default :cout&lt;&lt;&quot;\n&quot;;
        }
        cin.ignore();
        cin.get();
    }while(ch!=&#39;5&#39;);
    return;
}

void write_account()
{
    socialnetwork cm;
    ofstream outFile;
    outFile.open(&quot;user2.txt&quot;,ios::binary|ios::app);
    cm.create();
    outFile.write((char*)&amp;cm, sizeof(cm));
    outFile.close();
}
void account(int n)
{   
    socialnetwork cm;
    bool flag=false;
    ifstream inFile;
    inFile.open(&quot;user2.txt&quot;,ios::binary);
    if(!inFile)
    {
        cout&lt;&lt;&quot;File could not be open !! Press any Key...&quot;;
        return;
    }
    cout&lt;&lt;&quot;\n         MY ACCOUNT        \n&quot;;
        while(inFile.read((char*)&amp;cm, sizeof(cm)))
    {

        if(cm.retacno()==n)
        {
            cm.show();
            flag=true;
        }
    }
    inFile.close();
    if(flag==false)
        cout&lt;&lt;&quot;\n\nAccount number does not exist&quot;;
}

void socialnetwork::login(int a)
{   
    system(&quot;cls&quot;);
    socialnetwork cm;
    bool flag=false;
    ifstream inFile;
    inFile.open(&quot;user2.txt&quot;,ios::binary);
    if(!inFile)
    {
        cout&lt;&lt;&quot;Account does not exist To Sign Up !! Press any Key...&quot;;
        return;
    }
 
       while(inFile.read((char*)&amp;cm, sizeof(cm)))
    {
        if(cm.retacno()==a)
        {
            flag=true;
            mainscreen();
        }
    }
    inFile.close();
    if(flag==false)
        cout&lt;&lt;&quot;\n\nAccount number does not exist&quot;;
}
void homepage()
{
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;                       HOMEPAGE                 &quot;&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Enter Your Field Of Intrest&quot;;
    cout&lt;&lt;endl;

    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;        1. Computer &quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;        2. Science&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;        3. Jokes&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;        4. Facts&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;        5. Quotes&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;cout&lt;&lt;endl;
    int no;
    cin&gt;&gt;no;
    switch(no)
    {
        case 1:
        {
        computer();
        break;
        }
        case 2:
        {
        science();
        break;
        }
        case 3:
        {
        jokes();
        break;
        }
        case 4:
        {
        facts();
        break;
        }
        case 5:
        {
        quotes();
        break;
        }
    }
}
void computer()
{    system(&quot;cls&quot;);
    cout&lt;&lt;&quot;            COMPUTER&quot;;

    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;ANDROID P&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;The latest version of android is on its brim&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;to be realesed soon.. wait for it.&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot; WORLD OF 5G&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;The al new fastest internet is coming and will &quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;have speed 10x - 100x faster than 4G&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;ROBOTS AND CYBORG &quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Soon every part of IT industry will have robots &quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;doing all the jobs of humans and Robots will &quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;leave their mark in all places from &quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Big IT companies to schools etc:-&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
}
void science()
{   
    system(&quot;cls&quot;);
    cout&lt;&lt;&quot;    \t\t        SCIENCE&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;EARTH&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Earth is travelling across the sun at the speed &quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;of 67000 miles per hour and we too are &quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;travelling with that speed&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;PLANET&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Plants do emits light during photosynthesis&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;which we cannot see&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;ORIGIN&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;The word scientist first appeared in the year&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;1833&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;

}
void jokes()
{   
    system(&quot;cls&quot;);
    cout&lt;&lt;&quot;    \t\t        JOKES&quot;;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;1. IN HOSPITAL &quot;;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Doctor: I&#39;m sorry but you suffer from a terminal illness and have only 10 to
live.&quot;;cout&lt;&lt;endl;
cout&lt;&lt;&quot;Patient: What do you mean, 10? 10 what? Months? Weeks?!&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Doctor: Nine.&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;2. RESEARCH &quot;;
    cout&lt;&lt;&quot;According to a Research it is proved that out of&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;20,23,96,58,78,15,35,991&quot;;
    cout&lt;&lt;&quot;People 96% are lazy enough to read that number :):)&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;3. ACCIDENT&quot;;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot; Bob: Holy schmoozes, I just fell off a 30 ft ladder.&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot; Jim: No way man, are you okay?&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot; Bob: Yeah, luckily I was just on the first step.&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
}
void facts()
{
    system(&quot;cls&quot;);
    cout&lt;&lt;&quot;    \t\t        FACTS&quot;;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;You have never seen your own face&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;only reflections and pictures&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Every day your heart creates enough energy&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;To drive a truck for 32 Km (20 mi)&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;You cannot imagine a new colour no matter&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;how much ever you try.....&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;

    cout&lt;&lt;endl;
}
void quotes()
{
    system(&quot;cls&quot;);
    cout&lt;&lt;&quot;    \t\t        QUOTES&quot;;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;The 3 C&#39;s of life, CHANCES, CHOICE &amp; CHANGES&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;You must take a chance to make a choice and change your life&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;A seed grows with no noise,&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;but a tree falls with huge noise&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Destruction has noise, but creation is quiet&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;that is the power of silence&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;        GROW SILENTLY&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Every bad situation will have &quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Something Positive.&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Even a dead clock shows correct&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Time Twice a Day&quot;    ;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
}
void games()
{
    cout&lt;&lt;&quot;Select Your game &quot;;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;   
    cout&lt;&lt;&quot;1. Guess Number &quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;   
    cout&lt;&lt;&quot;2. Jumbled words&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;   
    cout&lt;&lt;&quot;3. Guess Number with Help&quot;;cout&lt;&lt;endl;
    int ch1;
    int num1;
    cin&gt;&gt;ch1;
    switch(ch1)
    {
        case 1:
            {    system(&quot;cls&quot;);

                guessno();
                break;
            }
        case 2:
            {    system(&quot;cls&quot;);
                jumble();
                break;
            }
        case 3:
            {    system(&quot;cls&quot;);
                guesshelp();
                break;
            }
    }
   
   
}
void guessno()
{
    {
    srand(time(0));
    int n = 1 + (rand() % 10);
    int g;
    std::cout &lt;&lt; &quot;I&#39;m thinking of a number between 1 and 10.\nTry to guess it! &quot;;
    while(true)
    {
        std::cin &gt;&gt; g;
        if (g == n)
        break;
        else
        std::cout &lt;&lt; &quot;That&#39;s not my number.\nTry another guess! &quot;;
    }
    std::cout &lt;&lt; &quot;You&#39;ve guessed my number!&quot;;
    return;
}
}
void jumble()
{
    int score;
    score = 0;
   
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] =
    {
          {&quot;wall&quot;, &quot;Do you feel like banging your head against something?&quot;},

          {&quot;glasses&quot;, &quot;These might help you see the answer&quot; },
          {&quot;labored&quot;, &quot;Going slowly, is it?&quot; },
          {&quot;persistant&quot;, &quot;keep at it&quot;},
          {&quot;jumble&quot;, &quot;It&#39;s what the game is all about!&quot;,}
    };
   
    srand(time(0));
   
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD]; //word to guess
    string theHint = WORDS[choice][HINT]; //hint
   
   
    string jumble = theWord;
    int length = jumble.size();
    for (int i = 0; i &lt; length; ++i)
    {
       int index1 = (rand() % length);
       int index2 = (rand() % length);
       char temp = jumble[index1];
       jumble[index1] = jumble[index2];
       jumble[index2] = temp;
       score = length;  
       
       
    }
     
   
    cout &lt;&lt; &quot;\t\tWelcome to Word Jumble\n\n&quot;;
    cout &lt;&lt; &quot;Unscarmble the letters to make a word.\n&quot;;
    cout &lt;&lt; &quot;Enter &#39;hint&#39; for a hint.\n&quot;;
    cout &lt;&lt; &quot;Enter &#39;quit&#39; to quit the game\n\n&quot;;
    cout &lt;&lt; &quot;The jumble is &quot; &lt;&lt; jumble;
   
    string guess;
    cout &lt;&lt;&quot;\n\nYour guess: &quot;;
    cin &gt;&gt; guess;
   
   
    while ((guess != theWord) &amp;&amp; ( guess != &quot;quit&quot;))
    {
         
          if (guess == &quot;hint&quot;)
             cout &lt;&lt; theHint;
      
                      

          else
              cout &lt;&lt; &quot;Sorry that is not it...&quot;;
              --score;
             
    cout &lt;&lt; &quot;\n\nYour guess: &quot;;
    cin &gt;&gt; guess;
   
    }
   
    if (guess == theWord)
       cout &lt;&lt; &quot;\nThat&#39;s it! You guessed it! You have a score of &quot; &lt;&lt; score &lt;&lt; endl;
             
       cout &lt;&lt; &quot;\nThanks for playing!\n&quot;;
        
    system(&quot;pause&quot;);
   
    return;
   
}
void guesshelp()
{
    std::srand(std::time(0));
    int lower, upper, guess;
    std::cout &lt;&lt; &quot;Enter lower limit: &quot;;
    std::cin &gt;&gt; lower;
    std::cout &lt;&lt; &quot;Enter upper limit: &quot;;
    std::cin &gt;&gt; upper;
    int random_number = lower + std::rand() % ((upper + 1) - lower);
    do
    {
        std::cout &lt;&lt; &quot;Guess what number I have: &quot;;
        std::cin &gt;&gt; guess;
        if (guess &gt; random_number)
        std::cout &lt;&lt; &quot;Your guess is too high\n&quot;;
        else if (guess &lt; random_number)
        std::cout &lt;&lt; &quot;Your guess is too low\n&quot;;
        else
        std::cout &lt;&lt; &quot;You got it!\n&quot;;
    } while (guess != random_number);
    return;
}
void settings()
{

    cout&lt;&lt;&quot;enter what do you want to do...&quot;;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;   
    cout&lt;&lt;&quot;1. Change Details&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;   
    cout&lt;&lt;&quot;2. Delete Account&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;   
    cout&lt;&lt;&quot;3. Log Out&quot;;cout&lt;&lt;endl;
    int ch1;
    int num1;
    cin&gt;&gt;ch1;
    switch(ch1)
    {
        case 1:
            {    system(&quot;cls&quot;);
                cout&lt;&lt;&quot;Enter your userid &quot;;     cin&gt;&gt;num1;   
                modify_details(num1);
                break;
            }
        case 2:
            {    system(&quot;cls&quot;);
                cout&lt;&lt;&quot;Enter your userid &quot;;     cin&gt;&gt;num1;
                delete_account(num1);
                break;
            }
        case 3:
            {    system(&quot;cls&quot;);
                logout();
                break;
            }
    }
}
void modify_details(int n)
{
    system(&quot;cls&quot;);
    bool found=false;
    socialnetwork cm;
    fstream File;
    File.open(&quot;user2.txt&quot;,ios::binary|ios::in|ios::out);
    if(!File)
    {
        cout&lt;&lt;&quot;File could not be open !! Press any Key...&quot;;
        return;

    }
    while(!File.eof() &amp;&amp; found==false)
    {
        File.read((char*)&amp;cm,sizeof(cm));
        if(cm.retacno()==n)
        {
            cm.show();
            cout&lt;&lt;&quot;\n\nEnter The New Details of account&quot;&lt;&lt;endl;
            cm.modify();
            int pos=(-1)*static_cast&lt;int&gt;(sizeof(socialnetwork));
            File.seekp(pos,ios::cur);
            File.write((char*)&amp;cm,sizeof(cm));
            cout&lt;&lt;&quot;\n\n\t Account Updated&quot;;
            found=true;
          }
    }
    File.close();
    if(found==false)
        cout&lt;&lt;&quot;\n\n Record Not Found &quot;;
}
void delete_account(int n)
{
    system(&quot;cls&quot;);
    socialnetwork cm;
    ifstream inFile;
    ofstream outFile;
    inFile.open(&quot;user2.txt&quot;,ios::binary);
    if(!inFile)
    {
        cout&lt;&lt;&quot;File could not be open !! Press any Key...&quot;;
        return;
    }
    outFile.open(&quot;user2.txt&quot;,ios::binary);
    inFile.seekg(0,ios::beg);
    while(inFile.read((char*)&amp;cm,sizeof(cm)))
    {
        if(cm.retacno()!=n)
        {
            outFile.write((char*)&amp;cm,sizeof(cm));
        }
    }
    inFile.close();
    outFile.close();
    remove(&quot;user2.txt&quot;);
    rename(&quot;Temp.txt&quot;,&quot;user2.dat&quot;);

    cout&lt;&lt;&quot;\n\n\t Account Deleted ..&quot;;
}
void logout()
{
    system (&quot;cls&quot;);
    cout&lt;&lt;&quot;Thanks for using our site CODEM&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    return logo();
}
void search(int b)
{   
    socialnetwork cm;
    bool flag=false;
    ifstream inFile;
    inFile.open(&quot;user2.txt&quot;,ios::binary);
    if(!inFile)
    {
        cout&lt;&lt;&quot;Account could not be open !! Press any Key...&quot;;
        return;
    }
    cout&lt;&lt;&quot;\n         ACCOUNT        \n&quot;;
        while(inFile.read((char*)&amp;cm, sizeof(cm)))
    {
        if(cm.retacno()==b)
        {
            cm.show();
            flag=true;
        }
    }
    inFile.close();
    if(flag==false)
        cout&lt;&lt;&quot;\n\nAccount ID does not exist&quot;;
}
void logo()
{
    socialnetwork cm;
    system(&quot;color 0A&quot;);
    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
   
    SetConsoleTextAttribute(color, 10);

    cout&lt;&lt;&quot;Sign Up:(press S):&quot;;cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cout&lt;&lt;&quot;Log In :(press L):&quot;;cout&lt;&lt;endl;
    char nacc;
    cout&lt;&lt;endl;
    cout&lt;&lt;endl;
    cin&gt;&gt;nacc;
    if(nacc ==&#39;s&#39;|| nacc ==&#39;S&#39;)
    {   
        write_account();
    }
    else if(nacc==&#39;l&#39;||nacc==&#39;L&#39;)
    {
        int num;
        char password;
        system(&quot;cls&quot;);
        cout&lt;&lt;&quot;Userid:&quot;;cin&gt;&gt;num;
        cout&lt;&lt;&quot;Password:&quot;;cin&gt;&gt;password;
        cout&lt;&lt;endl;
        system(&quot;cls&quot;);
        cout&lt;&lt;&quot;        LOADING....&quot;;
        Sleep (3000);
        cout&lt;&lt;&quot;....&quot;;
        Sleep (2000);
        cout&lt;&lt;&quot;.....&quot;;
        Sleep (1000);
       
        cm.login(num);
    }
    else
    return;
