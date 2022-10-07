# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below

# https://leetcode.com/problems/delete-duplicate-emails/discuss/2099682/SQL-or-3-Easy-Sols-or-Well-Explained-or-JOINor-MIN-%2B-GROUP




DELETE P1
FROM Person P1 , Person P2 
WHERE P1.email = P2.email AND P1.id > P2.id ;