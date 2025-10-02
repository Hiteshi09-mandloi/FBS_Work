use fbs_a;
-- 1) List all the books written by Author Loni and with price less than 600.
-- SQL:
select * from books where Auther_Name="Loni" and cost<600;

-- 2) List the Issue details for the books that are not returned yet.
-- SQL:
Select b.Book_Name,i.Lib_issue_id,i.Issue_Date from books as b
inner join issue as i
on b.Book_No=i.Book_No
where i.Return_date is null;

-- 3) Update all blank return_date with 31-Dec-06 excluding book IDs 7005 and 7006.
-- SQL:
SET SQL_SAFE_UPDATES = 0;
select * from books;
update issue set return_date="2031-12-06"
where return_date is null;

-- 4) List all the Issue details that have books issued for more than 30 days.
-- SQL:
Select * from issue where datediff(return_date,Issue_Date)>30;

-- 5) List all the books with price in range 500 to 750 and category as Database.
-- SQL:
Select * from books where category='Database' And cost between 500 and 750 ;

-- 6) List all the books that belong to categories: Science, Database, Fiction, Management.
-- SQL:
Select * from books where Category in ("Science","DataBase","Fiction","Management");

-- 7) List all members in descending order of penalty due.
-- SQL:
Select * from lib_member order by Penalty_Amount desc;

-- 8) Modify the price of book with ID 103 to Rs 300 and category to RDBMS.
-- SQL:
update books set cost=300,category="RDBMS"
where book_NO=103;

-- 9) List all books in ascending order of category and descending order of price.
-- SQL:
Select * from Books order by category desc, cost desc;

-- 10) List all books that contain the word SQL in the book name.
-- SQL:
Select * from books where Book_Name like "%sql%";

-- 11) List Lib_Issue_Id, Issue_Date, Return_Date, and number of days the book was issued.
-- SQL:
Select Lib_Issue_id,Issue_Date,Return_Date,datediff(curDate(),Issue_date) from issue;

-- 12) Find the details of members in the order of their joining the library.
-- SQL:
Select * from Lib_Member order by Acc_open_Date desc;

-- 13) Display the count of total number of books issued to Member 101.
-- SQL:
Select count(Book_No) from issue where Member_id=1;

-- 14) Display the total penalty due for all members.
-- SQL:
Select sum(Penalty_Amount) from lib_member;

-- 15) Display the total number of members.
-- SQL:
select count(*) from lib_member;

-- 16) Display the total number of books issued.
-- SQL:
Select count(*) from issue;

-- 17) Display the average membership fees paid by all members.
-- SQL:
Select avg(Fes_paid) from lib_member;



-- 18) List various categories and count of books in each category.
-- SQL:
Select count(*),category from Books group by category;

-- 19) List Book_No and number of times each book is issued in descending order.
-- SQL: 
SELECT Book_No, COUNT(*) AS issue_count
FROM issue
GROUP BY Book_No
ORDER BY issue_count DESC;


-- 20) Find maximum, minimum, total, and average penalty amount in member table.
-- SQL:
select min(Penalty_Amount),max(Penalty_Amount),sum(Penalty_Amount),avg(Penalty_Amount) from lib_member;

-- 21) Display Member ID and number of books for members who issued more than 2 books.
-- SQL:
select m.member_id,count(i.book_no) from issue i inner join lib_member m on i.member_id=m.member_id
group by m.member_id having count(i.book_no)>2;

-- 22) Display Member ID, Book No, and number of times the same book is issued in descending order.
-- SQL:
select m.member_id,Book_no,count(i.lib_issue_id) from issue i inner join lib_member m on i.member_id=m.member_id
group by m.member_id,Book_no;


-- 23) Display month and number of books issued each month in descending order.
-- SQL:
Select month(issue_date),count(*) from issue group by month(issue_date) order by month(issue_date);

-- 24) List Book_No of books not issued to any member so far.
-- SQL:
Select * from books where book_no not in (Select Book_no from issue);

-- 25) List Member IDs that exist and have issued at least one book.
-- SQL:
select * from lib_member m inner join issue i on m.member_id=i.member_id; 

