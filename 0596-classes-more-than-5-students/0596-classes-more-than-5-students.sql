# Write your MySQL query statement below

SELECT CLASS
FROM courses
GROUP BY class
HAVING COUNT(STUDENT)>=5