SHOW DATABASES;
CREATE DATABASE clg;
USE clg;
SET SQL_SAFE_UPDATES = 0;

CREATE TABLE Course_data (
    Course_Id INT NOT NULL PRIMARY KEY,
    Course_name VARCHAR(50)
);

CREATE TABLE Student_data (
    StudentId INT NOT NULL PRIMARY KEY,
    Name VARCHAR(50),
    Email VARCHAR(50),
    Phone VARCHAR(15),
    CourseId INT NOT NULL,
    FOREIGN KEY (CourseId) REFERENCES Course_data(Course_Id)
);

INSERT INTO Course_data(Course_Id,Course_name)
VALUES
(1,"DataScience"),
(2,"AI"),
(3,"DataEngineering"),
(4,"Dsa"),
(5,"Backend"),
(6,"Frontend"),
(7,"Java");

Select * FROM Course_data;
Select * FROM Student_data;


INSERT INTO Student_data (StudentId, Name, Email, Phone, CourseId) 
VALUES 
  (1, "James", "james.smith@gmail.com", "5550141", 1),
  (2, "Oliver", "oliver.brown@gmail.com", "5550172", 2),
  (3, "Charlotte", "charlotte.taylor@gmail.com", "555193", 3),
  (4, "William", "william.johnson@gmail.com", "5550124", 4),
  (5, "Emma", "emma.wilson@gmail.com", "5550155", 5),
  (6, "Amelia", "amelia.davis@gmail.com", "5550186", 6),
  (7, "Henry", "henry.evans@gmail.com", "555-0167", 7);
  
  
-- 1. Create Instructor_data Table
CREATE TABLE Instructor_data (	
    InstructorId INT NOT NULL PRIMARY KEY,
    InstructorName VARCHAR(50) NOT NULL,
    Email VARCHAR(50),
    CourseId INT,
    FOREIGN KEY (CourseId) REFERENCES Course_data(Course_Id)
    ON DELETE SET NULL
    ON UPDATE CASCADE
);

-- 2. Create Enrollment_data Table
CREATE TABLE Enrollment_data (
    EnrollmentId INT NOT NULL PRIMARY KEY,
    StudentId INT NOT NULL,
    CourseId INT NOT NULL,
    EnrollmentDate DATE NOT NULL,
    Grade VARCHAR(5),
    FOREIGN KEY (StudentId) REFERENCES Student_data(StudentId)
    ON DELETE CASCADE
    ON UPDATE CASCADE,
    FOREIGN KEY (CourseId) REFERENCES Course_data(Course_Id)
    ON DELETE CASCADE
    ON UPDATE CASCADE
);

-- 3. Insert Data into Instructor_data
INSERT INTO Instructor_data (InstructorId, InstructorName, Email, CourseId)
VALUES
    (101, 'Dr. Aris Thorne', 'athorne@clg.edu', 1),
    (102, 'Prof. Elena Rostova', 'erostova@clg.edu', 2),
    (103, 'Dr. Marcus Vance', 'mvance@clg.edu', 3),
    (104, 'Prof. Sarah Lin', 'slin@clg.edu', 4),
    (105, 'Dr. David Miller', 'dmiller@clg.edu', 5);

-- 4. Insert Data into Enrollment_data
INSERT INTO Enrollment_data (EnrollmentId, StudentId, CourseId, EnrollmentDate, Grade)
VALUES
    (1, 1, 1, '2026-01-15', 'A'),
    (2, 1, 2, '2026-01-16', 'B+'),
    (3, 2, 2, '2026-01-15', 'A+'),
    (4, 3, 3, '2026-01-17', 'A'),
    (5, 4, 4, '2026-01-18', 'B'),
    (6, 5, 5, '2026-01-19', 'A+'),
    (7, 6, 6, '2026-01-20', 'B');

-- Verification Queries
SELECT * FROM Instructor_data;
SELECT * FROM Enrollment_data;


-- Modifying Table

ALTER TABLE Student_data
ADD COLUMN CourseDuration INT; 

-- Update table

UPDATE Student_data 
SET CourseDuration = 5 
WHERE CourseDuration IS NULL;


UPDATE Student_data 
SET CourseDuration = 3 
WHERE CourseId = 2;

-- CASCADE 

ALTER TABLE Student_data 
ADD CONSTRAINT fk_student_course 
FOREIGN KEY (CourseId) REFERENCES Course_data(Course_Id) 
ON DELETE CASCADE 
ON UPDATE CASCADE;

-- DELETING ROW

DELETE FROM Student_data 
WHERE StudentId = 7;

SELECT * FROM Student_data 
WHERE StudentId <= 3;

SELECT  Phone FROM Student_data 
WHERE Email = "charlotte.taylor@gmail.com" ;

SELECT * FROM Student_data 
LIMIT 3;

-- Joins

-- Cartesian Product

SELECT 
    Student_data.Name, 
    Course_data.Course_name
FROM Student_data, Course_data;

-- Cross Join

SELECT 
    Student_data.Name, 
    Course_data.Course_name
FROM Student_data
CROSS JOIN Course_data;

-- Equijoin

SELECT 
    Student_data.StudentId, 
    Student_data.Name, 
    Course_data.Course_name
FROM Student_data, Course_data
WHERE Student_data.CourseId = Course_data.Course_Id;

-- Inner Join
SELECT 
    s.StudentId, 
    s.Name, 
    c.Course_name
FROM Student_data s
INNER JOIN Course_data c ON s.CourseId = c.Course_Id;

-- Non-Equijoin

SELECT 
    s.Name AS StudentName, 
    s.CourseId AS StudentCourseId, 
    c.Course_Id AS CompareCourseId, 
    c.Course_name
FROM Student_data s
INNER JOIN Course_data c ON s.CourseId > c.Course_Id;

-- Natural Join

ALTER TABLE Course_data RENAME COLUMN Course_Id TO CourseId;
SELECT *
FROM Student_data
NATURAL JOIN Course_data;
ALTER TABLE Course_data RENAME COLUMN CourseId TO Course_Id;
