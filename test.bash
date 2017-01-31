#!/bin/bash

#for i in `seq -10 10`
#do
#  ./main.run $i
#done
echo -----1
./main.run []
ans=0
echo Poprawna odpowiedz: nie liczba
echo -----2
./main.run 1 12
ans=1
echo Poprawna odpowiedz: 1,2
echo -----3
./main.run 0
ans=0
echo Poprawna odpowiedz: 1
echo -----4
./main.run 1111
ans=1
echo Poprawna odpowiedz: 1
echo -----5
./main.run 1233
ans=1
echo Poprawna odpowiedz: 12
echo -----6
./main.run 0122
ans=2
echo Poprawna odpowiedz: 12
echo -----7
./main.run [01][11]
ans=0
echo Poprawna odpowiedz: 121
echo -----8
./main.run [110][111][111]
ans=2
echo Poprawna odpowiedz: 212
echo -----