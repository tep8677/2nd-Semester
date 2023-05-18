CREATE DATABASE MOVIES;
USE MOVIES;


CREATE TABLE ACTOR(
	actor_id VARCHAR(30),
    actor_name VARCHAR(30),
    actor_surname VARCHAR(30),
    birthdate DATE,
    PRIMARY KEY(actor_id)
);

CREATE TABLE MOVIE(
	title VARCHAR(30),
    release_date DATE,
    mov_description TEXT,
    PRIMARY KEY(title,release_date)
);

CREATE TABLE RECORD(
	actor_id VARCHAR(30),
    movie_title VARCHAR(30),
    release_date DATE,
    PRIMARY KEY (actor_id,movie_title,release_date), -- !!!USING the combinatio of the foreign keys as a primary key, => there is only one actor per movie in this db...
    FOREIGN KEY (actor_id) REFERENCES ACTOR(actor_id),
    FOREIGN KEY (movie_title,release_date) REFERENCES MOVIE(title,release_date)
);


INSERT INTO ACTOR VALUES('001','LEE','SIN','1999-01-02');
INSERT INTO MOVIE VALUES('THE LAST OF US','2022-09-14','A COOL MOVIE');
INSERT INTO RECORD VALUES('001','THE LAST OF US','2022-09-14');

INSERT INTO MOVIE VALUES('A HORROR STORY','2013-07-21','A SCARY MOVIE');
INSERT INTO RECORD VALUES('001','A HORROR STORY','2013-07-21');


SELECT ACTOR.actor_name,MOVIE.title
FROM MOVIE,ACTOR,RECORD
WHERE ACTOR.actor_id=RECORD.actor_ID
AND RECORD.movie_title = MOVIE.title
AND MOVIE.release_date=RECORD.release_date;