/*
THE COMPUTER CODE CONTAINED HEREIN IS THE SOLE PROPERTY OF PARALLAX
SOFTWARE CORPORATION ("PARALLAX").  PARALLAX, IN DISTRIBUTING THE CODE TO
END-USERS, AND SUBJECT TO ALL OF THE TERMS AND CONDITIONS HEREIN, GRANTS A
ROYALTY-FREE, PERPETUAL LICENSE TO SUCH END-USERS FOR USE BY SUCH END-USERS
IN USING, DISPLAYING,  AND CREATING DERIVATIVE WORKS THEREOF, SO LONG AS
SUCH USE, DISPLAY OR CREATION IS FOR NON-COMMERCIAL, ROYALTY OR REVENUE
FREE PURPOSES.  IN NO EVENT SHALL THE END-USER USE THE COMPUTER CODE
CONTAINED HEREIN FOR REVENUE-BEARING PURPOSES.  THE END-USER UNDERSTANDS
AND AGREES TO THE TERMS HEREIN AND ACCEPTS THE SAME BY USE OF THIS FILE.
COPYRIGHT 1993-1999 PARALLAX SOFTWARE CORPORATION.  ALL RIGHTS RESERVED.
*/

/*
 *
 * Header for text.c, including symbolics for text messages
 *
 */


#ifndef _TEXT_H
#define _TEXT_H

//Array of pointers to text
extern char *Text_string[];

//Symbolic constants for all the strings