-- 26) List Member ID with highest and lowest number of books issued.
-- SQL:
-- Members with highest books issued
SELECT member_id, COUNT(book_no) AS books_issued
FROM issue
GROUP BY member_id
HAVING COUNT(book_no) = (
    SELECT MAX(book_count)
    FROM (
        SELECT COUNT(book_no) AS book_count
        FROM issue
        GROUP BY member_id
    ) AS counts
);



select m.member_id,count(book_no) from lib_member m inner join issue i on m.member_id=i.member_id
group by m.member_id order by count(book_no) desc,count(book_no); 

-- 27) List all Issue_details for books issued in December and July without using arithmetic, logical, or comparison operators.
-- SQL:
Select * from issue where month(issue_date) in (7,12);


-- 28) List Book_No, Book_Name, and Issue_Date for books issued in December and belong to category Database.
-- SQL:
Select b.book_no,b.book_name,i.issue_date,i.return_date from books b inner join issue i
on b.book_no=i.book_no
inner join lib_member m 
on m.member_id=i.member_id
 where b.category="Database" ANd month(issue_date)=12;


-- 29) List Member ID, Member Name, and max books allowed in descending order of max books allowed.
-- SQL:
Select max(b.book_no),m.member_id,m.member_name from books b inner join issue i
on b.book_no=i.book_no
inner join lib_member m 
on m.member_id=i.member_id
group by m.member_id,m.member_name;

-- 30) List Book No, Book Name, Issue_Date, and Return_Date for books issued by Richa Sharma.
-- SQL:
Select b.book_no,b.book_name,i.issue_date,i.return_date from books b inner join issue i
on b.book_no=i.book_no
inner join lib_member m 
on m.member_id=i.member_id
 where m.member_name="Richa Sharma";

 

-- 31) List details of all members who have issued books in Database category.
-- SQL:
Select m.member_id,m.member_name,m.member_address,m.acc_open_Date,m.fes_paid from books b inner join issue i
on b.book_no=i.book_no
inner join lib_member m 
on m.member_id=i.member_id
 where category="DataBase";

-- 32) List all books that have highest price in their own category.
-- SQL:
Select max(cost),category from books group by  Category;

-- 33) List all Issue_Details where Issue_Date is not within Acc_open_date and Return_Date for that member.
-- SQL:
Select Lib_issue_id ,
Book_No ,
i.Member_id ,
Issue_Date, 
Return_date from issue i inner join lib_member m on i.member_id=m.member_id
where m.acc_open_date is not null and Return_date is not null;
  


-- 34) List all members who have not issued a single book so far.
-- SQL:
Select * from lib_member m left outer join issue i on m.member_id=i.member_id where lib_issue_id is not null;

-- 35) List all members who have issued the same book as issued by Garima.
-- SQL:
Select * from lib_member m inner join issue i on m.member_id=i.member_id
where member_name="Garima sen" and issue_date in (select Issue_date from issue where m.member_name="Garima sen");

-- 36) List Book_Name and Price of books not returned for more than 30 days.
-- SQL:
Select Book_name,cost from books b inner join issue i on b.book_no=i.book_no
where datediff(return_date,issue_date)>30;

-- 37) List all authors and book_name for authors who have written more than 1 book.
-- SQL:
Select Auther_name,count(*) from books group by auther_name having count(*)>1;

-- 38) List Member ID and Member Name of people with highest and lowest number of books issued.
-- SQL:
SELECT i.member_id, m.member_name, COUNT(i.book_no) AS books_issued
FROM issue i
JOIN lib_member m ON i.member_id = m.member_id
GROUP BY i.member_id, m.member_name
having count(i.book_no)=(
   select Max(book_count) from
   (
      select count(i.book_no) as book_count
      from issue group by member_id
   )as counts
);

SELECT i.member_id, m.member_name, COUNT(i.book_no) AS books_issued
FROM issue i
JOIN lib_member m ON i.member_id = m.member_id
GROUP BY i.member_id, m.member_name
HAVING COUNT(i.book_no) = (
    SELECT MAX(book_count)
    FROM (
        SELECT COUNT(book_no) AS book_count
        FROM issue
        GROUP BY member_id
    ) AS counts
);



-- 39) List details of the top 3 highest-priced books.
-- SQL:
Select * from books order by cost desc limit 3;

