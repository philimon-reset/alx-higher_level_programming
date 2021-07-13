-- creates the database hbtn_0d_usa and the table cities (in the database hbtn_0d_usa) on your MySQL server.
CREATE DATABASE IF NOT EXISTS `hbtn_0d_usa`;
CREATE TABLE IF NOT EXISTS hbtn_0d_usa.`cities` (
  `id` INT NOT NULL PRIMARY KEY UNIQUE AUTO_INCREMENT,
  `state_id` INT NOT NULL FOREIGN KEY (`id`, `name`),
  `name` VARCHAR(256) NOT NULL
);
