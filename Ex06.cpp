#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

struct Student{
    int id;
    double math, physics, english,mean;
    Student (double _id, double _math, double _physics, double _english){
        id=_id;
        math=_math;
        physics=_physics;
        english=_english;
        mean=(math+physics+english)/3.0;
    }
};

bool isValid(double score){
    return score>=0 && score<=10;
}

bool compareMath(Student &a, Student &b){
    return a.math>b.math;
}

bool compareEng(Student &a, Student &b){
    return a.english>b.english;
}

bool compareMean(Student &a, Student &b){
    return a.mean>b.mean;
}

int main(){
    int n; cin>>n;
    vector<Student> students;
    for(int i=0; i<n; i++){
        double math, physics, english;
        cin>>math>>physics>>english;
        if(!isValid(math) || !isValid(physics) || !isValid(english)){
            cout<<"invalid\n";
            return 0;
        }
        students.push_back(Student(i+1, math, physics, english));
    }
    sort(students.begin(), students.end(), compareMath);
    cout<<"Theo diem mon Toan:\n";
    cout<<"SV Toan Ly Anh\n";
    for(auto s:students){
        cout<<s.id<<" "<<fixed<<setprecision(1)<<s.math<<" "<<s.physics<<" "<<s.english<<endl;
    }
    cout<<endl;
    
    sort(students.begin(), students.end(), compareEng);
    cout<<"Theo diem mon Anh:\n";
    cout<<"SV Toan Ly Anh\n";
    for(auto s:students){
        cout<<s.id<<" "<<fixed<<setprecision(1)<<s.math<<" "<<s.physics<<" "<<s.english<<endl;
    }
    cout<<endl;


    sort(students.begin(), students.end(), compareMean);
    cout<<"Theo diem trung binh:\n";
    cout<<"SV TB Toan Ly Anh\n";
    for(auto s:students){
        cout<<s.id<<" "<<fixed<<setprecision(1)<<s.mean<<" "<<s.math<<" "<<s.physics<<" "<<s.english<<endl;
    }
}
