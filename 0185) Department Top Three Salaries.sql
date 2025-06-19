# Write your MySQL query statement below
select
    d.name department,
    e1.name employee,
    e1.salary salary
from
    employee e1
    join employee e2
    join department d on e1.departmentid = e2.departmentid
    and e1.salary <= e2.salary
    and d.id = e2.departmentid
group by
    1, 2, 3
having
    count(distinct(e2.salary)) <= 3