#define TXT_NEW_GAME            dxx_gettext(0, "New game")
#define TXT_VIEW_SCORES         dxx_gettext(1, "High scores")
#define TXT_QUIT                dxx_gettext(2, "Quit")
#define TXT_CANNOT_SET_SCREEN   dxx_gettext(3, "Cannot set screen mode for game")
#define TXT_NO_JOYSTICK         dxx_gettext(4, "No joystick detected")
#define TXT_REQUIRES_VGA        dxx_gettext(5, "This game requires a VGA adapter.")
#define TXT_HELP                dxx_gettext(6, "Type '%s -help' for a list of command-line options.")
#define TXT_THANKS              dxx_gettext(7, "Thank-you for playing DESCENT 2!")
#define TXT_SOUND_DISABLED      dxx_gettext(8, "Sound disabled.")
#define TXT_CANT_INIT_GFX       dxx_gettext(9, "Can't initialize graphics, error=%d")
#define TXT_EXTRA_LIFE          dxx_gettext(10, "EXTRA LIFE!")
#define TXT_COPYRIGHT           dxx_gettext(11, "Copyright (C) 1994-1996 Parallax Software Corporation")
#define TXT_BLUE                dxx_gettext(12, "BLUE")
#define TXT_RED                 dxx_gettext(13, "RED")
#define TXT_YELLOW              dxx_gettext(14, "YELLOW")
#define TXT_ACCESS_DENIED       dxx_gettext(15, "Access denied")
#define TXT_ACCESS_GRANTED      dxx_gettext(16, "Access granted")
#define TXT_BOOSTED_TO          dxx_gettext(17, "boosted to")
#define TXT_ENERGY              dxx_gettext(18, "Energy")
#define TXT_SHIELD              dxx_gettext(19, "Shield")
#define TXT_LASER               dxx_gettext(20, "Laser")
#define TXT_MAXED_OUT           dxx_gettext(21, "Your %s is maxed out!")
#define TXT_QUAD_LASERS         dxx_gettext(22, "Quad Lasers")
#define TXT_ALREADY_HAVE        dxx_gettext(23, "You already have")
#define TXT_VULCAN_AMMO         dxx_gettext(24, "Vulcan Ammo")
#define TXT_VULCAN_ROUNDS       dxx_gettext(25, "Vulcan Rounds")
#define TXT_ALREADY_ARE         dxx_gettext(26, "You already are")
#define TXT_CLOAKED             dxx_gettext(27, "Cloaked")
#define TXT_CLOAKING_DEVICE     dxx_gettext(28, "Cloaking Device")
#define TXT_INVULNERABLE        dxx_gettext(29, "Invulnerable")
#define TXT_INVULNERABILITY     dxx_gettext(30, "Invulnerability")
#define TXT_CREATE_NEW          dxx_gettext(31, "<Create New>")
#define TXT_YES                 dxx_gettext(32, "Yes")
#define TXT_NO                  dxx_gettext(33, "No")
#define TXT_OK                  dxx_gettext(34, "Ok")
#define TXT_NO_DEMO_FILES       dxx_gettext(35, "No Demo Files found.")
#define TXT_USE_F5              dxx_gettext(36, "Use F5")
#define TXT_TO_CREATE_ONE       dxx_gettext(37, "during game to create one.")
#define TXT_NO_FILES_MATCHING   dxx_gettext(38, "No files matching")
#define TXT_WERE_FOUND          dxx_gettext(39, "were found!")
#define TXT_DELETE_PILOT        dxx_gettext(40, "Delete Pilot:")
#define TXT_DELETE_DEMO         dxx_gettext(41, "Delete Demo:")
#define TXT_COULDNT             dxx_gettext(42, "Couldn't")
#define TXT_EXIT_SEQUENCE       dxx_gettext(43, "Exiting the mine!")
#define TXT_WARNING             dxx_gettext(44, "Warning!")
#define TXT_UNABLE_TO_OPEN      dxx_gettext(45, "Unable to open")
#define TXT_COOL_SAYING         dxx_gettext(46, "Enter your cool saying.\nPress ESC when done.")
#define TXT_HIGH_SCORE          dxx_gettext(47, "HIGH SCORE!")
#define TXT_YOU_PLACED          dxx_gettext(48, "You placed")
#define TXT_YOU_PLACED_1ST      dxx_gettext(49, "You placed 1st!")
#define TXT_HIGH_SCORES         dxx_gettext(50, "HIGH SCORES")
#define TXT_NAME                dxx_gettext(51, "Name")
#define TXT_SCORE               dxx_gettext(52, "Score")
#define TXT_SKILL               dxx_gettext(53, "Skill")
#define TXT_LEVELS              dxx_gettext(54, "Levels")
#define TXT_TIME                dxx_gettext(55, "Time")
#define TXT_REGISTER_DESCENT    dxx_gettext(56, "D2 Strategy Guide available at 1-800-531-2343!")
#define TXT_1ST                 dxx_gettext(57, "1st")
#define TXT_2ND                 dxx_gettext(58, "2nd")
#define TXT_3RD                 dxx_gettext(59, "3rd")
#define TXT_4TH                 dxx_gettext(60, "4th")
#define TXT_5TH                 dxx_gettext(61, "5th")
#define TXT_6TH                 dxx_gettext(62, "6th")
#define TXT_7TH                 dxx_gettext(63, "7th")
#define TXT_8TH                 dxx_gettext(64, "8th")
#define TXT_9TH                 dxx_gettext(65, "9th")
#define TXT_10TH                dxx_gettext(66, "10th")
#define TXT_EMPTY               dxx_gettext(67, "-empty-")
#define TXT_KILLED              dxx_gettext(68, "killed")
#define TXT_SUICIDE             dxx_gettext(69, "committed suicide!")
#define TXT_YOU                 dxx_gettext(70, "You")
#define TXT_YOURSELF            dxx_gettext(71, "yourself")
#define TXT_NO_MACRO            dxx_gettext(72, "That macro is not defined.")
#define TXT_SENDING             dxx_gettext(73, "Sending")
#define TXT_SEND_MESSAGE        dxx_gettext(74, "Send Message:")
#define TXT_SAYS                dxx_gettext(75, "says")
#define TXT_TELLS_YOU           dxx_gettext(76, "tells you")
#define TXT_HAS_DEST_CONTROL    dxx_gettext(77, "has destroyed the main reactor!")
#define TXT_CONTROL_DESTROYED   dxx_gettext(78, "The main reactor has been destroyed!")
#define TXT_HAS_ESCAPED         dxx_gettext(79, "has escaped the mine!")
#define TXT_HAS_FOUND_SECRET    dxx_gettext(80, "has found the secret level!")
#define TXT_HAS_LEFT_THE_GAME   dxx_gettext(81, "has left the game!")
#define TXT_YOU_ARE_ONLY        dxx_gettext(82, "You are the only person\nremaining in this netgame.")
#define TXT_OPPONENT_LEFT       dxx_gettext(83, "Your opponent has left.\nReturning to menu.")
#define TXT_YOU_DEST_CONTROL    dxx_gettext(84, "You destroyed the main reactor!")
#define TXT_DEFINE_MACRO        dxx_gettext(85, "Define Macro #")
#define TXT_MESSAGE_SENT_TO     dxx_gettext(86, "Message sent to")
#define TXT_NOBODY              dxx_gettext(87, "Nobody.")
#define TXT_PAUSE               dxx_gettext(88, "Pause")
#define TXT_CANT_PAUSE          dxx_gettext(89, "You can't pause in a multiplayer game!")
#define TXT_HELP_ESC            dxx_gettext(90, "ESC\t  Abort Game")
#define TXT_HELP_F2             dxx_gettext(91, "F2\t  Options menu")
#define TXT_HELP_F3             dxx_gettext(92, "F3\t  Toggle cockpit")
#define TXT_HELP_F4             dxx_gettext(93, "F4\t  Drop marker")
#define TXT_HELP_F5             dxx_gettext(94, "F5\t  Toggle recording")
#define TXT_HELP_PAUSE          dxx_gettext(95, "Pause\t  Pause")
#define TXT_HELP_MINUSPLUS      dxx_gettext(96, "-/+\t  Change screen size")
#define TXT_HELP_PRTSCN         dxx_gettext(97, "PrintScrn\t  Save screen shot")
#define TXT_HELP_1TO5           dxx_gettext(98, "1-5\t  Select primary weapon")
#define TXT_HELP_6TO10          dxx_gettext(99, "6-0\t  Select secondary weapon")
#define TXT_HELP_TO_VIEW        dxx_gettext(100, " To view control keys, select\nconfiguration in options menu")
#define TXT_KEYS                dxx_gettext(101, "KEYS")
#define TXT_ABORT_AUTODEMO      dxx_gettext(102, "Abort Autodemo?")
#define TXT_ABORT_GAME          dxx_gettext(103, "Abort Game?")
#define TXT_W_LASER             dxx_gettext(104, "Laser Cannon")
#define TXT_W_VULCAN            dxx_gettext(105, "Vulcan Cannon")
#define TXT_W_SPREADFIRE        dxx_gettext(106, "Spreadfire Cannon")
#define TXT_W_PLASMA            dxx_gettext(107, "Plasma Cannon")
#define TXT_W_FUSION            dxx_gettext(108, "Fusion Cannon")
#define TXT_W_SLASER            dxx_gettext(109, "Super Laser Cannon")
#define TXT_W_SVULCAN           dxx_gettext(110, "Gauss Cannon")
#define TXT_W_SSPREADFIRE       dxx_gettext(111, "Helix Cannon")
#define TXT_W_SPLASMA           dxx_gettext(112, "Phoenix Cannon")
#define TXT_W_SFUSION           dxx_gettext(113, "Omega Cannon")
#define TXT_W_C_MISSILE         dxx_gettext(114, "Concussion Missile")
#define TXT_W_H_MISSILE         dxx_gettext(115, "Homing Missile")
#define TXT_W_P_BOMB            dxx_gettext(116, "Proximity Bomb")
#define TXT_W_S_MISSILE         dxx_gettext(117, "Smart Missile")
#define TXT_W_M_MISSILE         dxx_gettext(118, "Mega Missile")
#define TXT_W_SMISSILE1         dxx_gettext(119, "Flash Missile")
#define TXT_W_SMISSILE2         dxx_gettext(120, "Guided Missile")
#define TXT_W_SMISSILE3         dxx_gettext(121, "Smart Mine")
#define TXT_W_SMISSILE4         dxx_gettext(122, "Mercury Missile")
#define TXT_W_SMISSILE5         dxx_gettext(123, "Earthshaker Missile")
#define TXT_W_LASER_S           dxx_gettext(124, "Laser")
#define TXT_W_VULCAN_S          dxx_gettext(125, "Vulcan")
#define TXT_W_SPREADFIRE_S      dxx_gettext(126, "Spread")
#define TXT_W_PLASMA_S          dxx_gettext(127, "Plasma")
#define TXT_W_FUSION_S          dxx_gettext(128, "Fusion")
#define TXT_W_SLASER_S          dxx_gettext(129, "Super\nLaser")
#define TXT_W_SVULCAN_S         dxx_gettext(130, "Gauss")
#define TXT_W_SSPREADFIRE_S     dxx_gettext(131, "Helix")
#define TXT_W_SPLASMA_S         dxx_gettext(132, "Phoenx")
#define TXT_W_SFUSION_S         dxx_gettext(133, "Omega")
#define TXT_W_C_MISSILE_S       dxx_gettext(134, "Concsn\nMissile")
#define TXT_W_H_MISSILE_S       dxx_gettext(135, "Homing\nMissile")
#define TXT_W_P_BOMB_S          dxx_gettext(136, "Proxim.\nBomb")
#define TXT_W_S_MISSILE_S       dxx_gettext(137, "Smart\nMissile")
#define TXT_W_M_MISSILE_S       dxx_gettext(138, "Mega\nMissile")
#define TXT_W_SMISSILE1_S       dxx_gettext(139, "Flash\nMissile")
#define TXT_W_SMISSILE2_S       dxx_gettext(140, "Guided\nMissile")
#define TXT_W_SMISSILE3_S       dxx_gettext(141, "Smart\nMine")
#define TXT_W_SMISSILE4_S       dxx_gettext(142, "Merc\nMissile")
#define TXT_W_SMISSILE5_S       dxx_gettext(143, "Shaker\nMissile")
#define TXT_SELECTED            dxx_gettext(144, "selected!")
#define TXT_DONT_HAVE           dxx_gettext(145, "You don't have the")
#define TXT_DONT_HAVE_AMMO      dxx_gettext(146, "You don't have ammo for the")
#define TXT_HAVE_NO             dxx_gettext(147, "You have no")
#define TXT_S                   dxx_gettext(148, "s")
#define TXT_SX                  dxx_gettext(149, "s!")
#define TXT_NO_PRIMARY          dxx_gettext(150, "No primary weapons available")
#define TXT_ALREADY_HAVE_THE    dxx_gettext(151, "You already have the")
#define TXT_CANT_OPEN_DOOR      dxx_gettext(152, "You cannot open this door")
#define TXT_MOVE_JOYSTICK       dxx_gettext(153, "Move joystick")
#define TXT_TO_UL               dxx_gettext(154, "to\nthe upper-left corner")
#define TXT_ANY_BUTTON          dxx_gettext(155, "and press any button.")
#define TXT_JOYSTICK            dxx_gettext(156, "joystick")
#define TXT_UPPER_LEFT          dxx_gettext(157, "upper-left")
#define TXT_TO_LR               dxx_gettext(158, "to\nthe lower-right corner")
#define TXT_LOWER_RIGHT         dxx_gettext(159, "lower-right")
#define TXT_TO_C                dxx_gettext(160, "to\nthe center")
#define TXT_CENTER              dxx_gettext(161, "center")
#define TXT_CONTROL_KEYBOARD    dxx_gettext(162, "Keyboard only")
#define TXT_CONTROL_JOYSTICK    dxx_gettext(163, "Joystick")
#define TXT_CONTROL_FSTICKPRO   dxx_gettext(164, "CH Flightstick Pro")
#define TXT_CONTROL_THRUSTFCS   dxx_gettext(165, "Thrustmaster FCS &\nWingman Extreme")
#define TXT_CONTROL_GGAMEPAD    dxx_gettext(166, "Gravis Gamepad")
#define TXT_CONTROL_MOUSE       dxx_gettext(167, "Mouse")
#define TXT_CONTROL_CYBERMAN    dxx_gettext(168, "Cyberman")
#define TXT_CONTROL_WINJOY      dxx_gettext(169, "Windows 95 Joystick")
#define TXT_CUST_ABOVE          dxx_gettext(170, "Customize Above")
#define TXT_CUST_KEYBOARD       dxx_gettext(171, "Customize Keyboard")
#define TXT_CONTROLS            dxx_gettext(172, "Controls")
#define TXT_KEYBOARD            dxx_gettext(173, "Keyboard")

//This is where the command-line help text used to be

