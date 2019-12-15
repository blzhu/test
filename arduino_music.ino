

int tonePin = 9;  //喇叭接一头接GND，另一头接tonePin
int ledPin[] = {2, 3, 4, 5, 6, 7, 8}; //亮灯Pin

int musicNum = 1 ;  //一共有2首曲子，arduino没有数组长度方法，判断曲子数量比较麻烦，所以hardcode写在这里
String music[] = {  //每三行为一曲, 速度，音调，节拍
//  "160",  //Jingle Bell
//  "x321x0 x321y0y y4325555 654210 333333 351230 444443333 322125 333333 351230 444443333 554210",
//  "222211 2222122 22222222 2222a2 221221 22b3a2 22b322233 222211 221221 22b3a2 22b322233 2222a2",

//  "160",  //we wish you a merry christmas
//  "5 aaba7 666 bbcba 755 ccdcb a655 6b7 a5 aaa 77 a76 5b cba e555 6b7 a",
//  "1 12222 111 12222 111 12222 1122 111 z1 111 z1 111 z1 111 1122 111 y"

//    "160",//卖报歌
//    "555 555 35653 235 53532 132 332 l12 665 365 5323 5 5323 5323 l123 1",
//    "221 221 22244 221 22244 221 221 221 122 221 2222 b 2222 2222 2222 b",

//    "160",//春雨是个演奏家
//    "112345D5 6641655 D5635231 25061 531 635035 DD345 056535 66D6 56330 2256431 2034312 345D 75660 556M0RR D0 556M0R6 D0 RM D D000",
//    "24422221 244222a 22222222 2222b b11 122122 1112a 244331 112a 122a2 3422212 1244221 221b 12211 3422212 c1 3422212 c1 bb d 1111",
"160",
"ssls 1x ssls 21 ss53 1xl 0044 312 100",
"2211 1b 2211 1b 2211 111 1122 111 111",
};

void setup() {
  pinMode(tonePin, OUTPUT);
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
  pinMode(ledPin[3], OUTPUT);
  pinMode(ledPin[4], OUTPUT);
  pinMode(ledPin[5], OUTPUT);
  pinMode(ledPin[6], OUTPUT);
}

void loop() {

//  for(int i=0; i<7;i++)
//  {
//    digitalWrite(ledPin[i],HIGH);
//    delay(200);
//    digitalWrite(ledPin[i],LOW);
//    delay(200);
//  }
  
  for (int i = 1; i <= musicNum; i++) {  //遍历所有的歌
    play(i);  //播放第i首歌
    delay(1000);  //两首歌之间停1秒
  }
}

void play(int idx) {
  int baseIndex = (idx - 1) * 3;  //每首歌由3个字串定义
  int speed = music[baseIndex].toInt();  //第一个字串表示速度，每分钟多少个节拍
  String song = music[baseIndex + 1];  //第二个字串定义了音调
  String pace = music[baseIndex + 2];  //第三个字串定义了每个单调的节拍长度
  for (int i = 0; i < song.length(); i++) {  //遍历整首歌
    digitalWrite(port(song[i]), HIGH);  //取出一个音调，点亮相应LED
    tone(tonePin, melody(song[i]), duration(pace[i], speed));  //发音
    delay(duration(pace[i], speed) + 10);  //延时等待发音结束，加10ms为了断开连续两个相同的音符
    digitalWrite(port(song[i]), LOW);  //灭LED
  }
}
