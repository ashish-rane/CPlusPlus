#!/bin/sh

directory=$1
component_name=$2

echo "Install Directory ${directory}"
echo "Component Name ${component_name}"


cd directory
component_directory= $(dirname ${directory})
zipname=$("echo $(dirname ${directory}).tar.gz")

echo "Target archive : ${zipname}"

tar cvzf ../${zipname} ./*
cd ..

echo "Repository Root: ${repo_root}"

#repo_target_dir = ${repo_root}/${component_name}/${component_directory}/

#echo "Moving archive from $(pwd) to repo ${repo_target_dir}"
#mkdir -p ${repo_target_dir}
#mv ${zipname} ${repo_target_dir}
echo "Done ..."