#define TXT_REGISTRATION        dxx_gettext(192, "This copy of Descent 2 is for use by:")
#define TXT_ERROR_SELECTOR      dxx_gettext(193, "Error initializing selector for segment A000.")
#define TXT_ERROR_GRAPHICS      dxx_gettext(194, "Error trying to initialize unsupported graphics mode.")
#define TXT_CALIBRATE           dxx_gettext(195, "Calibrate")
#define TXT_SKIP                dxx_gettext(196, "Skip")
#define TXT_JOYSTICK_NOT_CEN    dxx_gettext(197, "It looks like your joystick\nisn't centered.  Do you want\nto calibrate it?")
#define TXT_CHOOSE_INPUT        dxx_gettext(198, "Choose input device")
#define TXT_ERROR               dxx_gettext(199, "Error")
#define TXT_ERROR_PLR_VERSION   dxx_gettext(200, "Cannot open player file\nVersion mismatch.")
#define TXT_DEMO_PLAYBACK       dxx_gettext(201, "Demo Playback")
#define TXT_DEMO_RECORDING      dxx_gettext(202, "Demo Recording")
#define TXT_CRUISE              dxx_gettext(203, "Cruise:")
#define TXT_DUMPING_SCREEN      dxx_gettext(204, "Dumping screen to")
#define TXT_CHEATS_ENABLED      dxx_gettext(205, "Cheats Enabled!!")
#define TXT_NET_GAME_CLOSED     dxx_gettext(206, "That game is closed to new players.")
#define TXT_NET_GAME_FULL       dxx_gettext(207, "The game is already full.")
#define TXT_NET_GAME_BETWEEN    dxx_gettext(208, "The game is between levels.\nTry again later.")
#define TXT_NET_GAME_NSELECT    dxx_gettext(209, "You were not selected for the game.")
#define TXT_NET_GAME_NSTART     dxx_gettext(210, "The netgame was not started.")
#define TXT_NET_GAME_CONNECT    dxx_gettext(211, "You are already connected.\nTry again in a minute.")
#define TXT_NET_GAME_WRONGLEV   dxx_gettext(212, "Wrong level selected.\nPlease re-join.")
#define TXT_KILLS               dxx_gettext(213, "kills")
#define TXT_WAITING             dxx_gettext(214, "Waiting for other players..\n")
#define TXT_SURE_LEAVE_GAME     dxx_gettext(215, "Are you sure you want\nto leave the game?")
#define TXT_JOINING             dxx_gettext(216, "is joining the game.")
#define TXT_REJOIN              dxx_gettext(217, "is rejoining the game")
#define TXT_SORRY_ONLY          dxx_gettext(218, "Sorry, but a you can only select\nup to")
#define TXT_NETPLAYERS_IN       dxx_gettext(219, "netplayers for this mine.")
#define TXT_S_GAME              dxx_gettext(220, "'s game")
#define TXT_DESCRIPTION         dxx_gettext(221, "Description:")
#define TXT_LEVEL_              dxx_gettext(222, "Level:")
#define TXT_MODE                dxx_gettext(223, "Mode:")
#define TXT_ANARCHY             dxx_gettext(224, "Anarchy")
#define TXT_TEAM_ANARCHY        dxx_gettext(225, "Team Anarchy")
#define TXT_ANARCHY_W_ROBOTS    dxx_gettext(226, "Robo-Anarchy")
#define TXT_COOPERATIVE         dxx_gettext(227, "Cooperative")
#define TXT_OPTIONS             dxx_gettext(228, "Options:")
#define TXT_CLOSED_GAME         dxx_gettext(229, "Closed Game")
#define TXT_NETGAME_SETUP       dxx_gettext(230, "Game Setup")
#define TXT_LEVEL_OUT_RANGE     dxx_gettext(231, "That start level is out of range")
#define TXT_SORRY               dxx_gettext(232, "Sorry")
#define TXT_REGISTERED_ONLY     dxx_gettext(233, "That game mode is\nonly available in\nthe registered/commercial\nversion")
#define TXT_WAIT                dxx_gettext(234, "Wait...")
#define TXT_FOUND               dxx_gettext(235, "Found")
#define TXT_ACTIVE_GAMES        dxx_gettext(236, "active games.")
#define TXT_STARTING_NETGAME    dxx_gettext(237, "Starting netgame on level")
#define TXT_NETLEVEL_NMATCH     dxx_gettext(238, "Your level file does not\nmatch the other player's.\nCannot join game.")
#define TXT_TEAM                dxx_gettext(239, "Team")
#define TXT_TEAM_SELECTION      dxx_gettext(240, "Team selection\nSelect names to switch teams")
#define TXT_TEAM_MUST_ONE       dxx_gettext(241, "You must place at least\none player on each team.")
#define TXT_TEAM_SELECT         dxx_gettext(242, "Select up to")
#define TXT_TEAM_PRESS_ENTER    dxx_gettext(243, "players\nPress ENTER to begin.")
#define TXT_TEAM_ATLEAST_TWO    dxx_gettext(244, "You must select at least two\nplayers to start a network game")
#define TXT_IPX_NOT_FOUND       dxx_gettext(245, "An active IPX driver was\nnot found.  Check your\nnetwork software")
#define TXT_NET_FORMING         dxx_gettext(246, "   FORMING, level:")
#define TXT_NET_PLAYERS         dxx_gettext(247, "players:")
#define TXT_NET_JOIN            dxx_gettext(248, "   OPEN,    level:")
#define TXT_NET_CLOSED          dxx_gettext(249, "   CLOSED")
#define TXT_NET_BETWEEN         dxx_gettext(250, "   BETWEEN LEVELS")
#define TXT_NET_LEAVE           dxx_gettext(251, "\nESC to leave netgame")
#define TXT_NET_WAITING         dxx_gettext(252, "Waiting for signal from")
#define TXT_NET_TO_ENTER        dxx_gettext(253, "to enter the mine")
#define TXT_NET_SEARCHING       dxx_gettext(254, "Searching for Netgames...")
#define TXT_INVALID_CHOICE      dxx_gettext(255, "That choice is invalid.\n")
#define TXT_NET_GAME_BETWEEN2   dxx_gettext(256, "That game is between levels.\nWait for status to change\nand try joining again.")
#define TXT_VERSION_MISMATCH    dxx_gettext(257, "Your version of Descent 2\ndoes not match the version\nin use for that game.")
#define TXT_GAME_FULL           dxx_gettext(258, "That game is currently full.")
#define TXT_IN_PROGRESS         dxx_gettext(259, "You cannot join that\ngame in progress.")
#define TXT_DISCONNECTING       dxx_gettext(260, "has disconnected!")
#define TXT_SERIAL_OPEN_ERROR   dxx_gettext(261, "Error opening serial driver.\nCheck your serial parameters\nAnd free conventional memory.")
#define TXT_CARRIER_LOST        dxx_gettext(262, "Error!\nCarrier Lost.\n  Leaving Multiplayer game.")
#define TXT_ERROR_SERIAL_CFG    dxx_gettext(263, "Error writing to the file\nserial.cfg.  Can't save settings.")
#define TXT_ERR_SER_SETTINGS    dxx_gettext(264, "Error reading serial settings.\nUsing defaults.")
#define TXT_CONNECT_LOST        dxx_gettext(265, "No message received from\n%s for 10 seconds.\nConnection may be lost.")
#define TXT_READY_DESCENT       dxx_gettext(266, "Your opponent has selected\nstart game.  Are you\nready for descent?")
#define TXT_CLOSED_LINK         dxx_gettext(267, "Your opponent has disconnected.")
#define TXT_DIAL_MODEM          dxx_gettext(268, "Dial modem...")
#define TXT_ANSWER_MODEM        dxx_gettext(269, "Answer modem")
#define TXT_NULL_MODEM          dxx_gettext(270, "Establish null-modem link")
#define TXT_COM_SETTINGS        dxx_gettext(271, "COM settings...")
#define TXT_START_GAME          dxx_gettext(272, "Start game...")
#define TXT_SEND_MESSAGEP       dxx_gettext(273, "Send message...")
#define TXT_HANGUP_MODEM        dxx_gettext(274, "Hang up modem")
#define TXT_CLOSE_LINK          dxx_gettext(275, "Close link")
#define TXT_SERIAL              dxx_gettext(276, "Serial")
#define TXT_LINK_ACTIVE         dxx_gettext(277, "link active to")
#define TXT_MODEM               dxx_gettext(278, "Modem")
#define TXT_NOT_CONNECTED       dxx_gettext(279, "Not currently connected")
#define TXT_SERIAL_GAME         dxx_gettext(280, "Serial Game")
#define TXT_EXIT_WILL_CLOSE     dxx_gettext(281, "Exiting this menu\nwill close the link\nContinue?")
#define TXT_BAUD_RATE           dxx_gettext(282, "Baud Rate:")
#define TXT_MODEM_INIT_STRING   dxx_gettext(283, "Modem Init String:")
#define TXT_ACCEPT_SAVE         dxx_gettext(284, "Accept and Save")
#define TXT_SERIAL_SETTINGS     dxx_gettext(285, "Serial Settings")
#define TXT_WARNING_16550       dxx_gettext(286, "Warning!\nYou must have a\n16550 UART\nto use 38400")
#define TXT_DIFFICULTY          dxx_gettext(287, "Difficulty:")
#define TXT_SERIAL_GAME_SETUP   dxx_gettext(288, "Serial Game Setup")
#define TXT_ONLY_ANARCHY        dxx_gettext(289, "Only Anarchy mode is\navailable in the\nDemo version.")
#define TXT_SAVE                dxx_gettext(290, "Save!")
#define TXT_ACCEPT              dxx_gettext(291, "Accept")
#define TXT_SEL_NUMBER_EDIT     dxx_gettext(292, "Select a number to edit")
#define TXT_EDIT_PHONE_ENTRY    dxx_gettext(293, "Edit phonebook entry")
#define TXT_MANUAL_ENTRY        dxx_gettext(294, "Manual Entry")
#define TXT_EDIT_PHONEBOOK      dxx_gettext(295, "Edit Phonebook")
#define TXT_SEL_NUMBER_DIAL     dxx_gettext(296, "Select a number to dial")
#define TXT_ENTER_NUMBER_DIAL   dxx_gettext(297, "Enter number to dial")
#define TXT_NO_DIAL_TONE        dxx_gettext(298, "NO DIAL TONE")
#define TXT_BUSY                dxx_gettext(299, "BUSY")
#define TXT_NO_ANSWER           dxx_gettext(300, "NO ANSWER")
#define TXT_NO_CARRIER          dxx_gettext(301, "NO CARRIER")
#define TXT_VOICE               dxx_gettext(302, "VOICE")
#define TXT_ERR_MODEM_RETURN    dxx_gettext(303, "Error!\nModem returned:")
#define TXT_CONNECT             dxx_gettext(304, "CONNECT")
#define TXT_BAUD_GREATER_9600   dxx_gettext(305, "Error!\nYou must establish a\n9600 baud connection\nor higher to play.")
#define TXT_RING                dxx_gettext(306, "RING")
#define TXT_NO_SERIAL_OPT       dxx_gettext(307, "Descent 2 was started with\nthe serial option disabled.")
#define TXT_RESET_MODEM         dxx_gettext(308, "Resetting Modem")
#define TXT_NO_MODEM            dxx_gettext(309, "No modem detected.\nCheck your com settings.")
#define TXT_NO_PHONENUM         dxx_gettext(310, "That phone number\nis not defined.\n")
#define TXT_DIALING             dxx_gettext(311, "Dialing:")
#define TXT_ESC_ABORT           dxx_gettext(312, "ESC to abort")
#define TXT_WAITING_FOR_ANS     dxx_gettext(313, "Waiting for answer...")
#define TXT_WAITING_FOR_CALL    dxx_gettext(314, "Waiting for call...")
#define TXT_WAITING_FOR_CARR    dxx_gettext(315, "Waiting for carrier...")
#define TXT_FAILED_TO_NEGOT     dxx_gettext(316, "Failed to negotiate!")
#define TXT_NEGOTIATION_FAIL    dxx_gettext(317, "Negotiation with remote player\nfailed.  Cannot continue.")
#define TXT_FATAL_ERROR_LEVEL   dxx_gettext(318, "Fatal error.\nMy level =")
#define TXT_OTHER_LEVEL         dxx_gettext(319, "Other level =")
#define TXT_YOUR_LEVEL          dxx_gettext(320, "Your level ")
#define TXT_LVL_NO_MATCH        dxx_gettext(321, "file does\nnot match")
#define TXT_CHECK_VERSION       dxx_gettext(322, "'s.\nCheck your versions.")
#define TXT_DESCENT_NO_MATCH    dxx_gettext(323, "Your version of Descent 2\ndoes not match that of\nyour opponent.")
#define TXT_OPPONENT_NO_READY   dxx_gettext(324, "Your opponent is not\nready to start the game.")
#define TXT_WAIT_OPPONENT       dxx_gettext(325, "Waiting for remote player...")
#define TXT_LOCK                dxx_gettext(326, "LOCK")
#define TXT_DEATHS              dxx_gettext(327, "DEATHS")
#define TXT_LIVES               dxx_gettext(328, "LIVES")
#define TXT_LVL                 dxx_gettext(329, "LVL")
#define TXT_QUAD                dxx_gettext(330, "QUAD")
#define TXT_REAR_VIEW           dxx_gettext(331, "REAR VIEW")
#define TXT_DIFFICULTY_1        dxx_gettext(332, "Trainee")
#define TXT_DIFFICULTY_2        dxx_gettext(333, "Rookie")
#define TXT_DIFFICULTY_3        dxx_gettext(334, "Hotshot")
#define TXT_DIFFICULTY_4        dxx_gettext(335, "Ace")
#define TXT_DIFFICULTY_5        dxx_gettext(336, "Insane")
#define TXT_DETAIL_1            dxx_gettext(337, "Lowest")
#define TXT_DETAIL_2            dxx_gettext(338, "Low")
#define TXT_DETAIL_3            dxx_gettext(339, "Medium")
#define TXT_DETAIL_4            dxx_gettext(340, "High")
#define TXT_DETAIL_5            dxx_gettext(341, "Highest")
#define TXT_DETAIL_CUSTOM_      dxx_gettext(342, "Custom...")
#define TXT_LOAD_GAME           dxx_gettext(343, "Load Game...")
#define TXT_MULTIPLAYER_        dxx_gettext(344, "Multiplayer...")
#define TXT_OPTIONS_            dxx_gettext(345, "Options...")
#define TXT_CHANGE_PILOTS       dxx_gettext(346, "Change Pilots...")
#define TXT_VIEW_DEMO           dxx_gettext(347, "View Demo...")
#define TXT_CREDITS             dxx_gettext(348, "Credits")
#define TXT_ORDERING_INFO       dxx_gettext(349, "Ordering Info")
#define TXT_SELECT_DEMO         dxx_gettext(350, "Select Demo\n<Ctrl-D> deletes\n<Ctrl-C> converts format\nIntel <-> PowerPC")
#define TXT_DIFFICULTY_LEVEL    dxx_gettext(351, "Difficulty Level")
#define TXT_SET_TO              dxx_gettext(352, "set to")
#define TXT_DETAIL_LEVEL        dxx_gettext(353, "Detail Level")
#define TXT_OBJ_COMPLEXITY      dxx_gettext(354, "Object Complexity")
#define TXT_OBJ_DETAIL          dxx_gettext(355, "Object Detail")
#define TXT_WALL_DETAIL         dxx_gettext(356, "Wall Detail")
#define TXT_WALL_RENDER_DEPTH   dxx_gettext(357, "Wall Render Depth")
#define TXT_DEBRIS_AMOUNT       dxx_gettext(358, "Amount of Debris")
#define TXT_SOUND_CHANNELS      dxx_gettext(359, "Sound Channels")
#define TXT_LO_HI               dxx_gettext(360, "                       LO  HI")
#define TXT_DETAIL_CUSTOM       dxx_gettext(361, "Detail Level Customization")
#define TXT_START_ANY_LEVEL     dxx_gettext(362, "You may start on\nany level up to")
#define TXT_SELECT_START_LEV    dxx_gettext(363, "New Game\n\nSelect starting level")
#define TXT_ENTER_TO_CONT       dxx_gettext(364, "Press ENTER to Continue")
#define TXT_INVALID_LEVEL       dxx_gettext(365, "Invalid level number")
#define TXT_ERR_LOADING_GAME    dxx_gettext(366, "Error Loading Game")
#define TXT_SAVE_GAME_SLOTS     dxx_gettext(367, "Save Game\n\nSelect slot & enter save name\nPress ESC if you don't want to save")
#define TXT_SAVE_ERROR          dxx_gettext(368, "Save Error!")
#define TXT_FX_VOLUME           dxx_gettext(369, "FX Volume")
#define TXT_MUSIC_VOLUME        dxx_gettext(370, "Music Volume")
#define TXT_REVERSE_STEREO      dxx_gettext(371, "Reverse Stereo")
#define TXT_BRIGHTNESS          dxx_gettext(372, "Brightness")
#define TXT_CONTROLS_           dxx_gettext(373, "Controls...")
#define TXT_DETAIL_LEVELS       dxx_gettext(374, "Detail levels...")
#define TXT_CAL_JOYSTICK        dxx_gettext(375, "Calibrate Joystick")
#define TXT_JOYS_SENSITIVITY    dxx_gettext(376, "Joystick/Mouse\nSensitivity")
#define TXT_START_IPX_NET_GAME  dxx_gettext(377, "Start an IPX network game...")
#define TXT_JOIN_IPX_NET_GAME   dxx_gettext(378, "Join an IPX network game...\n")
#define TXT_MODEM_GAME          dxx_gettext(379, "Modem/serial game...")
#define TXT_MULTIPLAYER         dxx_gettext(380, "Multiplayer")
#define TXT_CONTINUE            dxx_gettext(381, "Continue")
#define TXT_CANT_PLAYBACK       dxx_gettext(382, "Can't playback demo")
#define TXT_DEMO_CORRUPT        dxx_gettext(383, "because\ndemo file contains corrupt\ndata.")
#define TXT_DEMO_OLD            dxx_gettext(384, "because\ndemo version is too old.")
#define TXT_RECORDED            dxx_gettext(385, "recorded")
#define TXT_WITH_REGISTERED     dxx_gettext(386, "with the Commercial version")
#define TXT_WITH_SHAREWARE      dxx_gettext(387, "with the Demo version")
#define TXT_OF_DESCENT          dxx_gettext(388, "of Descent 2.")
#define TXT_LEVEL_CANT_LOAD     dxx_gettext(389, "because\nlevel cannot be loaded.")
#define TXT_DEMO_OLD_CORRUPT    dxx_gettext(390, "Demo is probably too old\nor contains corrupt data.")
#define TXT_DEMO_ERR_READING    dxx_gettext(391, "Error reading demo data.")
#define TXT_SAVE_DEMO_AS        dxx_gettext(392, "Save Demo as:")
#define TXT_DEMO_USE_LETTERS    dxx_gettext(393, "Please use only letters,\nnumbers and the underscore\ncharacter in filename.")
#define TXT_AUTOMAP             dxx_gettext(394, "Automap")
#define TXT_TURN_SHIP           dxx_gettext(395, "Flight controls move - Accel/Reverse zooms in/out")
#define TXT_SLIDE_UPDOWN        dxx_gettext(396, "+/- Changes viewing distance")
#define TXT_LEVEL               dxx_gettext(397, "Level")
#define TXT_PITCH_FORWARD       dxx_gettext(398, "Pitch forward")
#define TXT_PITCH_BACKWARD      dxx_gettext(399, "Pitch backward")
#define TXT_TURN_LEFT           dxx_gettext(400, "Turn left")
#define TXT_TURN_RIGHT          dxx_gettext(401, "Turn right")
#define TXT_SLIDE_ON            dxx_gettext(402, "Slide on")
#define TXT_SLIDE_LEFT          dxx_gettext(403, "Slide left")
#define TXT_SLIDE_RIGHT         dxx_gettext(404, "Slide right")
#define TXT_SLIDE_UP            dxx_gettext(405, "Slide up")
#define TXT_SLIDE_DOWN          dxx_gettext(406, "Slide down")
#define TXT_BANK_ON             dxx_gettext(407, "Bank on")
#define TXT_BANK_LEFT           dxx_gettext(408, "Bank left")
#define TXT_BANK_RIGHT          dxx_gettext(409, "Bank right")
#define TXT_FIRE_PRIMARY        dxx_gettext(410, "Fire primary")
#define TXT_FIRE_SECONDARY      dxx_gettext(411, "Fire secondary")
#define TXT_FIRE_FLARE          dxx_gettext(412, "Fire flare")
#define TXT_ACCELERATE          dxx_gettext(413, "Accelerate")
#define TXT_REVERSE             dxx_gettext(414, "reverse")
#define TXT_DROP_BOMB           dxx_gettext(415, "Drop Bomb")
#define TXT_CRUISE_FASTER       dxx_gettext(416, "Cruise Faster")
#define TXT_CRUISE_SLOWER       dxx_gettext(417, "Cruise Slower")
#define TXT_CRUISE_OFF          dxx_gettext(418, "Cruise Off")
#define TXT_PITCH_UD            dxx_gettext(419, "Pitch U/D")
#define TXT_TURN_LR             dxx_gettext(420, "Turn L/R")
#define TXT_SLIDE_LR            dxx_gettext(421, "Slide L/R")
#define TXT_SLIDE_UD            dxx_gettext(422, "Slide U/D")
#define TXT_BANK_LR             dxx_gettext(423, "Bank L/R")
#define TXT_THROTTLE            dxx_gettext(424, "throttle")
#define TXT_TEAM_ATLEAST_THREE  dxx_gettext(425, "You must select at least three\nplayers to start a team game")
#define TXT_NET_DISCONNECTED    dxx_gettext(426, "Disconnected")
#define TXT_NET_PLAYING         dxx_gettext(427, "Playing")
#define TXT_NET_ESCAPED         dxx_gettext(428, "Escaped")
#define TXT_NET_DIED            dxx_gettext(429, "Died in mine")
#define TXT_NET_FOUND_SECRET    dxx_gettext(430, "Found secret level")
#define TXT_NET_ESCAPE_TUNNEL   dxx_gettext(431, "In Escape tunnel")
#define TXT_NET_RESERVED        dxx_gettext(432, "Viewing Level Scores")
#define TXT_WOWIE_ZOWIE         dxx_gettext(433, "Wowie Zowie Weapons!!")
#define TXT_ALL_KEYS            dxx_gettext(434, "All Keys!")
#define TXT_CLOAK               dxx_gettext(435, "Cloak")
#define TXT_FULL_SHIELDS        dxx_gettext(436, "Shields Recharged!")
#define TXT_ON                  dxx_gettext(437, "On")
#define TXT_OFF                 dxx_gettext(438, "Off")
#define TXT_NOT_IN_SHAREWARE    dxx_gettext(439, "Not available in Demo version")
#define TXT_GAME_OVER           dxx_gettext(440, "Game Over")
#define TXT_SELECT_PILOT        dxx_gettext(441, "Select pilot\n<Ctrl-D> deletes")
#define TXT_ENTER_PILOT_NAME    dxx_gettext(442, "Enter your pilot name:")
#define TXT_PLAYER              dxx_gettext(443, "Player")
#define TXT_ALREADY_EXISTS      dxx_gettext(444, "already exists!")
#define TXT_LOADING             dxx_gettext(445, "Prepare for Descent...")
#define TXT_FULL_RESCUE_BONUS   dxx_gettext(446, "Full Rescue bonus:    \t")
#define TXT_SHIELD_BONUS        dxx_gettext(447, "Shield bonus:\t")
#define TXT_ENERGY_BONUS        dxx_gettext(448, "Energy bonus:\t")
#define TXT_HOSTAGE_BONUS       dxx_gettext(449, "Hostage bonus:    \t")
#define TXT_SKILL_BONUS         dxx_gettext(450, "Skill Bonus:\t")
#define TXT_TOTAL_BONUS         dxx_gettext(451, "Total Bonus:\t")
#define TXT_TOTAL_SCORE         dxx_gettext(452, "Total Score:\t")
#define TXT_SECRET_LEVEL        dxx_gettext(453, "Secret Level")
#define TXT_COMPLETE            dxx_gettext(454, "Complete")
#define TXT_DESTROYED           dxx_gettext(455, "Destroyed!")
#define TXT_SAVE_GAME           dxx_gettext(456, "Save Game?")
#define TXT_PRESS_CTRL_R        dxx_gettext(457, "Press <Ctrl-R> to reset")
#define TXT_RESET_HIGH_SCORES   dxx_gettext(458, "Reset the high scores?")
#define TXT_YOU_WERE            dxx_gettext(459, "You were")
#define TXT_WAS                 dxx_gettext(460, "was")
#define TXT_KILLED_BY_NONPLAY   dxx_gettext(461, "killed by the reactor")
#define TXT_IMPORTANT_NOTE      dxx_gettext(462, "IMPORTANT NOTE")
#define TXT_FCS                 dxx_gettext(463, "Use this option for the FCS\nor Wingman Extreme when\nused alone.  If you\nalso use a WCS or FLCS, you\nmust select joystick.\nSee manual/readme for details.\n")
#define TXT_PRESS_ANY_KEY       dxx_gettext(464, "Press any key or button to continue...")
#define TXT_HOSTAGE_RESCUED     dxx_gettext(465, "Hostage rescued!")
#define TXT_INIT_VICTOR         dxx_gettext(466, "Initializing VictorMaxx tracking on COM port")
#define TXT_N                   dxx_gettext(467, "N")
#define TXT_Y                   dxx_gettext(468, "Y")
#define TXT_ANY_LEVEL           dxx_gettext(469, "Start at any level.")
#define TXT_SHAREWARE_DONE      dxx_gettext(470, "Demo Levels Completed")
#define TXT_PRESS_NEW_KEY       dxx_gettext(471, "Press new key")
#define TXT_PRESS_NEW_JBUTTON   dxx_gettext(472, "Press new joystick button")
#define TXT_PRESS_NEW_MBUTTON   dxx_gettext(473, "Press new mouse button")
#define TXT_MOVE_NEW_JOY_AXIS   dxx_gettext(474, "Move new joystick axis")
#define TXT_MOVE_NEW_MSE_AXIS   dxx_gettext(475, "Move new mouse axis")
#define TXT_USING_VFX1          dxx_gettext(476, "Using VFX1 Head Tracking...Press Shift+Z during game to set zero.")
#define TXT_VFX1_ERROR1         dxx_gettext(477, "Error: Can't use VFX1 head tracking because no head tracking device\nwas found.")
#define TXT_VFX1_ERROR2         dxx_gettext(478, "Error: Can't use VFX1 head tracking because VFX1.COM does not\nappear to be loaded!")
#define TXT_KCONFIG_STRING_1    dxx_gettext(479, "Enter changes, ^D deletes, ^R resets defaults, Esc exits")
#define TXT_BUTTONS             dxx_gettext(480, " Buttons ")
#define TXT_AXES                dxx_gettext(481, " Axes ")
#define TXT_AXIS                dxx_gettext(482, "Axis")
#define TXT_INVERT              dxx_gettext(483, "Invert?")
#define TXT_BTN_1               dxx_gettext(484, "BTN 1")
#define TXT_BTN_2               dxx_gettext(485, "BTN 2")
#define TXT_BTN_3               dxx_gettext(486, "BTN 3")
#define TXT_BTN_4               dxx_gettext(487, "BTN 4")
#define TXT_TRIG                dxx_gettext(488, "TRIG")
#define TXT_HAT_L               dxx_gettext(489, "HAT \x81""")
#define TXT_HAT_D               dxx_gettext(490, "HAT \x80""")
#define TXT_HAT_R               dxx_gettext(491, "HAT \x7f""")
#define TXT_HAT_U               dxx_gettext(492, "HAT \x82""")
#define TXT_LEFT                dxx_gettext(493, "LEFT")
#define TXT_RIGHT               dxx_gettext(494, "RIGHT")
#define TXT_MID                 dxx_gettext(495, "MID")
#define TXT_UP                  dxx_gettext(496, "UP")
#define TXT_DOWN                dxx_gettext(497, "DOWN")
#define TXT_X1                  dxx_gettext(498, "X1")
#define TXT_Y1                  dxx_gettext(499, "Y1")
#define TXT_X2                  dxx_gettext(500, "X2")
#define TXT_Y2                  dxx_gettext(501, "Y2")
#define TXT_L_R                 dxx_gettext(502, "L/R")
#define TXT_F_B                 dxx_gettext(503, "F/B")
#define TXT_FORWARD             dxx_gettext(504, "forward")
#define TXT_MOVE_THROTTLE_F     dxx_gettext(505, "Move throttle all\nthe way forward\nand press any button")
#define TXT_MOVE_THROTTLE_R     dxx_gettext(506, "Move throttle all\nthe way back\nand press any button")
#define TXT_MOVE_THROTTLE_C     dxx_gettext(507, "Move throttle to\nits center and\npress any button")
#define TXT_REACTOR_EXPLODED    dxx_gettext(508, "Reactor has exploded.")
#define TXT_TIME_REMAINING      dxx_gettext(509, "Time Remaining")
#define TXT_SECONDS             dxx_gettext(510, "seconds.")
#define TXT_DEMO_WRITE_ERROR    dxx_gettext(511, "Error writing demo file.  Current")
#define TXT_DEMO_SIZE           dxx_gettext(512, "demo size is")
#define TXT_DEMO_SAVE_BAD       dxx_gettext(513, "You are nearly out of space on\nthe current device.  Enter demo\nname now or press ESC to delete\ndemo.")
#define TXT_BYTE_STR            dxx_gettext(514, "bytes.")
#define TXT_DIED_IN_MINE        dxx_gettext(515, "You died in the mine.\n\nYour ship and its contents\nwere incinerated.")
#define TXT_SHIP_BONUS          dxx_gettext(516, "Ship bonus:  \t")
#define TXT_PHONE_NUM           dxx_gettext(517, "Phone Number")
#define TXT_KILL_MATRIX_TITLE   dxx_gettext(518, "ANARCHY SUMMARY")
#define TXT_WAIT_FOR_OK         dxx_gettext(519, "Waiting for OK to\nstart game\n")
#define TXT_SURE_ABORT_SYNC     dxx_gettext(520, "Aborting will quit the game\nare you sure?")
#define TXT_ERROR_WRITING_PLR   dxx_gettext(521, "Error writing player file.\nUnable to save current player.\n")
#define TXT_SHIP_DESTROYED_0    dxx_gettext(522, "Ship destroyed!")
#define TXT_SHIP_DESTROYED_1    dxx_gettext(523, "Ship destroyed, 1 hostage lost!")
#define TXT_SHIP_DESTROYED_2    dxx_gettext(524, "Ship destroyed, %i hostages lost!")
#define TXT_NET_FULL            dxx_gettext(525, "This socket is already full.\nPlease choose a different\nsocket to start on.\n\n")
#define TXT_DEMO_NO_SPACE       dxx_gettext(526, "Not enough space on current\ndevice to start demo recording.")
#define TXT_HAT2_L              dxx_gettext(527, "HAT2\x81""")
#define TXT_HAT2_R              dxx_gettext(528, "HAT2\x7f""")
#define TXT_HAT2_U              dxx_gettext(529, "HAT2\x82""")
#define TXT_HAT2_D              dxx_gettext(530, "HAT2\x80""")
#define TXT_WARP_TO_LEVEL       dxx_gettext(531, "Warp to which level?")
#define TXT_TRADEMARK           dxx_gettext(532, "DESCENT is a trademark of Interplay Productions, Inc.")
#define TXT_NET_SYNC_FAILED     dxx_gettext(533, "Failed to join the netgame.\nYou are missing packets.  Check\nyour network card and\ntry again.")
#define TXT_DONE                dxx_gettext(534, "done")
#define TXT_I_AM_A              dxx_gettext(535, "I am a")
#define TXT_CHEATER             dxx_gettext(536, "CHEATER!")
#define TXT_LOADING_DATA        dxx_gettext(537, "Loading Data")
#define TXT_HELP_ALT_F2         dxx_gettext(538, "ALT-F2\t  Save Game")
#define TXT_HELP_ALT_F3         dxx_gettext(539, "ALT-F3\t  Load Game")
#define TXT_ONLY_REGISTERED     dxx_gettext(540, "Only in Registered version!")
#define TXT_CONCUSSION          dxx_gettext(541, "Concussion")
#define TXT_HOMING              dxx_gettext(542, "Homing")
#define TXT_PROXBOMB            dxx_gettext(543, "ProxBomb")
#define TXT_SMART               dxx_gettext(544, "SmrtMisl")
#define TXT_MEGA                dxx_gettext(545, "Mega")
#define TXT_NOMISSION4DEMO      dxx_gettext(546, "Mission '%s' not found.\nYou must have this mission\nfile in order to playback\nthis demo.")
#define TXT_SHOW_IDS            dxx_gettext(547, "All player callsigns on screen")
#define TXT_DUPLICATE_NAME      dxx_gettext(548, "There is already a game\nin progress with that name")
#define TXT_ANARCHY_ONLY_MISSION dxx_gettext(549, "This mission cannot be played\nin Coop or Robo-anarchy games")
#define TXT_START_NOWAIT        dxx_gettext(550, "Force level start")
#define TXT_QUITTING_NOW        dxx_gettext(551, "Quitting now means ending the\nentire netgame\n\nAre you sure?")
#define TXT_MISSION_NOT_FOUND   dxx_gettext(552, "The mission for that netgame\nis not installed on your\nsystem.  Cannot join.")
#define TXT_MULTI_MISSION       dxx_gettext(553, "Start Multiplayer Game\n\nSelect mission")
#define TXT_MISSION_ERROR       dxx_gettext(554, "Error loading mission file")
#define TXT_COM_CUSTOM_SETTINGS dxx_gettext(555, "Custom (return to set)")
#define TXT_COM_BASE            dxx_gettext(556, "Base address (in Hex)")
#define TXT_COM_IRQ             dxx_gettext(557, "IRQ Number")
#define TXT_RESET_DEFAULTS      dxx_gettext(558, "Reset to Default")
#define TXT_VALID_IRQS          dxx_gettext(559, "Valid IRQ values are 2-7")
#define TXT_NO_UART             dxx_gettext(560, "No UART was detected\nat those settings")
#define TXT_DEF_MACRO_1         dxx_gettext(561, "You will pay dearly for that!")
#define TXT_DEF_MACRO_2         dxx_gettext(562, "Revenge is mine!!")
#define TXT_DEF_MACRO_3         dxx_gettext(563, "Man I'm good!")
#define TXT_DEF_MACRO_4         dxx_gettext(564, "Its almost too easy!")
#define TXT_MISSION             dxx_gettext(565, "   Mission:")
#define TXT_AUTOMAP_MARKER      dxx_gettext(566, "1-9 selects marker to view   Ctrl-D deletes")
#define TXT_SECRET_EXIT         dxx_gettext(567, "Secret Teleporter found!\n\nProceed to Secret Level!")
#define TXT_SHOW_ON_MAP         dxx_gettext(568, "Show all players on automap")
#define TXT_KILLED_BY_ROBOT     dxx_gettext(569, "Killed by a robot")
#define TXT_BAUD                dxx_gettext(570, "Baud")
#define TXT_CONSISTENCY_ERROR   dxx_gettext(571, "A consistency error has been\ndetected in your network connection.\nCheck you hardware and re-join")
#define TXT_PRESS_ANY_KEY2      dxx_gettext(572, "Press any key to continue (Print Screen to save screenshot)")
#define TXT_DEMO_SAVE_NOSPACE   dxx_gettext(573, "An error occured while writing\ndemo.  Demo is likely corrupted.\nEnter demo name now or\npress ESC to delete demo.")
#define TXT_CNTRLCEN_INVUL      dxx_gettext(574, "The main reactor is invulnerable for")
#define TXT_NO_DESTSAT_LVL      dxx_gettext(575, "The level being loaded is not\navailable in Destination Saturn.\nUnable to continue demo playback.\n\nPress any key to continue.")
#define TXT_REACTOR_LIFE        dxx_gettext(576, "Reactor life")
#define TXT_MINUTES_ABBREV      dxx_gettext(577, "min")
#define TXT_CURRENT_IPX_SOCKET  dxx_gettext(578, "Current IPX Socket is default")
#define TXT_DOS_VERSION_1       dxx_gettext(579, "This program requires MS-DOS 5.0 or higher.\nYou are using MS-DOS")
#define TXT_DOS_VERSION_2       dxx_gettext(580, "You can use the -nodoscheck command line\nswitch to override this check, but it\nmay have unpredictable results, namely\nwith DOS file error handling.\n")
#define TXT_NOT_ENOUGH_HANDLES  dxx_gettext(581, "Not enough file handles!")
#define TXT_HANDLES_1           dxx_gettext(582, "of the necessary file handles\nthat Descent 2 requires to execute properly.  You will\nneed to increase the FILES=n line in your config.sys.")
#define TXT_HANDLES_2           dxx_gettext(583, "If you are running with a clean boot, then you will need\nto create a CONFIG.SYS file in your root directory, with\nthe line FILES=15 in it.  If you need help with this,\ncontact Interplay technical support.")
#define TXT_HANDLES_3           dxx_gettext(584, "You may also run with the -nofilecheck command line option\nthat will disable this check, but you might get errors\nwhen loading saved games or playing demos.")
#define TXT_AVAILABLE_MEMORY    dxx_gettext(585, "Available memory")
#define TXT_MEMORY_CONFIG       dxx_gettext(586, "more bytes of DOS memory needed!")
#define TXT_RECONFIGURE_VMM     dxx_gettext(587, "more bytes of virtual memory needed.  Reconfigure VMM.")
#define TXT_MORE_MEMORY         dxx_gettext(588, "more bytes of extended/expanded memory needed!")
#define TXT_MORE_MEMORY_2       dxx_gettext(589, "Or else you you need to use virtual memory (See README.TXT)")
#define TXT_PHYSICAL_MEMORY     dxx_gettext(590, "more bytes of physical memory needed!")
#define TXT_PHYSICAL_MEMORY_2   dxx_gettext(591, "Check to see that your virtual memory settings allow\nyou to use all of your physical memory (See README.TXT)")
#define TXT_INITIALIZING_DPMI   dxx_gettext(592, "Initializing DPMI services")
#define TXT_INITIALIZING_CRIT   dxx_gettext(593, "Initializing critical error handler")
#define TXT_IGLASSES            dxx_gettext(594, "Enables Virtual I/O Iglasses! stereo display")
#define TXT_VIOTRACK            dxx_gettext(595, "Enables Iglasses! head tracking via COM port")
#define TXT_KASAN               dxx_gettext(596, "Enables Kasan's 3dMax stereo display in low res.")
#define TXT_KASAN_2             dxx_gettext(597, "3DBios must be installed for 3dMax operation.")
#define TXT_3DMAX               dxx_gettext(598, "Enables Kasan's 3dMax stereo display in high res")
#define TXT_PRESS_ANY_KEY3      dxx_gettext(599, "Press any key for more options...")
#define TXT_SOCKET              dxx_gettext(600, "Enables dynamic socket changing")
#define TXT_NOFILECHECK         dxx_gettext(601, "Disables the file handles check")
#define TXT_VERBOSE_1           dxx_gettext(602, "Getting settings from DESCENT.CFG...")
#define TXT_VERBOSE_2           dxx_gettext(603, "Initializing timer system...")
#define TXT_VERBOSE_3           dxx_gettext(604, "Initializing keyboard handler...")
#define TXT_VERBOSE_4           dxx_gettext(605, "Initializing mouse handler...")
#define TXT_VERBOSE_5           dxx_gettext(606, "Mouse support disabled...")
#define TXT_VERBOSE_6           dxx_gettext(607, "Initializing joystick handler...")
#define TXT_VERBOSE_7           dxx_gettext(608, "Slow joystick reading enabled...")
#define TXT_VERBOSE_8           dxx_gettext(609, "Polled joystick reading enabled...")
#define TXT_VERBOSE_9           dxx_gettext(610, "BIOS joystick reading enabled...")
#define TXT_VERBOSE_10          dxx_gettext(611, "Joystick support disabled...")
#define TXT_VERBOSE_11          dxx_gettext(612, "Initializing divide by zero handler...")
#define TXT_INITIALIZING_NETWORK dxx_gettext(613, "Initializing network...")
#define TXT_IPX_CHANNEL         dxx_gettext(614, "Using IPX network support on channel")
#define TXT_NO_NETWORK          dxx_gettext(615, "No IPX compatible network found.")
#define TXT_SOCKET_ERROR        dxx_gettext(616, "Error opening socket")
#define TXT_MEMORY_IPX          dxx_gettext(617, "Not enough low memory for IPX buffers.")
#define TXT_ERROR_IPX           dxx_gettext(618, "Error initializing IPX.  Error code:")
#define TXT_NETWORK_DISABLED    dxx_gettext(619, "Network support disabled...")
#define TXT_INITIALIZING_GRAPHICS dxx_gettext(620, "Initializing graphics system...")
#define TXT_SOUND_ERROR_OPEN    dxx_gettext(621, "SOUND: Error opening")
#define TXT_SOUND_ERROR_LOCK    dxx_gettext(622, "SOUND: Error locking down instruments")
#define TXT_SOUND_ERROR_HMI     dxx_gettext(623, "SOUND: (HMI)")
#define TXT_SOUND_ERROR_LOCK_DRUMS dxx_gettext(624, "SOUND: Error locking down drums")
#define TXT_SOUND_ERROR_MIDI    dxx_gettext(625, "SOUND: Error locking midi track map!")
#define TXT_SOUND_ERROR_MIDI_CALLBACK dxx_gettext(626, "SOUND: Error locking midi callback function!")
#define TXT_EXTERNAL_CONTROL    dxx_gettext(627, "Using external control:")
#define TXT_IGLASSES_ERROR_1    dxx_gettext(628, "Invalid serial port parameter for -itrak!")
#define TXT_IGLASSES_INIT       dxx_gettext(629, "Initializing i-glasses! head tracking on serial port %d")
#define TXT_IGLASSES_ON         dxx_gettext(630, "Make sure the glasses are turned on!")
#define TXT_PRESS_ESC_TO_ABORT  dxx_gettext(631, "Press ESC to abort")
#define TXT_SERIAL_FAILURE      dxx_gettext(632, "Failed to open serial port.  Status =")
#define TXT_MESSAGE             dxx_gettext(633, "Message")
#define TXT_MACRO               dxx_gettext(634, "Macro")
#define TXT_ERROR_SERIAL_LOCK   dxx_gettext(635, "Error locking serial interrupt routine!")
#define TXT_ERROR_SERIAL_LOCK_2 dxx_gettext(636, "Error locking serial port data!")
#define TXT_NO_LUNACY           dxx_gettext(637, "Robots are normal")
#define TXT_LUNACY              dxx_gettext(638, "Robots move fast, fire seldom")
#define TXT_ROBOT_PAINTING_OFF  dxx_gettext(639, "Robot painting OFF")
#define TXT_ROBOT_PAINTING_ON   dxx_gettext(640, "Robot painting with texture %d")
#define TXT_START_TCP_NET_GAME  dxx_gettext(641, "Start a TCPIP network game...")
#define TXT_JOIN_TCP_NET_GAME   dxx_gettext(642, "Join a TCPIP network game...\n")
#define TXT_AFTERBURNER         dxx_gettext(643, "Afterburner")

