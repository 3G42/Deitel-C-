#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include<string>
using std::string;
using std::getline;

class GradeBook
{
public:
    GradeBook(string name)
    {
        setCourseName(name);
    }
    void setCourseName (string name)
    {
        courseName = name;
    }
    string getCourseName()
    {
        return courseName;
    }
    void displayMessage()
    {
        cout << " Bem vindo ao Livro de Notas de " << getCourseName() << endl;
    }
private:
    string courseName;
};

int main()
{
    GradeBook gradeBook1("Matematica");
    GradeBook gradeBook2("Portugues");

    string nameOfCourse;

    cout << "gradeBook1 criada para o curso " << gradeBook1.getCourseName()
         << "\n gradeBook2 criada para o curso " << gradeBook2.getCourseName()
         << endl;

    return 0;
}