-- 40) List total cost of all books currently issued but not returned.
-- SQL:
Select sum(b.cost) from books b inner join issue i on b.book_no=i.book_no
where i.return_date is null ;

-- 41) List details of the book issued the maximum number of times.
-- SQL:
SELECT Book_No, COUNT(*) as issue
FROM issue
GROUP BY Book_No order by issue desc limit 1; 

SELECT Book_No, COUNT(*) AS issue_count
FROM issue
GROUP BY Book_No
HAVING COUNT(*) = (
    SELECT MAX(issue_count)
    FROM (
        SELECT COUNT(*) AS issue_count
        FROM issue
        GROUP BY Book_No
    ) AS sub
);




select b.book_no, count(i.book_no) as c_book from books b 
inner join issue i on b.book_no=i.book_no group by b.book_no order by c_book desc limit 1 ; 

SELECT b.*,count(b.book_no) as count_books
FROM books b
inner JOIN issue i ON b.Book_No = i.Book_No
GROUP BY i.Book_No order by count_books desc limit 1 ;

Select Auther_Name ,count(*) from books group by Auther_Name order by Auther_Name  desc;


-- 42) List how many books are issued to lifetime members.
-- SQL:
select m.Memebership_type,count(i.book_no) from lib_member m inner join issue i
on m.member_id=i.member_id where m.Memebership_type="lifetime" group by m.Memebership_typ;

SELECT m.Memebership_type, COUNT(i.Book_No) AS total_books_issued
FROM lib_member m
INNER JOIN issue i ON m.member_id = i.member_id
GROUP BY m.Memebership_type
having Memebership_type="lifeTime";

-- 43) List all member types and count of members in each type.
-- SQL:
select Memebership_type,count(*) from lib_member group by Memebership_type;

-- 44) List first 5 members who joined the library.
-- SQL:
select * from lib_member order by Acc_open_Date limit 5;

-- 45) List members with their member type who issued books between 1st December and 31st December.
-- SQL:
select m.Memebership_type,m.member_id,i.issue_date from lib_member m inner join issue i
on m.member_id=i.member_id where i.issue_date between "2006-12-1" ANd "2006-12-31";

select m.Memebership_type,m.member_id,i.issue_date from lib_member m inner join issue i
on m.member_id=i.member_id where month(issue_date)=12;

-- 46) List all members who have not returned books yet.
-- SQL:
Select * from lib_member where member_id in (select member_id from issue where Return_date is null);

select * from lib_member l inner join issue i join books b on i.book_no=b.book_no where return_date is not null;

-- 47) List all members who joined the library on the same date as Garima.
-- SQL:
Select * from lib_member where Acc_open_Date=(select Acc_open_Date from Lib_member where member_id=2);

select * from lib_member where Acc_open_Date in (select Acc_open_Date from lib_member where member_name="Garima sharma"); 
-- 48) List members who issued books from author “Loni” in December.
-- SQL:
select m.member_id,m.member_name ,i.issue_date,b.Auther_name from 
lib_member m inner join issue i inner join books b 
on b.book_no=i.book_no 
where b.Auther_Name="loni" And month(issue_date)=12;
-- 49) List names of authors whose books are least issued by lifetime members.
-- SQL:
select m.member_id,m.member_name ,i.issue_date,b.Auther_name from 
lib_member m inner join issue i on m.member_id=m.member_id 
inner join books b 
on b.book_no=i.book_no 
where b.Auther_Name="loni" And month(issue_date)=12;


-- 50) List members who issued books costing more than 300 rupees and authored by “Scott Urman”.
-- SQL:
select *  from books;
select * from issue i join  books b on
i.book_no=b.book_no where cost>=300 and auther_name='scott urman';


-- 51) List lifetime members who joined between 1st Jan 2006 and 31st Dec 2006 and issued only one book.
-- SQL:
Select M.member_id,m.Member_Name,i.lib_issue_id,b.book_no from lib_member m inner join issue i
on m.member_id=i.member_id
inner join books b
on b.book_no=i.book_no where Memebership_type="LifeTime"
And Acc_open_Date between "2010-01-01" and "2010-12-31";


-- 52) Modify Penalty_Amount for Garima Sen to Rs 100.
-- SQL:
update lib_member set Penalty_Amount=100
where member_id=2; 
