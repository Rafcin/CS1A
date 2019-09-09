#!/bin/bash
RED='\033[0;31m'
GREEN='\033[0;32m'
LGREEN='\033[1;32m'
YELLOW='\033[1;33m'
NC='\033[0m' 
GREY='\033[0;37m'
clear
printf "${GREEN}--------------------------------------------------------------------\n"
printf "${GREEN} Installer script created by Raf. Installs the following packages.\n"
printf "${YELLOW}  Guake ${NC}- ${LGREEN}Quick pullup shell\n"
printf "${YELLOW}  Vim ${NC}- ${LGREEN}Shell editor\n"
printf "${YELLOW}  Sublime ${NC}- ${LGREEN}Editor\n"
printf "${YELLOW}  VirtualBox Tools ${NC}- ${LGREEN}Fixes screen size and frame rate.\n"
printf "${YELLOW}  Cmake Tools ${NC}- ${LGREEN}All tools you need for C++\n"
printf "${GREEN}--------------------------------------------------------------------\n"

read -p "Continue Install? (Y/N)? " CONT
if [ "$CONT" = "Y" ]; then


	printf "${GREY}Starting install proccess.\n"
	sudo apt update

	#Install VirtualBox Extensions
	sudo apt-get install virtualbox-guest-additions-iso
	sudo apt-get update 
	sudo apt-get dist-upgrade
	sudo apt-get install virtualbox-guest-x11

	#Install Vim
	sudo apt-get install vim

	#Install Guake
	sudo apt-get install guake

	#Install Sublime
	wget -qO - https://download.sublimetext.com/sublimehq-pub.gpg | sudo apt-key add -
	echo "deb https://download.sublimetext.com/ apt/stable/" | sudo tee /etc/apt/sources.list.d/sublime-text.list
	sudo apt-get update
	sudo apt-get install sublime-text

	#Install Cmake Tools
	sudo apt install build-essential
	sudo apt-get install manpages-dev
	sudo apt-get install ccmake
	sudo apt-get install cmake
	sudo apt-get install g++

else
  printf "${RED}Exit.\n";
fi
