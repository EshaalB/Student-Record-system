# 📚 Student Grades Analyzer

A **C++ console application** that reads student grades from a file, calculates individual and subject-wise averages, identifies top-performing students and weakest subjects, and outputs the results to multiple report files.

---

## 🚀 Features

- 📥 **Reads Data from File**  
  Parses `grades.txt` containing student names and marks for:
  - **Mathematics**
  - **Computer**
  - **ICT**

- 📊 **Calculates Averages**
  - Per student average across all subjects
  - Per subject average across all students

- 🏆 **Top Performer Analysis**
  - Identifies student with **highest average**
  - Highlights **subject with lowest average**

- 📤 **Writes Analysis to Files**
  - `analysis.txt`: Full grade breakdown and averages
  - `student_averages.txt`: Per-student average summary
  - `subject_averages.txt`: Subject-wise average summary

---

 
 
---

## 🧪 Sample Input Format (`grades.txt`)

-John Doe,75,88,92
-Jane Smith,60,77,84
-Ali Khan,95,90,89



*(Each line: `Name,Math,Computer,ICT`)*

---

## 🛠️ How It Works

- `readGrades()` reads and parses the student data.
- `displayGrades()` shows raw marks for all students.
- `calculateAverages()` computes both student and subject averages.
- `displayAverages()` prints all averages to console.
- `findHighestAverageStudent()` identifies top performer.
- `findLowestAverageSubject()` finds the weakest subject overall.
- `writeAnalysisToFile()` generates a detailed report.
- `writeAveragesToFile()` writes separate files for student and subject averages.

---

## 💻 How to Compile & Run

### 🔧 Compile

```bash
g++ -o grades-analyzer main.cpp
