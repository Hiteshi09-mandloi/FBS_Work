use fbs_a;

CREATE TABLE EMPLOYEES (
    EMPLOYEE_ID     INT PRIMARY KEY,
    FIRST_NAME      VARCHAR(20),
    LAST_NAME       VARCHAR(25) NOT NULL,
    EMAIL           VARCHAR(50) UNIQUE NOT NULL,
    PHONE_NUMBER    VARCHAR(20),
    HIRE_DATE       DATE NOT NULL,
    JOB_ID          VARCHAR(10) NOT NULL,
    SALARY          DECIMAL(10,2),
    COMMISSION_PCT  DECIMAL(5,2),
    MANAGER_ID      INT,
    DEPARTMENT_ID   INT
);
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que 1:-Write a SQL statement to insert a record as follows Employees
INSERT INTO EMPLOYEES
(EMPLOYEE_ID, FIRST_NAME, LAST_NAME, EMAIL, PHONE_NUMBER, HIRE_DATE,
 JOB_ID, SALARY, COMMISSION_PCT, MANAGER_ID, DEPARTMENT_ID)
VALUES
(100, 'Steven', 'King', 'SKING', '515.123.4567', '1987-06-17', 'AD_PRES', 24000.00, 0.00, 200, 10),
(101, 'Neena', 'Kochhar', 'NKOCHHAR', '515.123.4568', '1987-06-18', 'AD_VP', 17000.00, 0.00, 200, 10),
(102, 'Lex', 'De Haan', 'LDEHAAN', '515.123.4569', '1987-06-19', 'AD_VP', 17000.00, 0.00, 200, 10),
(103, 'Alexander', 'Hunold', 'AHUNOLD', '590.423.4567', '1987-06-20', 'IT_PROG', 9000.00, 0.00, 103, 60),
(104, 'Bruce', 'Ernst', 'BERNST', '590.423.4568', '1987-06-21', 'IT_PROG', 6000.00, 0.00, 103, 60),
(105, 'David', 'Austin', 'DAUSTIN', '590.423.4569', '1987-06-22', 'IT_PROG', 4800.00, 0.00, 103, 60),
(106, 'Valli', 'Pataballa', 'VPATABAL', '590.423.4560', '1987-06-23', 'IT_PROG', 4800.00, 0.00, 103, 60),
(107, 'Diana', 'Lorentz', 'DLORENTZ', '590.423.5567', '1987-06-24', 'IT_PROG', 4200.00, 0.00, 114, 30),
(108, 'Nancy', 'Greenberg', 'NGREENBE', '515.124.4569', '1987-06-25', 'SA_MAN', 12000.00, 0.00, 145, 80),
(109, 'Daniel', 'Faviet', 'DFAVIET', '515.124.4169', '1987-06-26', 'SA_MAN', 9000.00, 0.00, 145, 80);
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que 2:-Write a SQL statement to insert 3 rows by a single insert statement.
INSERT INTO DEPARTMENT (DEPARTMENT_ID, DEPARTMENT_NAME, MANAGER_ID, LOCATION_ID)
VALUES
(10, 'Administration', 200, 1700),
(20, 'Marketing', 201, 1800),
(30, 'Purchasing', 114, 1700),
(40, 'Human Resources', 203, 2400),
(50, 'Shipping', 121, 1500),
(60, 'IT', 103, 1400),
(70, 'Public Relations', 204, 2700),
(80, 'Sales', 145, 2500);
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que:-3. Write a SQL statement to insert one row in jobs table to ensure that no duplicate value will be entered in the job_id column.
alter table jobs
modify column Job_ID varchar(50);

ALTER TABLE JOBS DROP CHECK jobs_chk_2;
ALTER TABLE JOBS DROP CHECK check_max_salary;

-- then add correct one:
ALTER TABLE JOBS ADD CONSTRAINT check_max_salary 
CHECK (MAX_SALARY >= MIN_SALARY);

INSERT INTO JOBS (JOB_ID, JOB_TITLE, MIN_SALARY, MAX_SALARY)
VALUES
('AD_PRES', 'President', 20000, 40000),
('AD_VP', 'Administration Vice President', 15000, 30000),
('AD_ASST', 'Administration Assistant', 3000, 6000),
('FI_MGR', 'Finance Manager', 8200, 16000),
('FI_ACCOUNT', 'Accountant', 4200, 9000),
('AC_MGR', 'Accounting Manager', 8200, 16000),
('AC_ACCOUNT', 'Public Accountant', 4200, 9000),
('SA_MAN', 'Sales Manager', 10000, 20000);
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
select * from jobs;
select * from books;
select * from employees;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

SET SQL_SAFE_UPDATES = 0;

-- que: 4-Write SQL statement to increment salary of each emp by 10%.
update employees set salary=salary+salary*0.10;
select * from employees;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- 5. Write a SQL statement to change the email column of employees table with  'not available' for those employees whose department_id is 80 and gets a commission is less than .20%
UPDATE employees SET email = 'not available'
WHERE department_id = 80
AND commission_pct < 0.20;-- getting an error becasue email column only contain qniue values

UPDATE employees SET email = null
WHERE department_id = 80
AND commission_pct < 0.20;

alter table employees
modify column email varchar(50); -- removenot null contains

desc employees;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que:-6. Write a SQL statement to change the email column of employees table with 'not available' 
-- for those employees who belongs to the 'Purchasing' department.
select * from employees;
select * from department;

update employees
 set email='not availabe'
where department_ID=(
select Department_Id from department where department_Name="purchasing"
) ;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que:-7.Write a SQL statement to change the email and commission_pct column of employees table with 'not available'and 0.10 for all employees.
update employees set email='not availabe' ,COMMISSION_PCT=0.10;

show create table employees;


alter table employees drop contains unique;

SHOW INDEX FROM employees;

alter table employees drop contains Email;

alter table employees drop index Email;

update employees set email='not availabe' ,COMMISSION_PCT=0.10;

select * from employees;




 