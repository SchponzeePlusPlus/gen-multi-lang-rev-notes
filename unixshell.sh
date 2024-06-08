#!/bin/bash

#	Unix and Linux

# https://askubuntu.com/questions/223691/how-do-i-create-a-script-file-for-terminal-commands
#	https://ubuntu.com/tutorials/command-line-for-beginners#2-a-brief-history-lesson
#	https://www.hostinger.com/tutorials/linux-commands

#	If you can’t find a launcher, or if you just want a faster way to bring up the terminal, most Linux systems use the same default keyboard shortcut to start it: Ctrl-Alt-T
#	Note that the directory separator is a forward slash (“/”), not the backslash that you may be used to from Windows or DOS systems
#	 Using the tilde character (“~”) at the start of your path similarly means “starting from my home directory”.

#	Commands

#		pwd
#			print working directory

#		cd
#			change directories

cd ~[username] – goes to another user’s home directory

cd .. – moves one directory up.

cd- – switches to the previous directory.

#		ls
#			list their contents
-R – lists all the files in the subdirectories.
-a – shows all files, including hidden ones.
-lh – converts sizes to readable formats, such as MB, GB, and TB.
ls -R -a -lh

#		mv
#			rename (?) or move files

#		rm
#			Deletes a file

cp	Copies files and directories, including their content

touch	Creates a new empty file

file	Checks a file’s type
zip and unzip	Creates and extracts a ZIP archive
tar	Archives files without compression in a TAR format
nano, vi, and jed	Edits a file with a text editor

#		mkdir [option] [directory_name]
#			make directory
#			“-p” that we used is called an option or a switch (in this case it means “create the parent directories, too”)
mkdir -p "dir1" "dir2"

#	Suppose we wanted to capture the output of that command as a text file that we can look at or manipulate further. All we need to do is to add the greater-than character (“>”) to the end of our command line, followed by the name of the file to write to:

ls > output.txt

#		cat
#				Lists, combines, and writes a file’s content as a standard output

#	This time there’s nothing printed to the screen, because the output is being redirected to our file instead. If you just run ls on its own you should see that the output.txt file has been created. We can use the cat command to look at its content:

cat output.txt

#	echo just prints its arguments back out again (hence the name)

echo "This is a test"

grep	Searches a string within a file
sed	Finds, replaces, or deletes patterns in a file
head	Displays a file’s first ten lines
tail	Prints a file’s last ten lines
awk	Finds and manipulates patterns in a file
sort	Reorders a file’s content
cut	Sections and prints lines from a file
diff	Compares two files’ content and their differences
tee	Prints command outputs in Terminal and a file
locate	Finds files in a system’s database
find	Outputs a file or folder’s location

#		wc
#			word count

#		man
#			(manual) command

#		machine’s administrator (or superuser in Unix parlance)

#	su command. This is variously described as being short for ‘superuser’ or ‘switch user’, and allows you to change to another user on the machine without having to log out and in again. When used with no arguments it assumes you want to change to the root user (hence the first interpretation of the name), but you can pass a username to it in order to switch to a specific user account (the second interpretation). use the logout command (or Ctrl-D shortcut) as soon as possible to return to their user-level account.

#		sudo
#			Switch User and DO this command
#			Runs a command as a superuser

chmod	Modifies a file’s read, write, and execute permissions
chown	Changes a file, directory, or symbolic link’s ownership
useradd and userdel	Creates and removes a user account
df	Displays the system’s overall disk space usage
du	Checks a file or directory’s storage consumption
top	Displays running processes and the system’s resource usage
htop	Works like top but with an interactive user interface
ps	Creates a snapshot of all running processes
uname	Prints information about your machine’s kernel, name, and hardware
hostname	Shows your system’s hostname
time	Calculates commands’ execution time
systemctl	Manages system services
watch	Runs another command continuously
jobs	Displays a shell’s running processes with their statuses
kill	Terminates a running process
shutdown	Turns off or restarts the system
ping	Checks the system’s network connectivity
wget	Downloads files from a URL
curl	Transmits data between servers using URLs
scp	Securely copies files or directories to another system
rsync	Synchronizes content between directories or machines
lfconfig	Displays the system’s network interfaces and their configurations
netstat	Shows the system’s network information, like routing and sockets
traceroute	Tracks a packet’s hops to its destination
nslookup	Queries a domain’s IP address and vice versa
dig	Displays DNS information, including record types
history	Lists previously run commands
man	Shows a command’s manual
echo	Prints a message as a standard output
ln	Links files or directories
alias and unalias	Sets and removes an alias for a file or command
cal	Displays a calendar in Terminal
apt-get	Manages Debian-based distros package libraries

#	Indications that files are coming from outside the distribution’s repositories include (but are not limited to) the use of any of the following commands: curl, wget, pip, npm, make