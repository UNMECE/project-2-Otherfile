#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

class Student{

  private:
    string firstName;
    string lastName;
    string gradSemester;
    string enrollSem;
    string gradStatus;
    float gpa;
    int gradYear;
    int enrollYear;

  public:
    Student(){firstName = "NULL"; lastName = "NULL"; gradSemester = "NULL"; enrollSem = "NULL"; 
                                    gradStatus = "NULL"; gpa = 0.0; gradYear = 0000; enrollYear = 0000;}

    ~Student(){}
    
    // Getters

    string getFirstName(){return firstName;}
    string getLastName(){return lastName;}
    string getGradSemester(){return gradSemester;}
    string getEnrollSem(){return enrollSem;}
    string getGradStatus(){return gradStatus;}
    
    float getGPA(){return gpa;}

    int getGradYear(){return gradYear;}
    int getEnrollYear(){return enrollYear;}
    
    // Setters

    void setFirstName(string fname){firstName = fname;}
    void setLastName(string lname){lastName = lname;}
    void setGradSemester(string g_sem){gradSemester = g_sem;}
    void setEnrollSem(string e_sem){enrollSem = e_sem;}
    void setGradStatus(string g_status){gradStatus = g_status;}
    
    void setGPA(float GPA){gpa = GPA;}

    void setGradYear(int g_year){gradYear = g_year;}
    void setEnrollYear(int e_year){enrollYear = e_year;}


};

class Art_Student : public Student{

  private:
    string artEmphasis;
  public:
    // constructor
    Art_Student() : Student(){}

    string getEmphasis(){return artEmphasis;}
    // setter
    void setEmphasis(string emphasis){artEmphasis = emphasis;}

};

class Physics_Student : public Student{
  
  private:
    string physicsConcentration;
  public:
    // constructor
    Physics_Student() : Student(){}
    
    
    string getConcentration(){return physicsConcentration;}

    void setConcentration(string concentration){physicsConcentration = concentration;} 

};

