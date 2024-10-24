#!/bin/bash
#calculating the current available storage
Storage=$(df -h "$HOME" | grep "$HOME" | awk '{print($4)}' | tr 'i' 'B')
if [ "$Storage" == "0BB" ];
then
	Storage="0B"
fi
echo -e "\033[33m\n -- Available Storage Before Cleaning : || $Storage || --\033[0m"
echo -e "\033[31m\n -- Cleaning ...\n\033[0m "
should_log=0
if [[ "$1" == "-p" || "$1" == "--print" ]]; then
	should_log=1
fi
function clean_glob {
	# don't do anything if argument count is zero (unmatched glob).
	if [ -z "$1" ]; then
		return 0
	fi
	if [ $should_log -eq 1 ]; then
		for arg in "$@"; do
			du -sh "$arg" 2>/dev/null
		done
	fi
	/bin/rm -rf "$@" &>/dev/null
	return 0
}
function clean {
	# to avoid printing empty lines
	# or unnecessarily calling /bin/rm
	# we resolve unmatched globs as empty strings.
	shopt -s nullglob
	echo -ne "\033[38;5;208m"
	#42 Caches
	clean_glob "$HOME"/.var/*.42*
	clean_glob "$HOME"/*.42*
	clean_glob "$HOME"/.zcompdump*
	clean_glob "$HOME"/.cocoapods.42_cache_bak*
	#Trash
	clean_glob "$HOME"/.local/share/Trash/files/*
	clean_glob "$HOME"/.var/app/com.visualstudio.code/cache/*
	clean_glob "$HOME"/.var/app/org.mozilla.firefox/cache/*
	clean_glob "$HOME"/.var/app/com.slack.Slack/cache/*
	clean_glob "$HOME"/.var/app/com.sublimetext.three/cache/*
	#General Caches files
	#giving access rights on Homebrew caches, so the script can delete them
	echo -ne "\033[0m"
}
clean
if [ $should_log -eq 1 ]; then
	echo
fi
#calculating the new available storage after cleaning
Storage=$(df -h "$HOME" | grep "$HOME" | awk '{print($4)}' | tr 'i' 'B')
if [ "$Storage" == "0BB" ];
then
	Storage="0B"
fi
echo -e "\033[32m -- Available Storage After Cleaning : || $Storage || --\n\033[0m"
#installer
