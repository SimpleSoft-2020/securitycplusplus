setlocal ENABLEDELAYEDEXPANSION

for /l %%i in (1,1,100) do (

git pull
timeout 10

)