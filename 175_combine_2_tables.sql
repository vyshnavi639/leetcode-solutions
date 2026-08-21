# Write your MySQL query statement below
-- create table Person(
--     personId int primary key,
--     lastName varchar,
--     firstName varchar
-- );
-- create table Address(
--     addressId int primary key,
--     personId int,
--     city varchar,
--     state varchar
-- );
select 
p.firstName,
p.lastName,
a.city,
a.state
from Person p
left join Address a
on p.personId=a.personId
