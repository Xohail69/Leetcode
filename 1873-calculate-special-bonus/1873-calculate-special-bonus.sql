# Write your MySQL query statement below

# General Syntax for writing If statement in Mysql is Following

# IF(condition, value_if_true, value_if_false)


# SELECT employee_id , if(employee_id%2 !=0 AND name NOT LIKE 'M%' , salary , 0 ) AS bonus
# FROM Employees order by employee_id ;


# Using Case 
SELECT employee_id, 
    CASE 
    WHEN employee_id%2=1 AND name NOT LIKE 'M%' THEN salary 
    ELSE 0 
    END 
AS bonus FROM Employees order by employee_id ;
