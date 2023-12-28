#include <iostream>
#include <conio.h>
#include <windows.h>
bool gameOver;
const int width = 10;
const int height = 10;
char blocks[]={'O'};
int x, y, score;
enum Directon { STOP = 0, LEFT, RIGHT }; 
Directon dir;
int rotate;
int rotateY;
int rotateX;
 
void Setup(){  
gameOver=FALSE;
x=width/2;
y=height/2;
//fruitX=rand() % width;
//fruitY=rand() % height;
score=0;

}

void Draw(){  
system("cls"); 
for(int j=0;j<width;j++)
    std::cout<<"-";
    std::cout<<'\n';
for(int a=0;a<height;a++){
for(int k=0;k<width;k++){
    if(k==0)
        std::cout<<"|";   
    else
        std::cout<<" ";
    if(k==width-3)
        std::cout<<"|"; 
}
std::cout<<'\n';  
}              
for(int i=0;i<width;i++){
std::cout<<"-";
    }
}
void DrawBlocks(){
std::cout<<blocks[0]<<blocks[0]<<'\n';
std::cout<<blocks[0]<<blocks[0];
/////
std::cout<<blocks[1]<<'\n';
std::cout<<blocks[1]<<'\n';
std::cout<<blocks[1]<<'\n';
std::cout<<blocks[1]<<'\n';
/////  
std::cout<<' '<<blocks[2]<<' '<<'\n';
std::cout<<blocks[2]<<blocks[2]<<blocks[2];
/////
std::cout<<' '<<' '<<blocks[3]<<'\n';
std::cout<<blocks[3]<<blocks[3]<<blocks[3];

}
void Input(){
if (_kbhit()){
switch (_getch()){
case 'a':
    dir = LEFT;
    break;
case 'd':
    dir = RIGHT;
    break;
case 'x':
    gameOver = true;
    break;
        }
    }
switch (rotate % 4){
case 0:
    rotateY * 4 + rotateX;
break;
case 1:
    12 + rotateY - (rotateX * 4);
break;
case 2:
    15 - (rotateY * 4) - rotateX;
break;
case 3:
    3 - rotateY + (rotateX * 4);
break;
}
}

void Logic(){  
switch(dir){
case LEFT:
    y--;
    break;    
case RIGHT:
    y++;
    break;     
}

} 
int main(){ 
Setup();
while (!gameOver){
    Draw();
    DrawBlocks();
    Input();
    Logic();
    Sleep(200); 
    }
    return 0;
}

