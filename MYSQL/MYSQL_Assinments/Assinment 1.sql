show databases;
create database FBS_A ;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
use FBS_A;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- que 2
create table Country(country_id int,Country_name varchar(30),region_id int(11));

desc COuntry;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- que 3
create table Jobs(
job_id int primary key auto_increment,
job_title varchar(50) not null,
min_salary float(10,2),
max_salary float(10,2) check(max_salary<=25000)
);
Alter table Jobs 
modify column max_salary float(10,2) constraint check_max_salary check(max_salary<=25000);



show create table Jobs;

desc jobs;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- que 4
Create table job_hisrty(
employee_id int,
start_date Date,
end_date Date,
job_id int,
department_id int
);
desc job_hisrty;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- que 5
alter table country 
rename countries;
alter table countries 
add primary key(country_id);
-- ------------------
desc countries;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- que6
alter table Jobs
modify column job_title  varchar(50) default "Blank",
modify column min_salary double(10,2) check(min_salary >=8000);

desc jobs;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que 7
create table department(
Department_id Decimal(4,0) default 0,
department_Name varchar(30),
manager_id decimal(6,0) default 0,
Location_id decimal(4,0),
primary key(department_id,manager_id)
);
desc department;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- que 8
create table employee(
employee_id int primary key,
firt_name varchar(50),
last_name varchar(50),
email varchar(50) unique,
phone_number long,
hire_date Date,
job_id int,
salary double(10,2),
Commission double(10,2),
manager_id Decimal(6,0),
department_id Decimal(4,0),
CONSTRAINT fk_dept_mgr
FOREIGN KEY (department_id, manager_id)REFERENCES department(department_id,manager_id)
);



desc employee;
drop table employee;


alter table employee
drop index fk_dept_mgr; -- geting error because of in employee table prasent foreign key to refers department tables so without delectng foreing key in employee
-- not delete the index of foreing key 

SHOW INDEX FROM employee;