//hey: there's a lot of empty slots up from 173-192, where
//the commandline help used to be.  Add new things there

#define N_TEXT_STRINGS          649

#ifdef __GNUC__
__extern_always_inline char * dxx_gettext(unsigned idx, const char *fmt) __attribute__((format_arg(2)));

#define PRIMARY_WEAPON_NAMES(u)	({	\
	const char *__dxx_txt_lookup;	\
	switch(u)	\
	{	\
		default:	\
		case 0: __dxx_txt_lookup = TXT_W_LASER; break;	\
		case 1: __dxx_txt_lookup = TXT_W_VULCAN; break;	\
		case 2: __dxx_txt_lookup = TXT_W_SPREADFIRE; break;	\
		case 3: __dxx_txt_lookup = TXT_W_PLASMA; break;	\
		case 4: __dxx_txt_lookup = TXT_W_FUSION; break;	\
		case 5: __dxx_txt_lookup = TXT_W_SLASER; break;	\
		case 6: __dxx_txt_lookup = TXT_W_SVULCAN; break;	\
		case 7: __dxx_txt_lookup = TXT_W_SSPREADFIRE; break;	\
		case 8: __dxx_txt_lookup = TXT_W_SPLASMA; break;	\
		case 9: __dxx_txt_lookup = TXT_W_SFUSION; break;	\
	}	\
	__dxx_txt_lookup;	\
	})
