/*
描述：通过sin()函数画一条正弦波形
时间：2016-11-20
*/
Wave wave;

void setup(){
    size(700, 200);
    background(20);
    wave = new Wave();
    wave.display();
}

void draw(){}

class Wave{
    float offset = height /2;       //垂直偏移量
    float scaleVal = 30;            //幅度
    float angleInc = PI / 20;       //频率
    float angle = 0.0;              //初始相位
    int lineWeight = 5;             //波形宽度
    color sinColor = color(255, 0, 0);
    color cosColor = color(0, 0, 255);
    Wave(){}
    Wave(float _offset, float _scaleVal, float _angleInc, float _angle){
        offset = _offset;
        scaleVal = _scaleVal;
        angleInc = _angleInc;
        angle = _angle;
    }
    void display(){
        noStroke();
        for(int x = 0; x < width; x += 5){
            fill(sinColor, 100);
            float y = offset + sin(angle) * scaleVal;
            ellipse(x, y, lineWeight, lineWeight);

            fill(cosColor, 100);
            y = offset + cos(angle) * scaleVal;
            ellipse(x, y, lineWeight, lineWeight);

            angle += angleInc;
        }
    }
}
