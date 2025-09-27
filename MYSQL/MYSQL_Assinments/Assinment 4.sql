-- 1. Write a query to display the names (first_name, last_name) using alias name “First Name", "Last Name.
  Select first_name as"First Name",last_Name as 'Last Name' from employees;
  Select concat(first_name,' ',last_name) as 'FUll Name' from employees;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 2. Write a query to get unique department ID from employee table.
select distinct department_id from employees;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 3. Write a query to get all employee details from the employee table order by first name, descending
select * from employees order by FIRST_NAME desc;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 4. Write a query to get the names (first_name, last_name), salary, PF of all the employees (PF is calculated as 15% of salary).
Select first_name,LAST_NAME,salary,salary*0.15 as"PF" from employees;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 5. Write a query to get the employee ID, names (first_name, last_name), salary in ascending order of salary.
select Employee_id,concat(first_Name,' ',Last_Name) as"Full Name",Salary from employees order by salary;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 6. Write a query to get the total salaries payable to employees.
select sum(salary)as "Total salary" from employees;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 7. Write a query to get the maximum and minimum salary from employees table.
select min(Salary)"min_slary",max(Salary)"Max_Salary" from employees;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 8. Write a query to get the average salary and number of employees in the employees table.
select avg(Salary)"AVG_slary",Count(*)"Total_employees" from employees;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 9. Write a query to get the number of employees working with the company.
select count(*) from employees;
select count(department_ID) from employees;-- this means whose are woking in deparment in present in commapy 
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 10.Write a query to get the number of jobs available in the employees table
Select count(job_Id) from employees;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 11.Write a query to select first 10 records from a table.
Select * from employees limit 10;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 12.Write a query to display the name (first_name, last_name) and salary for all employees whose salary is not in the  range $10,000 through $15,000
SELECT first_name, last_name, salary
FROM employees
WHERE salary NOT BETWEEN 10000 AND 15000;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 13.Write a query to display the name (first_name, last_name) and department ID of all employees in departments 30 or 100 in ascending order.
 Select concat(first_name,' ',last_name) as 'FUll Name',DEPARTMENT_ID from employees where DEPARTMENT_ID in(30,100) order by department_Id;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 14.Write a query to display the name (first_name, last_name) and salary for all employees whose salary is not in the range $10,000 through $15,000
-- and are in department 30 or 100.
 Select concat(first_name,' ',last_name) as 'FUll Name',DEPARTMENT_ID ,Salary
 from employees 
 where DEPARTMENT_ID in(30,10)  && salary NOT BETWEEN 10000 AND 15000 
 order by department_Id;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 15.Write a query to display the name (first_name, last_name) and hire date for all employees who were hired in 1987.
 Select concat(first_name,' ',last_name) as 'FUll Name',HIRE_DATE
 from employees
 where year(hire_Date)="1987";
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 16.Write a query to display the first_name of all employees who have both "b" and "c" in their first name
Select first_name from employees where First_name like "%b%" && first_name like "%c%";
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 17.Write a query to display the last name, job, and salary for all employees whose job is that of a Programmer or a Shipping Clerk,
-- and whose salary is not equal to $4,500, $10,000, or $15,000.
SELECT last_name, job_id, salary
FROM employees
WHERE job_id IN ('IT_PROG', 'Shipping Clerk')
 AND salary NOT IN (4500, 10000, 15000);
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 18.Write a query to display the last name of employees whose names have exactly 6 characters.
select last_name from employees where length(last_name)=6;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 19.Write a query to display the last name of employees having 'e' as the third character.
select last_name from employees where last_name like"__e%";
select * from employees;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 20.Write a query to display the jobs/designations available in the employees table.
Select * from employees where JOB_ID is not null;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- 21.Write a query to select all record from employees where last name in 'BLAKE', 'SCOTT', 'KING' and 'FORD'
Select * from employees where last_name in('BLAKE', 'SCOTT', 'KING','Hunold');