#define SECONDARY_WEAPON_NAMES(u)	({	\
	const char *__dxx_txt_lookup;	\
	switch(u)	\
	{	\
		default:	\
		case 0: __dxx_txt_lookup = TXT_W_C_MISSILE; break;	\
		case 1: __dxx_txt_lookup = TXT_W_H_MISSILE; break;	\
		case 2: __dxx_txt_lookup = TXT_W_P_BOMB; break;	\
		case 3: __dxx_txt_lookup = TXT_W_S_MISSILE; break;	\
		case 4: __dxx_txt_lookup = TXT_W_M_MISSILE; break;	\
		case 5: __dxx_txt_lookup = TXT_W_SMISSILE1; break;	\
		case 6: __dxx_txt_lookup = TXT_W_SMISSILE2; break;	\
		case 7: __dxx_txt_lookup = TXT_W_SMISSILE3; break;	\
		case 8: __dxx_txt_lookup = TXT_W_SMISSILE4; break;	\
		case 9: __dxx_txt_lookup = TXT_W_SMISSILE5; break;	\
	}	\
	__dxx_txt_lookup;	\
	})
#define PRIMARY_WEAPON_NAMES_SHORT(u)	({	\
	const char *__dxx_txt_lookup;	\
	switch(u)	\
	{	\
		default:	\
		case 0: __dxx_txt_lookup = TXT_W_LASER_S; break;	\
		case 1: __dxx_txt_lookup = TXT_W_VULCAN_S; break;	\
		case 2: __dxx_txt_lookup = TXT_W_SPREADFIRE_S; break;	\
		case 3: __dxx_txt_lookup = TXT_W_PLASMA_S; break;	\
		case 4: __dxx_txt_lookup = TXT_W_FUSION_S; break;	\
		case 5: __dxx_txt_lookup = TXT_W_SLASER_S; break;	\
		case 6: __dxx_txt_lookup = TXT_W_SVULCAN_S; break;	\
		case 7: __dxx_txt_lookup = TXT_W_SSPREADFIRE_S; break;	\
		case 8: __dxx_txt_lookup = TXT_W_SPLASMA_S; break;	\
		case 9: __dxx_txt_lookup = TXT_W_SFUSION_S; break;	\
	}	\
	__dxx_txt_lookup;	\
	})
