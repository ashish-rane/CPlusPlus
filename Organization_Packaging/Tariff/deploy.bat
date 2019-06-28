echo "Zip Directory %1"
echo "Component Name %2"


cd %1 
for %%I in (.) do set CurrDirName=%%~nxI
echo "Current Directory %CurrDirName%"

7z a -r ../%CurrDirName%.zip  *
cd ..
echo "Creating Directory in Remote Repo: %REPO_ROOT%\%2\%CurrDirName%"
mkdir %REPO_ROOT%\%2\%CurrDirName%

move %CurrDirName%.zip %REPO_ROOT%\%2\%CurrDirName%
