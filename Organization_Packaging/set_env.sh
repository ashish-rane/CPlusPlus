#!/bin/bash

echo "Setting Repo Root"

if [[ -z ${repo_root} ]] ; then
	echo "export repo_root=/var/ares" >> ~/.bashrc
	source ~/.profile
fi 

echo "Done.."
