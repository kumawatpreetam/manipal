SHOW DATABASES;

CREATE DATABASE clg;

USE clg;

/*
    3. 
DDL
• Creating Tables • Using Data Types  • Modifying a Table

*/

CREATE TABLE studentData (
    student_Id INT NOT NULL PRIMARY KEY,
    email VARCHAR(50),
    address VARCHAR(100)
);

SHOW TABLES;

SELECT * FROM studentData;

ALTER TABLE studentData 
ADD COLUMN birth_DATE VARCHAR(50),
ADD	COLUMN student_Name VARCHAR(10);

ALTER TABLE studentData 
MODIFY COLUMN student_Name VARCHAR(50);

ALTER TABLE studentData 
MODIFY COLUMN birth_Date DATE;

/*
5.
DML
• INSERT Statements
• Updating Column Values and Deleting Rows
• DEFAULT Values, MERGE, and Multi-Table Inserts
*/


INSERT INTO studentData (student_Id, student_Name, birth_Date)
VALUES
(1, 'Alice', '2006-10-30'),
(2, 'John', '2013-08-12'),
(3, 'Jack', '2012-06-08'),
(4, 'Same', '1998-06-09'),
(5, 'Harry', '1999-06-10'),
(6, 'Alice', '2016-01-01');

UPDATE  studentData
SET email = "john@gmail.com"
WHERE student_Id = 1;

SELECT  
address
FROM 
studentData
WHERE address IS NULL;


UPDATE  studentData
SET address = "unknown"
WHERE address IS NULL;
                
                
