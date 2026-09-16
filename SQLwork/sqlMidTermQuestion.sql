SHOW DATABASES;
USE clg;

-- Creation of First Table 
CREATE TABLE Mstudent(
RollNo INT NOT NULL PRIMARY KEY, 
Name VARCHAR(50) NOT NULL,
Course VARCHAR(50) NOT NULL,
City VARCHAR(50),
Marks INT  
);

-- Creation of Second Table
CREATE TABLE Course(
CourseId INT PRIMARY KEY NOT NULL,
CourseName VARCHAR(50)NOT NULL,
Fee INT  
);

-- INSERT data in First Table
INSERT INTO Mstudent(RollNo,Name,Course,City,Marks)
VALUES
(101,"Amit","BCA","Delhi",78),
(102,"Neha","BCA","Jaipur",85),
(103,"Ravi","BCA","Delhi",67),
(104,"Pooja","BCA","Mumbai",91),
(105,"Karan","BCA","Jaipur",71),
(106,"Simran","BCA","Delhi",88);

-- INSERT data in Second Table
INSERT INTO Course(CourseId,CourseName,Fee)
VALUES
(1,"BCA",60000),
(2,"MCA",80000),
(3,"BSc",50000);


-- SHOW Table data
-- 1. Write a query to display all records from the STUDENT table.
SELECT* FROM Mstudent;
SELECT* FROM Course;

-- 2. Write a query to display only the Name and Marks of all students.
SELECT 
Name,Marks
FROM
Mstudent;

-- 3. Write a query to display students who belong to Delhi. 
SELECT *
FROM 
Mstudent
WHERE City = "Delhi";

-- 4. Write a query to display students who have scored more than 80 marks. 
SELECT *
FROM Mstudent
WHERE Marks > 80;

-- 5. Write a query to display students whose marks are between 70 and 85. 
/*
SELECT *
FROM Mstudent
WHERE Marks >= 70 || marks <= 85;
*/

SELECT *
FROM Mstudent
WHERE Marks BETWEEN 70 AND 85;

-- 6. Write a query to display students who belong to Delhi or Jaipur.
SELECT *
FROM Mstudent
WHERE City IN ('Delhi', 'Jaipur');

-- 7. Write a query to display students whose names start with 'A'. 
SELECT *
FROM Mstudent
WHERE Name LIKE "A%";

-- 8. Write a query to display student records in descending order of Marks.
SELECT * 
FROM Mstudent
ORDER BY Marks DESC;

-- 9. Write a query to display the distinct cities from the STUDENT table.

SELECT DISTINCT 
City FROM
 Mstudent;

-- 10. Write a query to display the highest, lowest, and average marks. 
SELECT 
MAX(Marks) AS High,
MIN(Marks) AS Low,
AVG(Marks) AS Average
FROM 
Mstudent;

-- 11. Write a query to find the number of students in each city. 
SELECT City, 
COUNT(*) AS Total_City
FROM 
Mstudent
GROUP BY City;

-- 12. Write a query to find the average marks obtained by students in each city.
SELECT City, 
AVG(Marks) AS Avg_In_Each_City
FROM 
Mstudent
GROUP BY City;

-- 13. Write a query to find the maximum marks obtained in each city.
SELECT City, 
MAX(Marks) AS Maximum_Marks_In_Each_City
FROM 
Mstudent
GROUP BY City;

-- 14. Write a query to find the minimum marks obtained in each city. 
SELECT City, 
MIN(Marks) AS Manimum_Marks_In_Each_City
FROM 
Mstudent
GROUP BY City;

-- 15. Write a query to calculate the total marks obtained by students from each city.
SELECT City,
SUM(Marks) AS Total_Marks_In_Each_City
FROM
Mstudent
GROUP BY City;

-- 16. Write a query to display the number of students in each city, but display only those cities having more than 2 students.
SELECT City, COUNT(*) AS Total_Students
FROM Mstudent
GROUP BY City
HAVING COUNT(*) > 2;

-- 17. Write a query to display the average marks of students in each city, but show only cities where the average marks are greater than 75. 
SELECT City,
AVG(Marks) AS Total_Marks
FROM
Mstudent
GROUP BY City
HAVING AVG(Marks) > 75;

-- 18. Write a query to find the highest marks in each city and arrange the result in descending order of highest marks. 
SELECT City, MAX(Marks) AS Highest_Marks
FROM Mstudent
GROUP BY City
ORDER BY Highest_Marks DESC;

-- 19. Write a query to count students from each city and display the result in descending order of student count. 
SELECT City, COUNT(*) AS Total_Students
FROM Mstudent
GROUP BY City
ORDER BY Total_Students DESC;


-- 20. Write a query to display cities having total marks greater than 200.
SELECT City, SUM(Marks) AS Total_Marks
FROM Mstudent
GROUP BY City
HAVING Total_Marks > 200;


-- 22. Write a query to find the average marks for each city where only students scoring more than 70 marks are considered. 
SELECT City, AVG(Marks) AS Average_Marks
FROM Mstudent
WHERE Marks > 70
GROUP BY City;

-- 23. Write a query to find the number of students in each city whose marks are greater than 75. 
SELECT City, COUNT(*) AS Total_Students
FROM Mstudent
WHERE Marks > 75
GROUP BY City;

-- 24. Write a query to display the cities where the maximum marks are greater than 80. 
SELECT City, MAX(Marks) AS Max_Marks
FROM Mstudent
GROUP BY City
HAVING MAX(Marks) > 80;

-- 25. Write a query to display each city along with its student count and average marks, sorted by average marks in descending order.
SELECT 
    City, 
    COUNT(*) AS Student_Count, 
    AVG(Marks) AS Average_Marks
FROM Mstudent
GROUP BY City
ORDER BY Average_Marks DESC;

-- 21. What is the difference between WHERE and HAVING? Give one SQL query demonstrating each. 
/*
### Definition & Core Concept

* **`WHERE` Clause:** Filters individual record rows from a database table **before** any grouping or aggregate functions are applied.
* **`HAVING` Clause:** Filters summarized data groups **after** the `GROUP BY` operation has already aggregated the rows.

---

### Key Theoretical Differences

* **Execution Order:**
* The `WHERE` clause executes early in the SQL pipeline, evaluating raw table rows prior to aggregation.
* The `HAVING` clause executes later in the pipeline, operating on the grouped results produced by `GROUP BY`.


* **Use of Aggregate Functions:**
* `WHERE` cannot be used with aggregate functions such as `SUM()`, `AVG()`, `COUNT()`, `MIN()`, or `MAX()`. Attempting to do so results in a syntax error.
* `HAVING` is specifically created to evaluate conditions containing aggregate functions.


* **Dependency on `GROUP BY`:**
* `WHERE` can be used in any `SELECT`, `UPDATE`, or `DELETE` statement, with or without a `GROUP BY` clause.
* `HAVING` requires a `GROUP BY` clause (or an implicit single-group aggregation) to filter summarized data sets.


* **Performance & Data Reduction:**
* Using `WHERE` is generally more efficient for row-level filtering because it reduces the number of records processed by subsequent grouping steps.
* Using `HAVING` carries an additional processing cost because all rows must first be grouped and aggregated before the condition can be evaluated.
*/