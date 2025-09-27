
use FBS_A;

-- que 1:-Create the table Member, Books and Issue without any constraints as mentioned in the schema description above.
CREATE TABLE Lib_Member(
Member_id int primary key,
Member_name varchar(30),
Member_address varchar(50),
Acc_open_Date Date,
Memebership_type varchar(20),
Fes_paid int,
Max_Books_Allowed int,
Penalty_Amount int
);

CREATE table Books(
Book_No int ,
Book_Name varchar(50),
Auther_Name varchar(40),
Cost Decimal(7,2),
Category char(10)
);

CREATE TABLE Issue(
Lib_issue_id int,
Book_No int,
Member_id int,
Issue_Date Date,
Return_date date
);
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que2:-View the structure of the tables.
desc Issue;
desc Lib_member;
desc Books;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que3:-Drop the Member table
drop table lib_member;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que 4:-4) Create the table Member again as per the schema description with the following constraints.
            -- a. Member_Id – Primary Key
			-- b. Membership_type - ‘Lifetime’,’ Annual’, ‘Half Yearly’,’ Quarterly’
            
CREATE TABLE Lib_Member(
Member_id int primary key,
Member_name varchar(30) not null,
Member_address varchar(50),
Acc_open_Date Date,
Memebership_type varchar(20) not null,
Fes_paid int,
Max_Books_Allowed int,
Penalty_Amount int,
CONSTRAINT chk_membership_type 
CHECK (Memebership_type IN ('Lifetime','Annual','Half Yearly','Quarterly'))
);
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que5:-Modify the table Member increase the width of the member name to 30 characters.
Alter table lib_member
modify column member_name varchar(30) not null;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que 6:-Add a column named as Reference of Char(30) to Issue table.
ALTER TABLE Issue
add column References_ char(30);
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que 7:-Delete/Drop the column Reference from Issue.
ALTER TABLE Issue
DROP column References_ ;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que 8=>Rename the table Issue to Lib_Issue.
alter table Issue
rename Lib_Issue;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- que9:-Insert following data in table Member
insert into Lib_member
(Member_id,member_name,Member_address,Acc_open_Date,
Memebership_type,Fes_paid,Max_Books_Allowed,Penalty_Amount)
values(1,"Richa Sharma","Pune","10-12-05","lifeTime",25000,5,50),
(2,"Garima sen","Pune",CURDATE(),"Annual",1000,3,null);

select * from LIb_MEMBER;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- que 10
insert into Lib_member
(Member_id,member_name,Member_address,Acc_open_Date,
Memebership_type,Fes_paid,Max_Books_Allowed,Penalty_Amount)values
(3,"Richa Sharma","Pune","10-12-05","lifeTime",25000,5,50),
(4,"Garima sen","Pune","2025-07-23","Annual",1000,3,null),
(5,"Richa Sharma","Pune","10-12-05","lifeTime",25000,5,50),
(6,"Garima sen","Pune",CURDATE(),"Annual",1000,3,null),
(7,"Garima sen","Pune",CURDATE(),"Annual",1000,3,null);
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que 11:-Modify the column Member_name. Decrease the width of the member name to 20 characters. (If it does not allow state the reason for that)
ALTER TABLE lib_Member 
MODIFY Member_Name VARCHAR(20);
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que 12:-Try to insert a record with Max_Books_Allowed = 110, Observe the error that comes.
insert into Lib_member
(Member_id,member_name,Member_address,Acc_open_Date,
Memebership_type,Fes_paid,Max_Books_Allowed,Penalty_Amount)values
(8,"Richa Sharma","Pune","10-12-05","lifeTime",25000,110,50);
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que13:-Generate another table named Member101 using a Create command along with a simple SQL query on member table.

