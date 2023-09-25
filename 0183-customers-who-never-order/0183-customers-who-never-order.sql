# Write your MySQL query statement below
SELECT c.name AS Customers
From customers c
left join orders o
ON c.id=o.customerId
where o.id IS NULL