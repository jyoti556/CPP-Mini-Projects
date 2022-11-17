#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct student{
    char name[20];
    char rollno[10];
    int marks,random;
};
student st;

void java(){
    st.marks=0;
    char choice;
    int i=0,arr[5]; 
    while(i<5){
        back:
    st.random=rand()%5;
    for(int j=0;j<=5;j++){
            if(st.random==arr[j]){
                goto back;
            }
    }
    arr[i]=st.random;
    switch(st.random){
        case 0:
           cout<<i+1<<". Which of the following option leads to the portability and security of Java?"<<endl;
            cout<<"a. Bytecode is executed by JVM"<<endl;
            cout<<"b. The applet makes the Java code secure and portable"<<endl;
            cout<<"c. Use of exception handling"<<endl;
            cout<<"d. Dynamic binding between objects"<<endl;
            choice= getch();
            if(choice=='a'||choice=='A'){
                cout<<"Your answer is correct";
                st.marks++;
            }
            else{
                cout<< "your answer is wrong"<<endl;
                cout<< "correct answer is option A";
            }
            getch();
            system("CLS");
        break;

        case 1:
            cout<<i+1<<". Which of the following is not a Java features?"<<endl;
            cout<<"a. Dynamic "<<endl;
            cout<<"b. Architecture Neutral "<<endl;
            cout<<"c. Use of pointers "<<endl;
            cout<<"d. Object-oriented "<<endl;
            choice= getch();
            if(choice=='c'||choice=='C'){
                cout<<"Your answer is correct";
                st.marks++;
            }
            else{
                cout<< "your answer is wrong"<<endl;
                cout<< "correct answer is option C";
            }
            getch();
            system("CLS");
        break;

        case 2:
            cout<<i+1<<". What does the expression float a = 35 / 0 return?"<<endl;
            cout<<"a. 0"<<endl;
            cout<<"b. Not a Number"<<endl;
            cout<<"c. Infinity"<<endl;
            cout<<"d. Run time exception"<<endl;
            choice= getch();
            if(choice=='c'||choice=='C'){
                cout<<"Your answer is correct";
                st.marks++;
            }
            else{
                cout<< "your answer is wrong"<<endl;
                cout<< "correct answer is option C";
            }
            getch();
            system("CLS");
        break;

        case 3:
            cout<<i+1<<". Which of the following is a valid long literal?"<<endl;
            cout<<"a. ABH8097"<<endl;
            cout<<"b. L990023"<<endl;
            cout<<"c. 904423"<<endl;
            cout<<"d. 0xnf029L"<<endl;
            choice= getch();
            if(choice=='D'||choice=='d'){
                cout<<"Your answer is correct";
                st.marks++;
            }
            else{
                cout<< "your answer is wrong"<<endl;
                cout<< "correct answer is option D";
            }
            getch();
            system("CLS");
        break;

            case 4:
            cout<<i+1<<". What is the return type of the hashCode() method in the Object class? "<<endl;
            cout<<"a. Object"<<endl;
            cout<<"b. int"<<endl;
            cout<<"c. long"<<endl;
            cout<<"d. void"<<endl;
            choice= getch();
            if(choice=='b'||choice=='B'){
                cout<<"Your answer is correct";
                st.marks++;
            }
            else{
                cout<< "your answer is wrong"<<endl;
                cout<< "correct answer is option B";
            }
            getch();
            system("CLS");
        break;

        case 5:
            cout<<i+1<<". ____ is used to find and fix bugs in the Java programs."<<endl;
            cout<<"a. JVM"<<endl;
            cout<<"b. JRE"<<endl;
            cout<<"c. JDK"<<endl;
            cout<<"d. JDB"<<endl;
            choice= getch();
            if(choice=='D'||choice=='d'){
                cout<<"Your answer is correct";
                st.marks++;
            }
            else{
                cout<< "your answer is wrong"<<endl;
                cout<< "correct answer is option D";
            }
            getch();
            system("CLS");
        break;
            }
            i++;
    }
        
    }