-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- que 14:-Add the constraints on columns max_books_allowed and penalty_amt as follows
    -- a. max_books_allowed < 100
	-- b. penalty_amt maximum 1000         Also give names to the constraints.
    alter table Lib_member 
    add constraint check(Max_Books_Allowed<100 and penalty_Amount>=1000);
    
    delete table from lib_member;
    -- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
    -- que15:-Drop the table books.
    drop table Books;
    -- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
    -- que16:-Create table Books again as per the schema description with the following constraints.
     -- a. Book_No – Primary Key
	-- b. Book_Name – Not Null
	-- c. Category – System, Fiction, Database, RDBMS, Others.
CREATE table Books(
Book_No int primary key,
Book_Name varchar(50) not null,
Auther_Name varchar(40),
Cost Decimal(7,2),
Category char(10) check(category in ("System","Fiction","Database","RDBMS","Others"))
);
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que17:-Insert data in Book table as follows
insert into Books(Book_No,Book_Name,Auther_Name,Cost,Category)values
(101,"Let us c","Denis",450,"System"),
(102,"Oracle-Complete Ref","Loni",550,"Database"),
(103,"Mastering SQL","Loni",250,"Database"),
(104,"PL-SQL-Ref","Scott Urman",750,"Database");
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que18:-Insert More data in Book table as follows
insert into Books(Book_No,Book_Name,Auther_Name,Cost,Category)values
(105,"Let us c","Denis",450,"System"),
(106,"Oracle-Complete Ref","Loni",550,"Database"),
(107,"Mastering SQL","Loni",250,"Database"),
(109,"PL-SQL-Ref","Scott Urman",750,"Database"),
(110,"Let us c","Denis",450,"System"),
(111,"Oracle-Complete Ref","Loni",550,"Database"),
(112,"Mastering SQL","Loni",250,"Database"),
(113,"PL-SQL-Ref","Scott Urman",750,"Database");
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que19:-View the data in the tables using simple SQL query.
select * from Books;
table Books;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que:-20 
insert into Books(Book_No,Book_Name,Auther_Name,Cost,Category)values
(114,"National Geographic","Adis Scott",1000,"Science");
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que21:-Rename the table Lib_Issue to Issue.
Alter table Lib_issue
rename issue;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que22:-Drop table Issue.
drop table iSSUE;
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- QUE 23) As per the given structure Create table Issue again with following constraints.
--  Lib_Issue_Id-Primary key
--  Book_No- foreign key
--  Member_id - foreign key
--  Issue_date
--  Return_date
CREATE TABLE Issue(
Lib_issue_id int primary key,
Book_No int,
Member_id int,
Issue_Date Date,
Return_date date,
foreign key (Book_No) References Books(Book_No),
foreign key (member_id) References Lib_member(member_id)
);
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

-- que 24:-
insert into Issue (Lib_issue_id, Book_No, Member_id, Issue_Date, Return_date)
values
(7001, 101, 1, '2006-12-10', NULL),
(7002, 102, 2, '2006-12-25', NULL),
(7003, 104, 1, '2006-01-15', NULL),
(7004, 101, 1, '2006-07-04', NULL),
(7005, 104, 2, '2006-11-15', NULL),
(7006, 101, 3, '2006-02-18', NULL);
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- que25:-Remove the constraints on Issue table
SELECT constraint_name
FROM information_schema.table_constraints
WHERE table_name = 'Issue'
AND constraint_type = 'FOREIGN KEY';

ALTER TABLE Issue DROP FOREIGN KEY Issue_ibfk_1;
ALTER TABLE Issue DROP FOREIGN KEY Issue_ibfk_2;
ALTER TABLE Issue DROP PRIMARY KEY;

desc Issue;
-- Show the structure of ctreate command 
show create table issue;

-- drop the index 
alter table Issue
drop index Book_No;

alter table Issue
drop index Member_id;


-- show the index details and as well as names
show index from Issue;




-- que 30:-
DESCRIBE Lib_member;
DESCRIBE Books;
DESCRIBE Issue;

set AUTO_COMMIT=off;





    
    



    








