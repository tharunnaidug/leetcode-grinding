/* Write your PL/SQL query statement below */

select e1.name 
from
    Employee e1 

where id in (select managerId from Employee group by managerId having count(id)>4);