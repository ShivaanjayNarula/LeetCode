# Write your MySQL query statement below
SELECT e.Name as Employee
FROM EMPLOYEE e , EMPLOYEE m
WHERE e.ManagerId = m.id AND e.Salary > m.Salary