#define SECONDARY_WEAPON_NAMES_SHORT(u)	({	\
	const char *__dxx_txt_lookup;	\
	switch(u)	\
	{	\
		default:	\
		case 0: __dxx_txt_lookup = TXT_W_C_MISSILE_S; break;	\
		case 1: __dxx_txt_lookup = TXT_W_H_MISSILE_S; break;	\
		case 2: __dxx_txt_lookup = TXT_W_P_BOMB_S; break;	\
		case 3: __dxx_txt_lookup = TXT_W_S_MISSILE_S; break;	\
		case 4: __dxx_txt_lookup = TXT_W_M_MISSILE_S; break;	\
		case 5: __dxx_txt_lookup = TXT_W_SMISSILE1_S; break;	\
		case 6: __dxx_txt_lookup = TXT_W_SMISSILE2_S; break;	\
		case 7: __dxx_txt_lookup = TXT_W_SMISSILE3_S; break;	\
		case 8: __dxx_txt_lookup = TXT_W_SMISSILE4_S; break;	\
		case 9: __dxx_txt_lookup = TXT_W_SMISSILE5_S; break;	\
	}	\
	__dxx_txt_lookup;	\
	})
#define NET_DUMP_STRINGS(u)	({	\
	const char *__dxx_txt_lookup;	\
	switch(u)	\
	{	\
		default:	\
		case 0: __dxx_txt_lookup = TXT_NET_GAME_CLOSED; break;	\
		case 1: __dxx_txt_lookup = TXT_NET_GAME_FULL; break;	\
		case 2: __dxx_txt_lookup = TXT_NET_GAME_BETWEEN; break;	\
		case 3: __dxx_txt_lookup = TXT_NET_GAME_NSELECT; break;	\
		case 4: __dxx_txt_lookup = TXT_NET_GAME_NSTART; break;	\
		case 5: __dxx_txt_lookup = TXT_NET_GAME_CONNECT; break;	\
		case 6: __dxx_txt_lookup = TXT_NET_GAME_WRONGLEV; break;	\
	}	\
	__dxx_txt_lookup;	\
	})