void cpp(){
st.marks;
char choice;
int i=0,arr[5]; 
    while(i<5){
        back:
    st.random=rand()%5;
    for(int j=0;j<=5;j++){
        if(st.random==arr[j]){
            goto back;
        }
    }
    arr[i]=st.random;
    switch(st.random){
        case 0:

    cout<<i+1<<". Who invented C++?"<<endl;
    cout<<"a. Dennis Ritchie"<<endl;
    cout<<"b. Ken Thompson"<<endl;
    cout<<"c. Brian Kernighan"<<endl;
    cout<<"d. Bjarne Stroustrup"<<endl;
    choice= getch();
    if(choice=='d'||choice=='D'){
        cout<<"Your answer is correct";
        st.marks++;
    }
    else{
        cout<< "your answer is wrong"<<endl;
        cout<< "correct answer is option D";
    }
    getch();
    system("CLS");
    break;

    case 1:
    cout<<i+1<<". What is virtual inheritance in C++?"<<endl;
    cout<<"a. C++ technique to enhance multiple inheritance"<<endl;
    cout<<"b. C++ technique to ensure that a private member of the base class can be accessed somehow"<<endl;
    cout<<"c. C++ technique to avoid multiple inheritances of classes"<<endl;
    cout<<"d. C++ technique to avoid multiple copies of the base class into children/derived class"<<endl;
    choice= getch();
    if(choice=='d'||choice=='D'){
        cout<<"Your answer is correct";
        st.marks++;
    }
    else{
        cout<< "your answer is wrong"<<endl;
        cout<< "correct answer is option D ";
    }
    getch();
    system("CLS");
    break;

    case 2:
    cout<<i+1<<". What is the difference between delete and delete[] in C++?"<<endl;
    cout<<"a. delete is syntactically correct but delete[] is wrong and hence will give an error if used in any case"<<endl;
    cout<<"b. delete is used to delete normal objects whereas delete[] is used to pointer objects"<<endl;
    cout<<"c. delete is a keyword whereas delete[] is an identifier"<<endl;
    cout<<"d. delete is used to delete single object whereas delete[] is used to multiple(array/pointer of) objects"<<endl;
    choice= getch();
    if(choice=='d'||choice=='D'){
        cout<<"Your answer is correct";
        st.marks++;
    }
    else{
        cout<< "your answer is wrong"<<endl;
        cout<< "correct answer is option D";
    }
    getch();
    system("CLS");
    break;

    case 3:
    cout<<i+1<<". Which of the following type is provided by C++ but not C?"<<endl;
    cout<<"a. double"<<endl;
    cout<<"b. float"<<endl;
    cout<<"c. int"<<endl;
    cout<<"d. bool"<<endl;
    choice= getch();
    if(choice=='d'||choice=='D'){
        cout<<"Your answer is correct";
        st.marks++;
    }
    else{
        cout<< "your answer is wrong"<<endl;
        cout<< "correct answer is option D ";
    }
    getch();
    system("CLS");
    break;

    case 4:
    cout<<i+1<<".  Which of the following correctly declares an array in C++?"<<endl;
    cout<<"a. array{10};"<<endl;
    cout<<"b. array array[10];"<<endl;
    cout<<"c. int array;"<<endl;
    cout<<"d. int array[10];"<<endl;
    choice= getch();
    if(choice=='d'||choice=='D'){
        cout<<"Your answer is correct";
        st.marks++;
    }
    else{
        cout<< "your answer is wrong"<<endl;
        cout<< "correct answer is option d";
    }
    getch();
    system("CLS");
    break;

    case 5:
    cout<<i+1<<". What is the use of the indentation in c++?"<<endl;
    cout<<"a. r distinguishes between comments and inner data"<<endl;
    cout<<"b. distinguishes between comments and outer data"<<endl;
    cout<<"c. distinguishes between comments and code"<<endl;
    cout<<"d. r distinguishes between comments and outer data"<<endl;
    choice= getch();
    if(choice=='c'||choice=='C'){
        cout<<"Your answer is correct";
        st.marks++;
    }
    else{
        cout<< "your answer is wrong"<<endl;
        cout<< "correct answer is option C ";
    }
    getch();
    system("CLS");
    break;
    }
    i++;
    }

    cout<<"out now";
}

