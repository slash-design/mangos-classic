DELETE FROM `command` WHERE `name`='cheat';
DELETE FROM `command` WHERE `name`='cheat god';
INSERT INTO `command` (`name`, `security`, `help`) VALUES 
('cheat', 2, 'Syntax: .cheat $subcommand\r\nType .cheat to see the list of possible subcommands or .help cheat $subcommand to see info on subcommands'),
('cheat god', 2, 'Syntax: .cheat god [on/off]\r\nEnables or disables your character''s ability to take damage.');

DELETE FROM `mangos_string` WHERE `entry` IN (1704, 1705);
INSERT INTO `mangos_string` (`entry`, `content_default`, `content_loc3`) VALUES
(1704, 'Godmode is ON. You won\'t take damage.', 'GottModus eingeschalten. Du bekommst keinen Schaden.'),
(1705, 'Godmode is OFF. You can take damage.', 'GottModus ausgeschalten. Du bekommst wieder Schaden.');