#define MENU_DIFFICULTY_TEXT(u)	({	\
	char *__dxx_txt_lookup;	\
	switch(u)	\
	{	\
		default:	\
		case 0: __dxx_txt_lookup = TXT_DIFFICULTY_1; break;	\
		case 1: __dxx_txt_lookup = TXT_DIFFICULTY_2; break;	\
		case 2: __dxx_txt_lookup = TXT_DIFFICULTY_3; break;	\
		case 3: __dxx_txt_lookup = TXT_DIFFICULTY_4; break;	\
		case 4: __dxx_txt_lookup = TXT_DIFFICULTY_5; break;	\
	}	\
	__dxx_txt_lookup;	\
	})
#define MENU_DETAIL_TEXT(u)	({	\
	const char *__dxx_txt_lookup;	\
	switch(u)	\
	{	\
		default:	\
		case 0: __dxx_txt_lookup = TXT_DETAIL_1;	\
		case 1: __dxx_txt_lookup = TXT_DETAIL_2;	\
		case 2: __dxx_txt_lookup = TXT_DETAIL_3;	\
		case 3: __dxx_txt_lookup = TXT_DETAIL_4;	\
		case 4: __dxx_txt_lookup = TXT_DETAIL_5;	\
	}	\
	__dxx_txt_lookup;	\
	})