int main(){

  vector<Art_Student *> art_student; 
  vector<Physics_Student *> physics_student;

  ofstream file("student_list.dat");
  
  art_student.push_back(new Art_Student);
  art_student[0]->setFirstName("Robert");
  art_student[0]->setLastName("Smith");
  art_student[0]->setGradSemester("Spring");
  art_student[0]->setEnrollSem("Fall");
  art_student[0]->setGradStatus("Undergraduate");
  art_student[0]->setGPA(4.0);
  art_student[0]->setGradYear(2028);
  art_student[0]->setEnrollYear(2024);
  art_student[0]->setEmphasis("Art Studio");

  art_student.push_back(new Art_Student);
  art_student[1]->setFirstName("Jane");
  art_student[1]->setLastName("Doe");
  art_student[1]->setGradSemester("Fall");
  art_student[1]->setEnrollSem("Fall");
  art_student[1]->setGradStatus("Graduate");
  art_student[1]->setGPA(3.5);
  art_student[1]->setGradYear(2026);
  art_student[1]->setEnrollYear(2024);
  art_student[1]->setEmphasis("Art Education");
  
  art_student.push_back(new Art_Student);
  art_student[2]->setFirstName("Charlie");
  art_student[2]->setLastName("Chaplin");
  art_student[2]->setGradSemester("Spring");
  art_student[2]->setEnrollSem("Spring");
  art_student[2]->setGradStatus("Undergraduate");
  art_student[2]->setGPA(6.0);
  art_student[2]->setGradYear(2025);
  art_student[2]->setEnrollYear(2024);
  art_student[2]->setEmphasis("Art History");

  art_student.push_back(new Art_Student);
  art_student[3]->setFirstName("Albert");
  art_student[3]->setLastName("Yankovich");
  art_student[3]->setGradSemester("Spring");
  art_student[3]->setEnrollSem("Fall");
  art_student[3]->setGradStatus("Undergraduate");
  art_student[3]->setGPA(12.0);
  art_student[3]->setGradYear(2030);
  art_student[3]->setEnrollYear(2026);
  art_student[3]->setEmphasis("Art Studio");

  art_student.push_back(new Art_Student);
  art_student[4]->setFirstName("Donald");
  art_student[4]->setLastName("Duck");
  art_student[4]->setGradSemester("Fall");
  art_student[4]->setEnrollSem("Spring");
  art_student[4]->setGradStatus("Graduate");
  art_student[4]->setGPA(4.0);
  art_student[4]->setGradYear(2035);
  art_student[4]->setEnrollYear(2024);
  art_student[4]->setEmphasis("Art History");

  physics_student.push_back(new Physics_Student);
  physics_student[0]->setFirstName("Ivo");
  physics_student[0]->setLastName("Robotnik");
  physics_student[0]->setGradSemester("Spring");
  physics_student[0]->setEnrollSem("Fall");
  physics_student[0]->setGradStatus("Undergraduate");
  physics_student[0]->setGPA(2.0);
  physics_student[0]->setGradYear(2038);
  physics_student[0]->setEnrollYear(2024);
  physics_student[0]->setConcentration("Earth and Planetary Physics");

  physics_student.push_back(new Physics_Student);
  physics_student[1]->setFirstName("Chicken");
  physics_student[1]->setLastName("Little");
  physics_student[1]->setGradSemester("Fall");
  physics_student[1]->setEnrollSem("Fall");
  physics_student[1]->setGradStatus("Graduate");
  physics_student[1]->setGPA(3.5);
  physics_student[1]->setGradYear(2026);
  physics_student[1]->setEnrollYear(2024);
  physics_student[1]->setConcentration("Earth and Planetary Physics");
  
  physics_student.push_back(new Physics_Student);
  physics_student[2]->setFirstName("Goofy");
  physics_student[2]->setLastName("Goof");
  physics_student[2]->setGradSemester("Spring");
  physics_student[2]->setEnrollSem("Spring");
  physics_student[2]->setGradStatus("Undergraduate");
  physics_student[2]->setGPA(6.0);
  physics_student[2]->setGradYear(2044);
  physics_student[2]->setEnrollYear(2024);
  physics_student[2]->setConcentration("Earth and Planetary Physics");

  physics_student.push_back(new Physics_Student);
  physics_student[3]->setFirstName("Sonic");
  physics_student[3]->setLastName("The Hedgehog");
  physics_student[3]->setGradSemester("Spring");
  physics_student[3]->setEnrollSem("Fall");
  physics_student[3]->setGradStatus("Undergraduate");
  physics_student[3]->setGPA(4.3);
  physics_student[3]->setGradYear(2030);
  physics_student[3]->setEnrollYear(2026);
  physics_student[3]->setConcentration("Biophysics");

  physics_student.push_back(new Physics_Student);
  physics_student[4]->setFirstName("Bugs");
  physics_student[4]->setLastName("Bunny");
  physics_student[4]->setGradSemester("Fall");
  physics_student[4]->setEnrollSem("Spring");
  physics_student[4]->setGradStatus("Graduate");
  physics_student[4]->setGPA(9.0);
  physics_student[4]->setGradYear(2024);
  physics_student[4]->setEnrollYear(2024);
  physics_student[4]->setConcentration("Biophysics");

  cout << "--------------------- Art Students --------------------" << endl;

  for(int i = 0; i < 5; i++){
    cout << art_student[i]->getFirstName() << endl;
    cout << art_student[i]->getLastName() << endl;
    cout << art_student[i]->getGradSemester() << endl;
    cout << art_student[i]->getEnrollSem() << endl;
    cout << art_student[i]->getGradStatus() << endl;
    cout << art_student[i]->getGPA() << endl;
    cout << art_student[i]->getGradYear() << endl;
    cout << art_student[i]->getEnrollYear() << endl;
    cout << art_student[i]->getEmphasis() << endl;
  }

  cout << "--------------------- Physics Students --------------------" << endl;

  for(int i = 0; i < 5; i++){
    cout << physics_student[i]->getFirstName() << endl;
    cout << physics_student[i]->getLastName() << endl;
    cout << physics_student[i]->getGradSemester() << endl;
    cout << physics_student[i]->getEnrollSem() << endl;
    cout << physics_student[i]->getGradStatus() << endl;
    cout << physics_student[i]->getGPA() << endl;
    cout << physics_student[i]->getGradYear() << endl;
    cout << physics_student[i]->getEnrollYear() << endl;
    cout << physics_student[i]->getConcentration() << endl;
  }

  file << "--------------------- Art Students --------------------" << endl;

  for(int i = 0; i < 5; i++){
    file << art_student[i]->getFirstName() << endl;
    file << art_student[i]->getLastName() << endl;
    file << art_student[i]->getGradSemester() << endl;
    file << art_student[i]->getEnrollSem() << endl;
    file << art_student[i]->getGradStatus() << endl;
    file << art_student[i]->getGPA() << endl;
    file << art_student[i]->getGradYear() << endl;
    file << art_student[i]->getEnrollYear() << endl;
    file << art_student[i]->getEmphasis() << endl;
  }

  file << "--------------------- Physics Students --------------------" << endl;

  for(int i = 0; i < 5; i++){
    file << physics_student[i]->getFirstName() << endl;
    file << physics_student[i]->getLastName() << endl;
    file << physics_student[i]->getGradSemester() << endl;
    file << physics_student[i]->getEnrollSem() << endl;
    file << physics_student[i]->getGradStatus() << endl;
    file << physics_student[i]->getGPA() << endl;
    file << physics_student[i]->getGradYear() << endl;
    file << physics_student[i]->getEnrollYear() << endl;
    file << physics_student[i]->getConcentration() << endl;
  }
}
