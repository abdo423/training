-- MySQL dump 10.13  Distrib 8.0.29, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: tsts
-- ------------------------------------------------------
-- Server version	8.0.29

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `egypt`
--

DROP TABLE IF EXISTS `egypt`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `egypt` (
  `cities` varchar(45) NOT NULL,
  PRIMARY KEY (`cities`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `egypt`
--

LOCK TABLES `egypt` WRITE;
/*!40000 ALTER TABLE `egypt` DISABLE KEYS */;
INSERT INTO `egypt` VALUES ('Alexandria'),('Aswan'),('Asyut'),('Beheira'),('Beni Suef'),('Cairo'),('Dakahlia'),('Damietta'),('Faiyum'),('Gharbia'),('Giza'),('Ismailia'),('Kafr El Sheikh'),('Luxor'),('Matruh'),('Minya'),('Monufia'),('New Valley'),('North Sinai'),('Port Said'),('Qalyubia'),('Qena'),('Red Sea'),('Sharqia'),('Sohag'),('South Sinai'),('Suez');
/*!40000 ALTER TABLE `egypt` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `firsttable`
--

DROP TABLE IF EXISTS `firsttable`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `firsttable` (
  `count` int NOT NULL,
  `lastNumber` double NOT NULL,
  PRIMARY KEY (`count`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `firsttable`
--

LOCK TABLES `firsttable` WRITE;
/*!40000 ALTER TABLE `firsttable` DISABLE KEYS */;
INSERT INTO `firsttable` VALUES (10,15);
/*!40000 ALTER TABLE `firsttable` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `login`
--

DROP TABLE IF EXISTS `login`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `login` (
  `email` varchar(45) NOT NULL,
  `password` varchar(45) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `login`
--

LOCK TABLES `login` WRITE;
/*!40000 ALTER TABLE `login` DISABLE KEYS */;
INSERT INTO `login` VALUES ('abdo@gmail.com','1234'),('1235','1235'),('5555','5555'),('7mdy','7mdy'),('khalid','khalid'),('admin','admin'),('admin','admin'),('54321','54321'),('',''),('ahmed','ahmed'),('tt','tt'),('1234','1234'),('123','132'),('12345','12345'),('159','159'),('147','147');
/*!40000 ALTER TABLE `login` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `passenger`
--

DROP TABLE IF EXISTS `passenger`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `passenger` (
  `passeneger_name` varchar(30) NOT NULL,
  `start_point` varchar(30) DEFAULT NULL,
  `end_point` varchar(30) DEFAULT NULL,
  `Date_of_travel` varchar(15) DEFAULT NULL,
  `number_of_train_booked` varchar(30) DEFAULT NULL,
  `id` int NOT NULL,
  PRIMARY KEY (`passeneger_name`,`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `passenger`
--

LOCK TABLES `passenger` WRITE;
/*!40000 ALTER TABLE `passenger` DISABLE KEYS */;
INSERT INTO `passenger` VALUES ('abdulla','Cairo','Giza','2022-05-29','12',2),('ghamry','Cairo','Giza','2022-05-29','12',6),('hamdy','Cairo','Giza','2022-05-29','12',4),('khaled','Cairo','Giza','2022-05-29','12',5),('mahdy','Cairo','Giza','2022-05-29','12',3),('nada','Cairo','Giza','2022-05-29','12',7),('nesren','Cairo','Giza','2022-05-29','12',8),('salma','Cairo','Giza','2022-05-29','12',9),('sayed','Cairo','Giza','2022-05-29','12',1);
/*!40000 ALTER TABLE `passenger` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `test_train`
--

DROP TABLE IF EXISTS `test_train`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `test_train` (
  `train_name` varchar(45) NOT NULL,
  `train_number` int NOT NULL,
  `boarding_point` varchar(45) NOT NULL,
  `destination_point` varchar(45) NOT NULL,
  `no_seats` int NOT NULL,
  `ticket_price` int NOT NULL,
  `DateOfTravel` date NOT NULL,
  `TimeOfTravel` varchar(5) NOT NULL,
  `no_people` int DEFAULT NULL,
  PRIMARY KEY (`train_number`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `test_train`
--

LOCK TABLES `test_train` WRITE;
/*!40000 ALTER TABLE `test_train` DISABLE KEYS */;
INSERT INTO `test_train` VALUES ('abdalla',12,'Cairo','Giza',38,250,'2022-05-29','02:15',38),('mostafa',22,'Giza','Cairo',5,260,'2000-01-01','00:12',4),('Hamdy',55,'Cairo','Giza',2,250,'2022-01-01','00:00',0),('samir',865,'Cairo','Giza',10,100,'2022-05-29','01:15',10),('Bondok',2434,'Faiyum','Luxor',1000,100,'2022-05-27','02:25',0);
/*!40000 ALTER TABLE `test_train` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `train`
--

DROP TABLE IF EXISTS `train`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `train` (
  `train name` varchar(50) NOT NULL,
  `train number` varchar(45) NOT NULL,
  `Boarding point` varchar(45) NOT NULL,
  `Destination point` varchar(45) NOT NULL,
  `No.seats` varchar(45) NOT NULL,
  `ticket price` varchar(45) NOT NULL,
  `Date of travel` date NOT NULL,
  PRIMARY KEY (`train number`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `train`
--

LOCK TABLES `train` WRITE;
/*!40000 ALTER TABLE `train` DISABLE KEYS */;
INSERT INTO `train` VALUES ('abdo','1','zaid','6 octobar','600','120','2022-04-26'),('mahmoud','1234','atfih','morad','2','55555555','2002-08-16'),('mahmoud','12344545','atfih','morad','2','55555555','2002-08-16'),('Roshdy','3','A','Z','1','99999999','2002-12-22'),('khalid','4','mohk','jlk,','568','458','2005-05-05');
/*!40000 ALTER TABLE `train` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-05-29  2:44:14
