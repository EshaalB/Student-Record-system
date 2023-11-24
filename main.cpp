//#include <iostream>
//#include <fstream>
//#include <iomanip>
//using namespace std;
//void readGrades( char studentName[30][20], int maths[30], int computer[30], int ICT[30],int &studentNo) {
//    ifstream gradesinput("grades.txt");
//    if (!gradesinput) {
//        cerr << "Error! Please create a file first.";
//        return;
//    }
//    studentNo = 0;
//    //To add spaces 
//    while (gradesinput.getline(studentName[studentNo], 30, ',') &&
//        gradesinput.getline(maths[studentNo], 30, ',') &&
//        gradesinput.getline(computer[studentNo], 30, ',') &&
//        gradesinput >> ICT[studentNo]) {
//        studentNo++;
//        gradesinput.ignore();
//    }
//    gradesinput.close();
//}
//
//void displayGrades(int studentNo, const char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], const int grades[MAX_STUDENTS][MAX_SUBJECTS]) {
//    std::cout << "Student Grades:" << std::endl;
//    for (int i = 0; i < studentNo; ++i) {
//        std::cout << studentNames[i] << ": ";
//        for (int j = 0; j < MAX_SUBJECTS; ++j) {
//            std::cout << grades[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//    std::cout << std::endl;
//}
//
//void calculateAverages(int studentNo, const int grades[MAX_STUDENTS][MAX_SUBJECTS], double studentAverages[MAX_STUDENTS], double subjectAverages[MAX_SUBJECTS]) {
//    for (int i = 0; i < studentNo; ++i) {
//        double sum = 0;
//        for (int j = 0; j < MAX_SUBJECTS; ++j) {
//            sum += grades[i][j];
//            subjectAverages[j] += grades[i][j];
//        }
//        studentAverages[i] = sum / MAX_SUBJECTS;
//    }
//
//    for (int j = 0; j < MAX_SUBJECTS; ++j) {
//        subjectAverages[j] /= studentNo;
//    }
//}
//
//void displayAverages(int studentNo, const char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], const double studentAverages[MAX_STUDENTS], const double subjectAverages[MAX_SUBJECTS]) {
//    std::cout << "Average Grades:" << std::endl;
//
//    for (int i = 0; i < studentNo; ++i) {
//        std::cout << studentNames[i] << ": " << std::fixed << std::setprecision(2) << studentAverages[i] << std::endl;
//    }
//
//    std::cout << std::endl << "Subject Averages: ";
//    for (int j = 0; j < MAX_SUBJECTS; ++j) {
//        std::cout << std::fixed << std::setprecision(2) << subjectAverages[j] << " ";
//    }
//
//    std::cout << std::endl << std::endl;
//}
//
//void findHighestAverageStudent(int studentNo, const char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], const double studentAverages[MAX_STUDENTS]) {
//    double highestAverage = 0.0;
//    int highestAverageIndex = 0;
//
//    for (int i = 0; i < studentNo; ++i) {
//        if (studentAverages[i] > highestAverage) {
//            highestAverage = studentAverages[i];
//            highestAverageIndex = i;
//        }
//    }
//
//    std::cout << "Student with the Highest Average: " << studentNames[highestAverageIndex] << " - " << std::fixed << std::setprecision(2) << highestAverage << std::endl;
//}
//
//void findLowestAverageSubject(const double subjectAverages[MAX_SUBJECTS]) {
//    double lowestAverage = subjectAverages[0];
//    int lowestAverageIndex = 0;
//
//    for (int j = 1; j < MAX_SUBJECTS; ++j) {
//        if (subjectAverages[j] < lowestAverage) {
//            lowestAverage = subjectAverages[j];
//            lowestAverageIndex = j;
//        }
//    }
//
//    std::cout << "Subject with the Lowest Average: Subject " << lowestAverageIndex + 1 << " - " << std::fixed << std::setprecision(2) << lowestAverage << std::endl;
//}
//
//void writeAnalysisToFile(int studentNo, const char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], const int grades[MAX_STUDENTS][MAX_SUBJECTS], const double studentAverages[MAX_STUDENTS], const double subjectAverages[MAX_SUBJECTS]) {
//    std::ofstream output("analysis.txt");
//    if (!output.is_open()) {
//        std::cerr << "Error! Unable to create analysis.txt." << std::endl;
//        exit(1);
//    }
//
//    output << "Student Grades and Averages:" << std::endl;
//    for (int i = 0; i < studentNo; ++i) {
//        output << studentNames[i] << ": ";
//        for (int j = 0; j < MAX_SUBJECTS; ++j) {
//            output << grades[i][j] << " ";
//        }
//        output << " Average: " << std::fixed << std::setprecision(2) << studentAverages[i] << std::endl;
//    }
//
//    output << std::endl << "Subject Averages: ";
//    for (int j = 0; j < MAX_SUBJECTS; ++j) {
//        output << std::fixed << std::setprecision(2) << subjectAverages[j] << " ";
//    }
//
//    output.close();
//}
//
//void writeAveragesToFile(int studentNo, const char studentNames[MAX_STUDENTS][MAX_NAME_LENGTH], const double studentAverages[MAX_STUDENTS], const double subjectAverages[MAX_SUBJECTS]) {
//    std::ofstream studentAvgFile("student_averages.txt");
//    std::ofstream subjectAvgFile("subject_averages.txt");
//
//    if (!studentAvgFile.is_open() || !subjectAvgFile.is_open()) {
//        std::cerr << "Error opening files: student_averages.txt or subject_averages.txt" << std::endl;
//        exit(1);
//    }
//
//    for (int i = 0; i < studentNo; ++i) {
//        studentAvgFile << studentNames[i] << " Average: " << std::fixed << std::setprecision(2) << studentAverages[i] << std::endl;
//    }
//
//    subjectAvgFile << "Subject Averages: ";
//    for (int j = 0; j < MAX_SUBJECTS; ++j) {
//        subjectAvgFile << std::fixed << std::setprecision(2) << subjectAverages[j] << " ";
//    }
//
//    studentAvgFile.close();
//    subjectAvgFile.close();
//}
//
//int main() {
//    int studentNo = 0;
//    char studentNames[30][20];
//    int maths[30];
//    int computer[30];
//    int ICT[30];
//    double studentAverages[30] = { 0 };
//    double subjectAverages[30] = { 0 };
//
//    readGrades(studentNo, studentNames, maths,computer,ICT);
//    displayGrades(studentNo, studentNames, grades);
//
//    calculateAverages(studentNo, grades, studentAverages, subjectAverages);
//    displayAverages(studentNo, studentNames, studentAverages, subjectAverages);
//
//    findHighestAverageStudent(studentNo, studentNames, studentAverages);
//    findLowestAverageSubject(subjectAverages);
//
//    writeAnalysisToFile(studentNo, studentNames, grades, studentAverages, subjectAverages);
//    writeAveragesToFile(studentNo, studentNames, studentAverages, subjectAverages);
//
//    std::cout << "Results have been written to analysis.txt, student_averages.txt, and subject_averages.txt." << std::endl;
//
//    return 0;
//}
