-- Adminer 4.8.1 MySQL 5.7.32 dump

SET NAMES utf8;
SET time_zone = '+00:00';
SET foreign_key_checks = 0;
SET sql_mode = 'NO_AUTO_VALUE_ON_ZERO';

DROP TABLE IF EXISTS `site_tokens`;
CREATE TABLE `site_tokens` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `token` char(64) COLLATE utf8_czech_ci NOT NULL,
  `validity` datetime NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_czech_ci;


-- 2022-02-09 17:20:01