void Python(){
st.marks;
char choice;
int i=0,arr[5]; 
    while(i<5){
        back:
    st.random=rand()%5;
    for(int j=0;j<=5;j++){
            if(st.random==arr[j]){
                goto back;
            }
    }
    arr[i]=st.random;
    switch(st.random){
        case 0:

    cout<<i+1<<". What is the maximum possible length of an identifier?"<<endl;
    cout<<"a. 16"<<endl;
    cout<<"b. 32"<<endl;
    cout<<"c. 64"<<endl;
    cout<<"d. None of these above"<<endl;
    choice= getch();
    if(choice=='d'||choice=='D'){
        cout<<"Your answer is correct";
        st.marks++;
    }
    else{
        cout<< "your answer is wrong"<<endl;
        cout<< "correct answer is option d ";
    }
    getch();
    system("CLS");
    break;

    case 1:
    cout<<i+1<<".>> In which language is Python written? "<<endl;
    cout<<"a. english"<<endl;
    cout<<"b. php"<<endl;
    cout<<"c. c"<<endl;
    cout<<"d. all of the above"<<endl;
    choice= getch();
    if(choice=='c'||choice=='C'){
        cout<<"Your answer is correct";
        st.marks++;
    }
    else{
        cout<< "your answer is wrong"<<endl;
        cout<< "correct answer is option C ";
    }
    getch();
    system("CLS");
    break;

    case 2:
    cout<<i+1<<". What do we use to define a block of code in Python language?"<<endl;
    cout<<"a  Key"<<endl;
    cout<<"b. Brackets"<<endl;
    cout<<"c. Indentation"<<endl;
    cout<<"d. None of these"<<endl;
    choice= getch();
    if(choice=='c'||choice=='C'){
        cout<<"Your answer is correct";
        st.marks++;
    }
    else{
        cout<< "your answer is wrong"<<endl;
        cout<< "correct answer is option C";
    }
    getch();
    system("CLS");
    break;

    case 3:
    cout<<i+1<<". Which of the following statements is correct regarding the object-oriented programming concept in Python?"<<endl;
    cout<<"a. Classes are real-world entities while objects are not real"<<endl;
    cout<<"b. Objects are real-world entities while classes are not real"<<endl;
    cout<<"c. Both objects and classes are real-world entities"<<endl;
    cout<<"d. All of the above"<<endl;
    choice= getch();
    if(choice=='b'||choice=='B'){
        cout<<"Your answer is correct";
        st.marks++;
    }
    else{
        cout<< "your answer is wrong"<<endl;
        cout<< "correct answer is option B ";
    }
    getch();
    system("CLS");
    break;

    case 4:
    cout<<i+1<<". Why does the name of local variables start with an underscore discouraged?"<<endl;
    cout<<"a. To identify the variable"<<endl;
    cout<<"b. It confuses the interpreter"<<endl;
    cout<<"c. It indicates a private variable of a class"<<endl;
    cout<<"d. None of these"<<endl;
    choice= getch();
    if(choice=='c'||choice=='C'){
        cout<<"Your answer is correct";
        st.marks++;
    }
    else{
        cout<< "your answer is wrong"<<endl;
        cout<< "correct answer is option C";
    }
    getch();
    system("CLS");
    break;

    case 5:
    cout<<i+1<<". Which of the following declarations is incorrect in python language?"<<endl;
    cout<<"a. xyzp = 5,000,000"<<endl;
    cout<<"b. x y z p = 5000 6000 7000 8000"<<endl;
    cout<<"c. x,y,z,p = 5000, 6000, 7000, 8000"<<endl;
    cout<<"d. x_y_z_p = 5,000,000"<<endl;
    choice= getch();
    if(choice=='b'||choice=='B'){
        cout<<"Your answer is correct";
        st.marks++;
    }
    else{
        cout<< "your answer is wrong"<<endl;
        cout<< "correct answer is option B";
    }
    getch();
    system("CLS");
    break;
    }
    i++;
    }
}
void result(){
    int per=0;
    cout<<"Student Name : "<<st.name<<endl;
    cout<<"Roll No. : "<<st.rollno<<endl;
    cout<<"Marks :" <<st.marks<<" Out of 5"<<endl;
    per=(100*st.marks)/5;
    cout<<"Percentage : "<<per<<"%"<<endl;
    if(per>=33){
        cout<<"Status : Pass"<<endl;  
    }
    else{
        cout<<"Status : Fail"<<endl;
    }
}

int main(){
char press,select;

do{   
cout<<"\n\n\n\t\t\t*****************"<<endl;
cout<<"\t\t\tQUIZ SYSTEM"<<endl;
cout<<"\t\t\t*****************"<<endl;
cout<<"\t\tEnter Name: ";
gets(st.name);
cout<<"\t\tEnter roll no.: ";
gets(st.rollno); 
system("CLS");
cout<<"Marks less than 50% will be fail"<<endl;
cout<<"select which subject quiz you want to perform"<<endl;
cout<<"1) Java"<<endl;
cout<<"2) C++"<<endl;
cout<<"3) Python"<<endl;
select=getch();
system("CLS");
switch (select){
    case '1':
        cout<<"\t\t\tjava quiz"<<endl;
        java();
        system("CLS");
        result();
        break;
    case '2':
        cout<<"\t\t\tcpp quiz"<<endl;
        cpp();
        system("CLS");
        result();
        break;
    case '3':
        cout<<"\t\t\tpython quiz"<<endl;
        Python();
        system("CLS");
        result();
        break;
    default:
        cout<<"invalid input"<<endl;
        break;
        
}
cout<<"press y if you want to go through the quiz and any other key to terminate";
    press=getch();
} while(press=='y'||press=='Y');
}