__extern_always_inline char * dxx_gettext(unsigned idx, const char *fmt)
{
	(void)fmt;
	return Text_string[idx];
}
#else

// Weapon names.
#define PRIMARY_WEAPON_NAMES(weapon_num) (*(&TXT_W_LASER + (weapon_num)))
#define SECONDARY_WEAPON_NAMES(weapon_num) (*(&TXT_W_C_MISSILE + (weapon_num)))
#define PRIMARY_WEAPON_NAMES_SHORT(weapon_num) (*(&TXT_W_LASER_S + (weapon_num)))
#define SECONDARY_WEAPON_NAMES_SHORT(weapon_num) (*(&TXT_W_C_MISSILE_S + (weapon_num)))

// Network dump strings
#define NET_DUMP_STRINGS(dump_num) (*(&TXT_NET_GAME_CLOSED + (dump_num)))
#define MENU_DIFFICULTY_TEXT(difficulty) (*(&TXT_DIFFICULTY_1 + (difficulty)))
#define MENU_DETAIL_TEXT(detail) (*(&TXT_DETAIL_1 + (detail)))
#define dxx_gettext(I,F)	(Text_string[(I)])
#endif

void decode_text_line(char *text_line); // decryption for bitmaps.tbl
void decode_text(char *text, int len);  // decryption for briefings, etc.
void load_text(void);
void free_text();

#endif /* _TEXT_H */
