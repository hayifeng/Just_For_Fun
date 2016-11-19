/*
描述：实现一个弹球程序，球会朝着鼠标方向运动，碰撞到窗口边界会反弹
时间：2016-11-20
*/
Ball ballGroup[] = new Ball[10];

void setup(){
    size(400, 400);
    for(int i = 0; i < ballGroup.length; i++){
        ballGroup[i] = new Ball();
    }
}

void draw(){
    background(20);
    for(int i = 0; i < ballGroup.length; i++){
        ballGroup[i].run();
    }
}

class Ball{
    PVector location;           //位置
    PVector velocity;           //速度
    PVector acceleration;       //加速度
    int size = 15;              //球大小
    Ball(){
        location = new PVector(random(0, width), random(0, height));    //初始化位置随机
        velocity = new PVector(0, 0);
        acceleration = new PVector(0, 0);;
    }
    //球运动
    void move(){
        PVector mouse = new PVector(mouseX, mouseY);
        PVector dir = PVector.sub(mouse, location);         //计算球指向鼠标的向量
        dir.normalize();                                    //正规化
        dir.mult(0.05);                                     //大小改为合适值
        acceleration = dir;                                 //赋值给加速度
        velocity.add(acceleration);
        location.add(velocity);
    }
    //显示
    void display(){
        noStroke();
        fill(200);
        ellipse(location.x, location.y, size, size);
    }
    //检查边界，超出边界反弹
    void checkEdges(){
        if(location.x > width || location.x < 0){
            velocity.x = -1 * velocity.x;
        }
        if(location.y > height || location.y < 0){
            velocity.y = -1 * velocity.y;
        }
    }
    //开始执行
    void run(){
        display();
        move();
        checkEdges();
    }
}
