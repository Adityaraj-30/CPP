#include<iostream> 

#include<fstream> 

#include<stdlib.h> 

using namespace std; 

class student 

    { 

        private: 

        char name[20];     

        int cls; 

        int rollno; 

        float tot_marks; 

        public: 

        virtual void get(); 

        virtual void display(); 

    }; 

  

    void student::get() 

    { 

        cout<<"Enter Name :"; 

        cin>>name; 

        cout<<"Enter class :\n"; 

        cin>>cls; 

        cout<<"Enter roll no :\n"; 

        cin>>rollno; 

        cout<<"Enter Total marks :\n"; 

        cin>>tot_marks; 

        return; 

    } 

  

    void student::display() 

    {    

           cout<<"Name :\n"<< name<< endl; 

        cout<<"class :\n"<< cls<< endl; 

        cout<<"roll no :\n"<< rollno<< endl; 

        cout<<"Total marks\n"<<tot_marks<< endl; 

        return; 

    } 

  int main() 

  { 

      student s[10]; 

      fstream fout; 

      fout.open("student.txt",ios::in|ios::out); 

      if (!fout) 

  { 

          cout<<"file cannot open!!"; 

      return 1; 

  } 

      cout<<"enter details for 10 students\n"; 

       

      for(int i=0;i<10;i++) 

      { 

          s[i].get(); 

          fout.write((char*)&s[i],sizeof(s[i])); 

      } 

      fout.seekg(0); 

      

      cout<<"The content of student.txt are shown below\n"; 

          for(int i=0;i<10;i++) 

      { 

          fout.read((char*)&s[i],sizeof(s[i])); 

          s[i].display(); 

      } 

      fout.close(); 

      return 0; 

     

       

  }
