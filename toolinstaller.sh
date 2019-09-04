#!/bin/bash
RED='\033[0;31m'
NC='\033[0m' # No Color
GREEN='\033[1;32m'
YELLOW='\033[1;33m'

sudo apt-get update -y --quiet
sudo apt-get install gcc -y --quiet
sudo apt-get install g++ -y --quiet

echo -e "${YELLOW}Installed ${NC}GCC ${YELLOW}and ${NC}G++"

wget -qO - https://download.sublimetext.com/sublimehq-pub.gpg | sudo apt-key add -
echo "deb https://download.sublimetext.com/ apt/stable/" | sudo tee /etc/apt/sources.list.d/sublime-text.list

sudo apt-get update -y --quiet
sudo apt-get install sublime -y --quiet
echo -e "${YELLOW}Installed ${NC}SublimeText"

echo -e "${GREEN}------------------------------------------"
echo -e "${NC}Installed Sublime, GCC and G++"
echo -e "${GREEN}------------------------------------------"
